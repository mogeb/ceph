/* This file was generated automatically by the tracetool script.
   Do not edit it manually. Refer to the documentation to add logging. */

#ifndef BLUESTORE_BLOB_IMPL
#define BLUESTORE_BLOB_IMPL

#include "tracing/bluestore_blob.h"

static inline void __trace_split_start(uint32_t blob_offset, string this_blob)
{
    tracepoint(bluestore_blob, split_start, blob_offset, (char*)this_blob.c_str());
}

#define trace_split_start(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_split_start(_value0, _value1)

static inline void __trace_split_finish(uint32_t blob_offset, string this_blob, string blob)
{
    tracepoint(bluestore_blob, split_finish, blob_offset, (char*)this_blob.c_str(), (char*)blob.c_str());
}

#define trace_split_finish(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, __format) __trace_split_finish(_value0, _value1, _value2)

#endif
