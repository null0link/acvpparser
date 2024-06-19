/*
 * Copyright (C) 2015 - 2022, Joachim Vandersmissen <joachim@atsec.com>
 *
 * License: see LICENSE file
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ALL OF
 * WHICH ARE HEREBY DISCLAIMED.  IN NO EVENT HKDFLL THE AUTHOR BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF NOT ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

#ifndef _PARSER_KDA_TWOSTEP_H
#define _PARSER_KDA_TWOSTEP_H

#include "parser_flags.h"
#include "stringhelper.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief TwoStep KDF data structure
 *
 * @var mac [in] mac to be used for the KDF - note, the backend must use the mac
 * 		 to initialize the HMAC/CMAC cipher as required by the KDA
 * 		 TwoStep specification.
 * @var kdfmode [in] Mode of the KDF of one of the following flags:
 *		     ACVP_KDF_108_DOUBLE_PIPELINE
 *		     ACVP_KDF_108_FEEDBACK
 *		     ACVP_KDF_108_COUNTER
 * @var counter_location [in] Location of the counter specified with one of the
 * 			      following flags:
 *			      ACVP_KDF_108_AFTER_FIXED
 *			      ACVP_KDF_108_BEFORE_FIXED
 *			      ACVP_KDF_108_BEFORE_ITERATOR
 * @var counter_length [in] Length of counter to be used in bits
 * @var dkmlen [in] Length of output keying material in bits
 * @var salt [in] salt for the TwoStep KDF
 * @var iv [in] iv for the TwoStep KDF
 * @var z [in] Shared secret (input key material)
 * @var t [in] Secondary shared secret (For [SP800-56Cr2] only)
 * @var info [in] Additional information for the TwoStep KDF
 * @var dkm [in/out] The derived keying material (if buffer is non-NULL, a
		     the backend shall validate the DKM with its own data
		     and report via @val validity_success - if the buffer is
		     NULL, the generated DKM is to be returned)
 * @var validity_success [out] Does the derived key material match with
 *			 @var dkm (1) or whether it does not match (0).
 *
 * @var fixed_info_pattern [disregard]
 * @var fixed_info_encoding [disregard]
 * @var algorithm_id [disregard]
 * @var context [disregard]
 * @var label [disregard]
 * @var fi_partyU [disregard]
 * @var fi_partyU_ephem [disregard]
 * @var fi_partyV [disregard]
 * @var fi_partyV_ephem [disregard]
 */
struct kda_twostep_data {
	uint64_t mac;
	uint64_t kdfmode;
	uint64_t counter_location;
	uint32_t counter_length;
	uint32_t dkmlen;
	struct buffer salt;
	struct buffer iv;
	struct buffer z;
	struct buffer t;
	struct buffer info;
	struct buffer dkm;
	uint32_t validity_success;

	struct buffer fixed_info_pattern;
	uint64_t fixed_info_encoding;
	struct buffer algorithm_id;
	struct buffer context;
	struct buffer label;
	struct buffer fi_partyU;
	struct buffer fi_partyU_ephem;
	struct buffer fi_partyV;
	struct buffer fi_partyV_ephem;
};

/**
 * @brief Callback data structure that must be implemented by the backend.
 *
 * All functions return 0 on success or != 0 on error.
 *
 * @var hkdf Perform an SP 800-56Cr2 TwoStep key derivation
 */
struct kda_twostep_backend {
	int (*kda_twostep)(struct kda_twostep_data *data, flags_t parsed_flags);
};

void register_kda_twostep_impl(struct kda_twostep_backend *implementation);

#ifdef __cplusplus
}
#endif

#endif /* _PARSER_KDA_TWOSTEP_H */

