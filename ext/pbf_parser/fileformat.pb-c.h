/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_fileformat_2eproto__INCLUDED
#define PROTOBUF_C_fileformat_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Blob Blob;
typedef struct _BlobHeader BlobHeader;


/* --- enums --- */


/* --- messages --- */

struct  _Blob
{
  ProtobufCMessage base;
  protobuf_c_boolean has_raw;
  ProtobufCBinaryData raw;
  protobuf_c_boolean has_raw_size;
  int32_t raw_size;
  protobuf_c_boolean has_zlib_data;
  ProtobufCBinaryData zlib_data;
  protobuf_c_boolean has_lzma_data;
  ProtobufCBinaryData lzma_data;
  protobuf_c_boolean has_obsolete_bzip2_data PROTOBUF_C_DEPRECATED;
  ProtobufCBinaryData obsolete_bzip2_data PROTOBUF_C_DEPRECATED;
};
#define BLOB__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&blob__descriptor) \
    , 0,{0,NULL}, 0,0, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL} }


struct  _BlobHeader
{
  ProtobufCMessage base;
  char *type;
  protobuf_c_boolean has_indexdata;
  ProtobufCBinaryData indexdata;
  int32_t datasize;
};
#define BLOB_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&blob_header__descriptor) \
    , NULL, 0,{0,NULL}, 0 }


/* Blob methods */
void   blob__init
                     (Blob         *message);
size_t blob__get_packed_size
                     (const Blob   *message);
size_t blob__pack
                     (const Blob   *message,
                      uint8_t             *out);
size_t blob__pack_to_buffer
                     (const Blob   *message,
                      ProtobufCBuffer     *buffer);
Blob *
       blob__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   blob__free_unpacked
                     (Blob *message,
                      ProtobufCAllocator *allocator);
/* BlobHeader methods */
void   blob_header__init
                     (BlobHeader         *message);
size_t blob_header__get_packed_size
                     (const BlobHeader   *message);
size_t blob_header__pack
                     (const BlobHeader   *message,
                      uint8_t             *out);
size_t blob_header__pack_to_buffer
                     (const BlobHeader   *message,
                      ProtobufCBuffer     *buffer);
BlobHeader *
       blob_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   blob_header__free_unpacked
                     (BlobHeader *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Blob_Closure)
                 (const Blob *message,
                  void *closure_data);
typedef void (*BlobHeader_Closure)
                 (const BlobHeader *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor blob__descriptor;
extern const ProtobufCMessageDescriptor blob_header__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_fileformat_2eproto__INCLUDED */