/* This file was generated automatically by the tracetool script.
   Do not edit it manually. Refer to the documentation to add logging. */

#ifndef BLUEFS_IMPL
#define BLUEFS_IMPL

#include "tracing/bluefs.h"

static inline void __trace_balance_freespace_insufficient_allocate(uint64_t gift, uint64_t min_alloc_size, int64_t alloc_len)
{
    tracepoint(bluefs, balance_freespace_insufficient_allocate, gift, min_alloc_size, alloc_len);
}

#define trace_balance_freespace_insufficient_allocate(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, __format) __trace_balance_freespace_insufficient_allocate(_value0, _value1, _value2)

static inline void __trace_balance_freespace_gifting_to_bluefs(string extent)
{
    tracepoint(bluefs, balance_freespace_gifting_to_bluefs, (char*)extent.c_str());
}

#define trace_balance_freespace_gifting_to_bluefs(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_balance_freespace_gifting_to_bluefs(_value0)

#endif
