/* This file was generated automatically by the tracetool script.
   Do not edit it manually. Refer to the documentation to add logging. */

#ifndef BLUESTORE_LRU_CACHE_IMPL
#define BLUESTORE_LRU_CACHE_IMPL

#include "tracing/bluestore_lru_cache.h"

static inline void __trace_trim(size_t lru_size, uint64_t onode_max, uint64_t buffer_size, uint64_t buffer_max)
{
    tracepoint(bluestore_lru_cache, trim, lru_size, onode_max, buffer_size, buffer_max);
}

#define trace_trim(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, __format) __trace_trim(_value0, _value1, _value2, _value3)

#endif
