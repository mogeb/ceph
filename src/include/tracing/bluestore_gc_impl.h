/* This file was generated automatically by the tracetool script.
   Do not edit it manually. Refer to the documentation to add logging. */

#ifndef BLUESTORE_GC_IMPL
#define BLUESTORE_GC_IMPL

#include "tracing/bluestore_gc.h"

static inline void __trace_process_protrusive_extents_lookup_offset(uint64_t lookup_start_offset, uint64_t lookup_end_offset)
{
    tracepoint(bluestore_gc, process_protrusive_extents_lookup_offset, lookup_start_offset, lookup_end_offset);
}

#define trace_process_protrusive_extents_lookup_offset(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_process_protrusive_extents_lookup_offset(_value0, _value1)

static inline void __trace_process_protrusive_extents_alloc(uint64_t alloc_unit_start, uint64_t alloc_unit_end)
{
    tracepoint(bluestore_gc, process_protrusive_extents_alloc, alloc_unit_start, alloc_unit_end);
}

#define trace_process_protrusive_extents_alloc(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_process_protrusive_extents_alloc(_value0, _value1)

static inline void __trace_process_protrusive_extents_expected(uint64_t alloc_unit_start)
{
    tracepoint(bluestore_gc, process_protrusive_extents_expected, alloc_unit_start);
}

#define trace_process_protrusive_extents_expected(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_process_protrusive_extents_expected(_value0)

static inline void __trace_process_protrusive_extents_expected_allocations(uint64_t expected_allocations, uint64_t alloc_unit_end)
{
    tracepoint(bluestore_gc, process_protrusive_extents_expected_allocations, expected_allocations, alloc_unit_end);
}

#define trace_process_protrusive_extents_expected_allocations(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_process_protrusive_extents_expected_allocations(_value0, _value1)

static inline void __trace_process_protrusive_extents_affected_blob(string affected_blob, uint64_t length, uint64_t referenced_bytes)
{
    tracepoint(bluestore_gc, process_protrusive_extents_affected_blob, (char*)affected_blob.c_str(), length, referenced_bytes);
}

#define trace_process_protrusive_extents_affected_blob(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, __format) __trace_process_protrusive_extents_affected_blob(_value0, _value1, _value2)

static inline void __trace_process_protrusive_extents_expected_allocations_start(uint64_t alloc_unit_start)
{
    tracepoint(bluestore_gc, process_protrusive_extents_expected_allocations_start, alloc_unit_start);
}

#define trace_process_protrusive_extents_expected_allocations_start(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_process_protrusive_extents_expected_allocations_start(_value0)

static inline void __trace_process_protrusive_extents_expected4release(string blob, int64_t blob_expected_for_release, int64_t expected_allocations)
{
    tracepoint(bluestore_gc, process_protrusive_extents_expected4release, (char*)blob.c_str(), blob_expected_for_release, expected_allocations);
}

#define trace_process_protrusive_extents_expected4release(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, __format) __trace_process_protrusive_extents_expected4release(_value0, _value1, _value2)

static inline void __trace_estimate_affected_blob(string affected_blob, uint64_t logical_offset, uint64_t length)
{
    tracepoint(bluestore_gc, estimate_affected_blob, (char*)affected_blob.c_str(), logical_offset, length);
}

#define trace_estimate_affected_blob(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, __format) __trace_estimate_affected_blob(_value0, _value1, _value2)

static inline void __trace_estimate_range(uint64_t gc_start_offset, uint64_t gc_end_offset)
{
    tracepoint(bluestore_gc, estimate_range, gc_start_offset, gc_end_offset);
}

#define trace_estimate_range(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_estimate_range(_value0, _value1)

#endif
