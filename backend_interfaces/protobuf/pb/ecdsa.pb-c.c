/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: backend_interfaces/protobuf/pb/ecdsa.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "backend_interfaces/protobuf/pb/ecdsa.pb-c.h"
void   ecdsa_keygen_data_msg__init
                     (EcdsaKeygenDataMsg         *message)
{
  static const EcdsaKeygenDataMsg init_value = ECDSA_KEYGEN_DATA_MSG__INIT;
  *message = init_value;
}
size_t ecdsa_keygen_data_msg__get_packed_size
                     (const EcdsaKeygenDataMsg *message)
{
  assert(message->base.descriptor == &ecdsa_keygen_data_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ecdsa_keygen_data_msg__pack
                     (const EcdsaKeygenDataMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ecdsa_keygen_data_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ecdsa_keygen_data_msg__pack_to_buffer
                     (const EcdsaKeygenDataMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ecdsa_keygen_data_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
EcdsaKeygenDataMsg *
       ecdsa_keygen_data_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (EcdsaKeygenDataMsg *)
     protobuf_c_message_unpack (&ecdsa_keygen_data_msg__descriptor,
                                allocator, len, data);
}
void   ecdsa_keygen_data_msg__free_unpacked
                     (EcdsaKeygenDataMsg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ecdsa_keygen_data_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ecdsa_keygen_extra_data_msg__init
                     (EcdsaKeygenExtraDataMsg         *message)
{
  static const EcdsaKeygenExtraDataMsg init_value = ECDSA_KEYGEN_EXTRA_DATA_MSG__INIT;
  *message = init_value;
}
size_t ecdsa_keygen_extra_data_msg__get_packed_size
                     (const EcdsaKeygenExtraDataMsg *message)
{
  assert(message->base.descriptor == &ecdsa_keygen_extra_data_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ecdsa_keygen_extra_data_msg__pack
                     (const EcdsaKeygenExtraDataMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ecdsa_keygen_extra_data_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ecdsa_keygen_extra_data_msg__pack_to_buffer
                     (const EcdsaKeygenExtraDataMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ecdsa_keygen_extra_data_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
EcdsaKeygenExtraDataMsg *
       ecdsa_keygen_extra_data_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (EcdsaKeygenExtraDataMsg *)
     protobuf_c_message_unpack (&ecdsa_keygen_extra_data_msg__descriptor,
                                allocator, len, data);
}
void   ecdsa_keygen_extra_data_msg__free_unpacked
                     (EcdsaKeygenExtraDataMsg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ecdsa_keygen_extra_data_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ecdsa_pkvver_data_msg__init
                     (EcdsaPkvverDataMsg         *message)
{
  static const EcdsaPkvverDataMsg init_value = ECDSA_PKVVER_DATA_MSG__INIT;
  *message = init_value;
}
size_t ecdsa_pkvver_data_msg__get_packed_size
                     (const EcdsaPkvverDataMsg *message)
{
  assert(message->base.descriptor == &ecdsa_pkvver_data_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ecdsa_pkvver_data_msg__pack
                     (const EcdsaPkvverDataMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ecdsa_pkvver_data_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ecdsa_pkvver_data_msg__pack_to_buffer
                     (const EcdsaPkvverDataMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ecdsa_pkvver_data_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
EcdsaPkvverDataMsg *
       ecdsa_pkvver_data_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (EcdsaPkvverDataMsg *)
     protobuf_c_message_unpack (&ecdsa_pkvver_data_msg__descriptor,
                                allocator, len, data);
}
void   ecdsa_pkvver_data_msg__free_unpacked
                     (EcdsaPkvverDataMsg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ecdsa_pkvver_data_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ecdsa_siggen_data_msg__init
                     (EcdsaSiggenDataMsg         *message)
{
  static const EcdsaSiggenDataMsg init_value = ECDSA_SIGGEN_DATA_MSG__INIT;
  *message = init_value;
}
size_t ecdsa_siggen_data_msg__get_packed_size
                     (const EcdsaSiggenDataMsg *message)
{
  assert(message->base.descriptor == &ecdsa_siggen_data_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ecdsa_siggen_data_msg__pack
                     (const EcdsaSiggenDataMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ecdsa_siggen_data_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ecdsa_siggen_data_msg__pack_to_buffer
                     (const EcdsaSiggenDataMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ecdsa_siggen_data_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
EcdsaSiggenDataMsg *
       ecdsa_siggen_data_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (EcdsaSiggenDataMsg *)
     protobuf_c_message_unpack (&ecdsa_siggen_data_msg__descriptor,
                                allocator, len, data);
}
void   ecdsa_siggen_data_msg__free_unpacked
                     (EcdsaSiggenDataMsg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ecdsa_siggen_data_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ecdsa_sigver_data_msg__init
                     (EcdsaSigverDataMsg         *message)
{
  static const EcdsaSigverDataMsg init_value = ECDSA_SIGVER_DATA_MSG__INIT;
  *message = init_value;
}
size_t ecdsa_sigver_data_msg__get_packed_size
                     (const EcdsaSigverDataMsg *message)
{
  assert(message->base.descriptor == &ecdsa_sigver_data_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ecdsa_sigver_data_msg__pack
                     (const EcdsaSigverDataMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ecdsa_sigver_data_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ecdsa_sigver_data_msg__pack_to_buffer
                     (const EcdsaSigverDataMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ecdsa_sigver_data_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
EcdsaSigverDataMsg *
       ecdsa_sigver_data_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (EcdsaSigverDataMsg *)
     protobuf_c_message_unpack (&ecdsa_sigver_data_msg__descriptor,
                                allocator, len, data);
}
void   ecdsa_sigver_data_msg__free_unpacked
                     (EcdsaSigverDataMsg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ecdsa_sigver_data_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ecdsa_keygen_en_msg__init
                     (EcdsaKeygenEnMsg         *message)
{
  static const EcdsaKeygenEnMsg init_value = ECDSA_KEYGEN_EN_MSG__INIT;
  *message = init_value;
}
size_t ecdsa_keygen_en_msg__get_packed_size
                     (const EcdsaKeygenEnMsg *message)
{
  assert(message->base.descriptor == &ecdsa_keygen_en_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ecdsa_keygen_en_msg__pack
                     (const EcdsaKeygenEnMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ecdsa_keygen_en_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ecdsa_keygen_en_msg__pack_to_buffer
                     (const EcdsaKeygenEnMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ecdsa_keygen_en_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
EcdsaKeygenEnMsg *
       ecdsa_keygen_en_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (EcdsaKeygenEnMsg *)
     protobuf_c_message_unpack (&ecdsa_keygen_en_msg__descriptor,
                                allocator, len, data);
}
void   ecdsa_keygen_en_msg__free_unpacked
                     (EcdsaKeygenEnMsg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ecdsa_keygen_en_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ecdsa_free_key_msg__init
                     (EcdsaFreeKeyMsg         *message)
{
  static const EcdsaFreeKeyMsg init_value = ECDSA_FREE_KEY_MSG__INIT;
  *message = init_value;
}
size_t ecdsa_free_key_msg__get_packed_size
                     (const EcdsaFreeKeyMsg *message)
{
  assert(message->base.descriptor == &ecdsa_free_key_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ecdsa_free_key_msg__pack
                     (const EcdsaFreeKeyMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ecdsa_free_key_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ecdsa_free_key_msg__pack_to_buffer
                     (const EcdsaFreeKeyMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ecdsa_free_key_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
EcdsaFreeKeyMsg *
       ecdsa_free_key_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (EcdsaFreeKeyMsg *)
     protobuf_c_message_unpack (&ecdsa_free_key_msg__descriptor,
                                allocator, len, data);
}
void   ecdsa_free_key_msg__free_unpacked
                     (EcdsaFreeKeyMsg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ecdsa_free_key_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ecdsa_keygen_data_msg__field_descriptors[4] =
{
  {
    "d",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenDataMsg, d),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qx",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenDataMsg, qx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qy",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenDataMsg, qy),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cipher",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenDataMsg, cipher),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ecdsa_keygen_data_msg__field_indices_by_name[] = {
  1,   /* field[1] = Qx */
  2,   /* field[2] = Qy */
  3,   /* field[3] = cipher */
  0,   /* field[0] = d */
};
static const ProtobufCIntRange ecdsa_keygen_data_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor ecdsa_keygen_data_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "EcdsaKeygenDataMsg",
  "EcdsaKeygenDataMsg",
  "EcdsaKeygenDataMsg",
  "",
  sizeof(EcdsaKeygenDataMsg),
  4,
  ecdsa_keygen_data_msg__field_descriptors,
  ecdsa_keygen_data_msg__field_indices_by_name,
  1,  ecdsa_keygen_data_msg__number_ranges,
  (ProtobufCMessageInit) ecdsa_keygen_data_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ecdsa_keygen_extra_data_msg__field_descriptors[4] =
{
  {
    "d",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenExtraDataMsg, d),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qx",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenExtraDataMsg, qx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qy",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenExtraDataMsg, qy),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cipher",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenExtraDataMsg, cipher),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ecdsa_keygen_extra_data_msg__field_indices_by_name[] = {
  1,   /* field[1] = Qx */
  2,   /* field[2] = Qy */
  3,   /* field[3] = cipher */
  0,   /* field[0] = d */
};
static const ProtobufCIntRange ecdsa_keygen_extra_data_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor ecdsa_keygen_extra_data_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "EcdsaKeygenExtraDataMsg",
  "EcdsaKeygenExtraDataMsg",
  "EcdsaKeygenExtraDataMsg",
  "",
  sizeof(EcdsaKeygenExtraDataMsg),
  4,
  ecdsa_keygen_extra_data_msg__field_descriptors,
  ecdsa_keygen_extra_data_msg__field_indices_by_name,
  1,  ecdsa_keygen_extra_data_msg__number_ranges,
  (ProtobufCMessageInit) ecdsa_keygen_extra_data_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ecdsa_pkvver_data_msg__field_descriptors[4] =
{
  {
    "Qx",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaPkvverDataMsg, qx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qy",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaPkvverDataMsg, qy),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cipher",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(EcdsaPkvverDataMsg, cipher),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "keyver_success",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(EcdsaPkvverDataMsg, keyver_success),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ecdsa_pkvver_data_msg__field_indices_by_name[] = {
  0,   /* field[0] = Qx */
  1,   /* field[1] = Qy */
  2,   /* field[2] = cipher */
  3,   /* field[3] = keyver_success */
};
static const ProtobufCIntRange ecdsa_pkvver_data_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor ecdsa_pkvver_data_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "EcdsaPkvverDataMsg",
  "EcdsaPkvverDataMsg",
  "EcdsaPkvverDataMsg",
  "",
  sizeof(EcdsaPkvverDataMsg),
  4,
  ecdsa_pkvver_data_msg__field_descriptors,
  ecdsa_pkvver_data_msg__field_indices_by_name,
  1,  ecdsa_pkvver_data_msg__number_ranges,
  (ProtobufCMessageInit) ecdsa_pkvver_data_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ecdsa_siggen_data_msg__field_descriptors[8] =
{
  {
    "msg",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, msg),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qx",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, qx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qy",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, qy),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "R",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, r),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "S",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, s),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "component",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, component),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cipher",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, cipher),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "privkey",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(EcdsaSiggenDataMsg, privkey),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ecdsa_siggen_data_msg__field_indices_by_name[] = {
  1,   /* field[1] = Qx */
  2,   /* field[2] = Qy */
  3,   /* field[3] = R */
  4,   /* field[4] = S */
  6,   /* field[6] = cipher */
  5,   /* field[5] = component */
  0,   /* field[0] = msg */
  7,   /* field[7] = privkey */
};
static const ProtobufCIntRange ecdsa_siggen_data_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor ecdsa_siggen_data_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "EcdsaSiggenDataMsg",
  "EcdsaSiggenDataMsg",
  "EcdsaSiggenDataMsg",
  "",
  sizeof(EcdsaSiggenDataMsg),
  8,
  ecdsa_siggen_data_msg__field_descriptors,
  ecdsa_siggen_data_msg__field_indices_by_name,
  1,  ecdsa_siggen_data_msg__number_ranges,
  (ProtobufCMessageInit) ecdsa_siggen_data_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ecdsa_sigver_data_msg__field_descriptors[8] =
{
  {
    "msg",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, msg),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qx",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, qx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Qy",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, qy),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "R",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, r),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "S",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, s),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "component",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, component),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cipher",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, cipher),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sigver_success",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(EcdsaSigverDataMsg, sigver_success),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ecdsa_sigver_data_msg__field_indices_by_name[] = {
  1,   /* field[1] = Qx */
  2,   /* field[2] = Qy */
  3,   /* field[3] = R */
  4,   /* field[4] = S */
  6,   /* field[6] = cipher */
  5,   /* field[5] = component */
  0,   /* field[0] = msg */
  7,   /* field[7] = sigver_success */
};
static const ProtobufCIntRange ecdsa_sigver_data_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor ecdsa_sigver_data_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "EcdsaSigverDataMsg",
  "EcdsaSigverDataMsg",
  "EcdsaSigverDataMsg",
  "",
  sizeof(EcdsaSigverDataMsg),
  8,
  ecdsa_sigver_data_msg__field_descriptors,
  ecdsa_sigver_data_msg__field_indices_by_name,
  1,  ecdsa_sigver_data_msg__number_ranges,
  (ProtobufCMessageInit) ecdsa_sigver_data_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ecdsa_keygen_en_msg__field_descriptors[4] =
{
  {
    "curve",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenEnMsg, curve),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "qx",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenEnMsg, qx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "qy",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenEnMsg, qy),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "privkey",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(EcdsaKeygenEnMsg, privkey),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ecdsa_keygen_en_msg__field_indices_by_name[] = {
  0,   /* field[0] = curve */
  3,   /* field[3] = privkey */
  1,   /* field[1] = qx */
  2,   /* field[2] = qy */
};
static const ProtobufCIntRange ecdsa_keygen_en_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor ecdsa_keygen_en_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "EcdsaKeygenEnMsg",
  "EcdsaKeygenEnMsg",
  "EcdsaKeygenEnMsg",
  "",
  sizeof(EcdsaKeygenEnMsg),
  4,
  ecdsa_keygen_en_msg__field_descriptors,
  ecdsa_keygen_en_msg__field_indices_by_name,
  1,  ecdsa_keygen_en_msg__number_ranges,
  (ProtobufCMessageInit) ecdsa_keygen_en_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ecdsa_free_key_msg__field_descriptors[1] =
{
  {
    "privkey",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(EcdsaFreeKeyMsg, privkey),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ecdsa_free_key_msg__field_indices_by_name[] = {
  0,   /* field[0] = privkey */
};
static const ProtobufCIntRange ecdsa_free_key_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor ecdsa_free_key_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "EcdsaFreeKeyMsg",
  "EcdsaFreeKeyMsg",
  "EcdsaFreeKeyMsg",
  "",
  sizeof(EcdsaFreeKeyMsg),
  1,
  ecdsa_free_key_msg__field_descriptors,
  ecdsa_free_key_msg__field_indices_by_name,
  1,  ecdsa_free_key_msg__number_ranges,
  (ProtobufCMessageInit) ecdsa_free_key_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
