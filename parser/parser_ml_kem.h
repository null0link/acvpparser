/*
 * Copyright (C) 2024, Stephan Mueller <smueller@chronox.de>
 *
 * License: see LICENSE file
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ALL OF
 * WHICH ARE HEREBY DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF NOT ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

#ifndef _PARSER_ML_KEM_H
#define _PARSER_ML_KEM_H

#include "parser_flags.h"
#include "stringhelper.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief FIPS 203 ML-KEM key generation cipher data structure holding
 *	  the data for the cipher operations specified in ml_kem_keygen
 *	  backend
 *
 * @var d [in] Seed for key generation in binary form
 * @var z [in] Value z for pseudo-random output on reject
 * @var ek [out] Generated encapsulation / public key in binary form.
 *		 Note, the backend must allocate the buffer of the right
 *		 size before storing data in it. The parser frees the memory.
 * @var dk [out] Generated decapsulation / secret key in binary form.
 *		 Note, the backend must allocate the buffer of the right
 *		 size before storing data in it. The parser frees the memory.
 * @var cipher [in] Cipher specification as defined in cipher_definitions.h
 */
struct ml_kem_keygen_data {
	struct buffer d;
	struct buffer z;
	struct buffer ek;
	struct buffer dk;
	uint64_t cipher;
};

/**
 * @brief FIPS 203 ML-KEM encapsulation cipher data structure
 *	  holding the data for the cipher operations specified in
 *	  ml_kem_encapsulation backend
 *
 * @var msg [in] Message to be encapsulated - note this is the "random" message
 *		 to be used instead of a self-generated random message
 * @var ek [in] Encapsulation / public key
 * @var c [out] ML-KEM cipher text
 *		Note, the backend must allocate the buffer of the right
 *		size before storing data in it. The parser frees the memory.
 * @var ss [out] Shared secret generated by decapsulation
 *		  Note, the backend must allocate the buffer of the right
 *		  size before storing data in it. The parser frees the memory.
 * @var cipher [in] Cipher specification as defined in cipher_definitions.h
 */
struct ml_kem_encapsulation_data {
	struct buffer msg;
	struct buffer ek;
	struct buffer c;
	struct buffer ss;
	uint64_t cipher;
};

/**
 * @brief FIPS 203 ML-KEM decapsulation cipher data structure holding
 *	  the data for the cipher operations specified in ml_kem_key_gen
 *	  backend
 *
 * @var c [in] ML-KEM cipher text
 * @var dk [in] Decapsulation / secret key
 * @var ss [out] Shared secret generated by decapsulation
 *		  Note, the backend must allocate the buffer of the right
 *		  size before storing data in it. The parser frees the memory.
 * @var cipher [in] Cipher specification as defined in cipher_definitions.h
 */
struct ml_kem_decapsulation_data {
	struct buffer c;
	struct buffer dk;
	struct buffer ss;
	uint64_t cipher;
};

/**
 * @brief Callback data structure that must be implemented by the backend.
 *
 * All functions return 0 on success or != 0 on error.
 *
 * @var ml_kem_keygen Perform a ML-KEM key generation operation with the given
 *		      data.
 * @var ml_kem_encapsulation Perform a ML-KEM encapsulation operation with the
 *		      given data.
 * @var ml_kem_decapsulation Perform a ML-KEM decapsulation operation with the
 *		      given data.
 */

struct ml_kem_backend {
	int (*ml_kem_keygen)(struct ml_kem_keygen_data *data,
			     flags_t parsed_flags);
	int (*ml_kem_encapsulation)(struct ml_kem_encapsulation_data *data,
				    flags_t parsed_flags);
	int (*ml_kem_decapsulation)(struct ml_kem_decapsulation_data *data,
				    flags_t parsed_flags);
};

void register_ml_kem_impl(struct ml_kem_backend *implementation);

#ifdef __cplusplus
}
#endif

#endif /* _PARSER_ML_KEM_H */
