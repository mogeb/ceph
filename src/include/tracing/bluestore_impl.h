/* This file was generated automatically by the tracetool script.
   Do not edit it manually. Refer to the documentation to add logging. */

#ifndef BLUESTORE_IMPL
#define BLUESTORE_IMPL

#include "tracing/bluestore.h"

static inline void __trace_onodespace_clear()
{
    tracepoint(bluestore, onodespace_clear);
}

#define trace_onodespace_clear(__loglevel, __subsys, __format) __trace_onodespace_clear()

static inline void __trace_extentmap_reshard(uint32_t needs_reshard_begin, uint32_t needs_reshard_end, size_t extent_map_shards_size, string oid)
{
    tracepoint(bluestore, extentmap_reshard, needs_reshard_begin, needs_reshard_end, extent_map_shards_size, (char*)oid.c_str());
}

#define trace_extentmap_reshard(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, __format) __trace_extentmap_reshard(_value0, _value1, _value2, _value3)

static inline void __trace_handle_discard()
{
    tracepoint(bluestore, handle_discard);
}

#define trace_handle_discard(__loglevel, __subsys, __format) __trace_handle_discard()

static inline void __trace_compression_set_to_none()
{
    tracepoint(bluestore, compression_set_to_none);
}

#define trace_compression_set_to_none(__loglevel, __subsys, __format) __trace_compression_set_to_none()

static inline void __trace_set_csum(string csum_type)
{
    tracepoint(bluestore, set_csum, (char*)csum_type.c_str());
}

#define trace_set_csum(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_set_csum(_value0)

static inline void __trace_set_throttle_params(uint64_t throttle_cost_per_io)
{
    tracepoint(bluestore, set_throttle_params, throttle_cost_per_io);
}

#define trace_set_throttle_params(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_set_throttle_params(_value0)

static inline void __trace_set_blob_size(uint64_t max_blob_size)
{
    tracepoint(bluestore, set_blob_size, max_blob_size);
}

#define trace_set_blob_size(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_set_blob_size(_value0)

static inline void __trace_show_cache_sizes(uint64_t cache_size, float cache_meta_ratio, float cache_kv_ratio, float cache_data_ratio)
{
    tracepoint(bluestore, show_cache_sizes, cache_size, cache_meta_ratio, cache_kv_ratio, cache_data_ratio);
}

#define trace_show_cache_sizes(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, __format) __trace_show_cache_sizes(_value0, _value1, _value2, _value3)

static inline void __trace_write_bdev_label(string path, string label)
{
    tracepoint(bluestore, write_bdev_label, (char*)path.c_str(), (char*)label.c_str());
}

#define trace_write_bdev_label(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_write_bdev_label(_value0, _value1)

static inline void __trace_read_bdev_label()
{
    tracepoint(bluestore, read_bdev_label);
}

#define trace_read_bdev_label(__loglevel, __subsys, __format) __trace_read_bdev_label()

static inline void __trace_read_bdev_label_result(string label)
{
    tracepoint(bluestore, read_bdev_label_result, (char*)label.c_str());
}

#define trace_read_bdev_label_result(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_read_bdev_label_result(_value0)

static inline void __trace_disable_bluefs_min(string dev_size)
{
    tracepoint(bluestore, disable_bluefs_min, (char*)dev_size.c_str());
}

#define trace_disable_bluefs_min(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_disable_bluefs_min(_value0)

static inline void __trace_open_fm_pre_fragmenting(float bluestore_debug_prefill, int prefragment_max)
{
    tracepoint(bluestore, open_fm_pre_fragmenting, bluestore_debug_prefill, prefragment_max);
}

#define trace_open_fm_pre_fragmenting(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_open_fm_pre_fragmenting(_value0, _value1)

static inline void __trace_opening_allocation_metadata()
{
    tracepoint(bluestore, opening_allocation_metadata);
}

#define trace_opening_allocation_metadata(__loglevel, __subsys, __format) __trace_opening_allocation_metadata()

static inline void __trace_open_alloc_loaded_extents(string bytes, uint64_t num)
{
    tracepoint(bluestore, open_alloc_loaded_extents, (char*)bytes.c_str(), num);
}

#define trace_open_alloc_loaded_extents(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_open_alloc_loaded_extents(_value0, _value1)

static inline void __trace_open_alloc(string bluefs_extents)
{
    tracepoint(bluestore, open_alloc, (char*)bluefs_extents.c_str());
}

#define trace_open_alloc(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_open_alloc(_value0)

static inline void __trace_bluefs_disabled()
{
    tracepoint(bluestore, bluefs_disabled);
}

#define trace_bluefs_disabled(__loglevel, __subsys, __format) __trace_bluefs_disabled()

static inline void __trace_wal_is_rotational(int is_rotational)
{
    tracepoint(bluestore, wal_is_rotational, is_rotational);
}

#define trace_wal_is_rotational(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_wal_is_rotational(_value0)

static inline void __trace_open_db_kv_backend(string kv_backend)
{
    tracepoint(bluestore, open_db_kv_backend, (char*)kv_backend.c_str());
}

#define trace_open_db_kv_backend(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_open_db_kv_backend(_value0)

static inline void __trace_open_db_do_bluefs(int do_bluefs)
{
    tracepoint(bluestore, open_db_do_bluefs, do_bluefs);
}

#define trace_open_db_do_bluefs(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_open_db_do_bluefs(_value0)

static inline void __trace_initializing_bluefs()
{
    tracepoint(bluestore, initializing_bluefs);
}

#define trace_initializing_bluefs(__loglevel, __subsys, __format) __trace_initializing_bluefs()

static inline void __trace_open_db(string kv_backend, string fn, string options)
{
    tracepoint(bluestore, open_db, (char*)kv_backend.c_str(), (char*)fn.c_str(), (char*)options.c_str());
}

#define trace_open_db(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, __format) __trace_open_db(_value0, _value1, _value2)

static inline void __trace_bs_setup_block_symlink_created(string name, string epath)
{
    tracepoint(bluestore, bs_setup_block_symlink_created, (char*)name.c_str(), (char*)epath.c_str());
}

#define trace_bs_setup_block_symlink_created(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_bs_setup_block_symlink_created(_value0, _value1)

static inline void __trace_bs_setup_block_symlink_resized(string name, string size)
{
    tracepoint(bluestore, bs_setup_block_symlink_resized, (char*)name.c_str(), (char*)size.c_str());
}

#define trace_bs_setup_block_symlink_resized(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_bs_setup_block_symlink_resized(_value0, _value1)

static inline void __trace_mkfs_create(string path)
{
    tracepoint(bluestore, mkfs_create, (char*)path.c_str());
}

#define trace_mkfs_create(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_mkfs_create(_value0)

static inline void __trace_mkfs_create_already_created(string path)
{
    tracepoint(bluestore, mkfs_create_already_created, (char*)path.c_str());
}

#define trace_mkfs_create_already_created(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_mkfs_create_already_created(_value0)

static inline void __trace_mkfs_create_using_fsid_is_zero(string fsid, int generated)
{
    tracepoint(bluestore, mkfs_create_using_fsid_is_zero, (char*)fsid.c_str(), generated);
}

#define trace_mkfs_create_using_fsid_is_zero(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_mkfs_create_using_fsid_is_zero(_value0, _value1)

static inline void __trace_mkfs_create_using_fsid_is_not_zero(string fsid, int generated)
{
    tracepoint(bluestore, mkfs_create_using_fsid_is_not_zero, (char*)fsid.c_str(), generated);
}

#define trace_mkfs_create_using_fsid_is_not_zero(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_mkfs_create_using_fsid_is_not_zero(_value0, _value1)

static inline void __trace_mkfs(int success)
{
    tracepoint(bluestore, mkfs, success);
}

#define trace_mkfs(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_mkfs(_value0)

static inline void __trace_mount_path(string path)
{
    tracepoint(bluestore, mount_path, (char*)path.c_str());
}

#define trace_mount_path(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_mount_path(_value0)

static inline void __trace_unmount()
{
    tracepoint(bluestore, unmount);
}

#define trace_unmount(__loglevel, __subsys, __format) __trace_unmount()

static inline void __trace_fsck_walking_object_keyspace()
{
    tracepoint(bluestore, fsck_walking_object_keyspace);
}

#define trace_fsck_walking_object_keyspace(__loglevel, __subsys, __format) __trace_fsck_walking_object_keyspace()

static inline void __trace_fsck_checking_shared_blobs()
{
    tracepoint(bluestore, fsck_checking_shared_blobs);
}

#define trace_fsck_checking_shared_blobs(__loglevel, __subsys, __format) __trace_fsck_checking_shared_blobs()

static inline void __trace_fsck_sorting_out_misreferenced_extents()
{
    tracepoint(bluestore, fsck_sorting_out_misreferenced_extents);
}

#define trace_fsck_sorting_out_misreferenced_extents(__loglevel, __subsys, __format) __trace_fsck_sorting_out_misreferenced_extents()

static inline void __trace_fsck_checking_for_stray_omap_data()
{
    tracepoint(bluestore, fsck_checking_for_stray_omap_data);
}

#define trace_fsck_checking_for_stray_omap_data(__loglevel, __subsys, __format) __trace_fsck_checking_for_stray_omap_data()

static inline void __trace_fsck_checking_deferred_events()
{
    tracepoint(bluestore, fsck_checking_deferred_events);
}

#define trace_fsck_checking_deferred_events(__loglevel, __subsys, __format) __trace_fsck_checking_deferred_events()

static inline void __trace_fsck_checking_freelist_vs_allocated()
{
    tracepoint(bluestore, fsck_checking_freelist_vs_allocated);
}

#define trace_fsck_checking_freelist_vs_allocated(__loglevel, __subsys, __format) __trace_fsck_checking_freelist_vs_allocated()

static inline void __trace_fsck_finish(int errors, unsigned repaired, int remaining, string duration_sec)
{
    tracepoint(bluestore, fsck_finish, errors, repaired, remaining, (char*)duration_sec.c_str());
}

#define trace_fsck_finish(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, __format) __trace_fsck_finish(_value0, _value1, _value2, _value3)

static inline void __trace_read_inject_random_eio()
{
    tracepoint(bluestore, read_inject_random_eio);
}

#define trace_read_inject_random_eio(__loglevel, __subsys, __format) __trace_read_inject_random_eio()

static inline void __trace_read(string cid, string oid, uint64_t offset, size_t length, int r)
{
    tracepoint(bluestore, read, (char*)cid.c_str(), (char*)oid.c_str(), offset, length, r);
}

#define trace_read(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, _type4, _name4, _value4, __format) __trace_read(_value0, _value1, _value2, _value3, _value4)

static inline void __trace_upgrade_super_start(int32_t ondisk_format, int32_t latest_ondisk_format)
{
    tracepoint(bluestore, upgrade_super_start, ondisk_format, latest_ondisk_format);
}

#define trace_upgrade_super_start(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_upgrade_super_start(_value0, _value1)

static inline void __trace_upgrade_super_done()
{
    tracepoint(bluestore, upgrade_super_done);
}

#define trace_upgrade_super_done(__loglevel, __subsys, __format) __trace_upgrade_super_done()

static inline void __trace_txc_calc_cost(void* txc, uint64_t txc_cost, uint64_t ios, uint64_t cost, uint64_t txc_bytes)
{
    tracepoint(bluestore, txc_calc_cost, txc, txc_cost, ios, cost, txc_bytes);
}

#define trace_txc_calc_cost(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, _type4, _name4, _value4, __format) __trace_txc_calc_cost(_value0, _value1, _value2, _value3, _value4)

static inline void __trace_txc_state_proc_name(void* txc, string state_name)
{
    tracepoint(bluestore, txc_state_proc_name, txc, (char*)state_name.c_str());
}

#define trace_txc_state_proc_name(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_txc_state_proc_name(_value0, _value1)

static inline void __trace_txc_applied_kv(string onode, int flushing_count)
{
    tracepoint(bluestore, txc_applied_kv, (char*)onode.c_str(), flushing_count);
}

#define trace_txc_applied_kv(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_txc_applied_kv(_value0, _value1)

static inline void __trace_txc_release_alloc_queued(void* txc, string txc_released)
{
    tracepoint(bluestore, txc_release_alloc_queued, txc, (char*)txc_released.c_str());
}

#define trace_txc_release_alloc_queued(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_txc_release_alloc_queued(_value0, _value1)

static inline void __trace_txc_release_alloc_sync(void* txc, string txc_released)
{
    tracepoint(bluestore, txc_release_alloc_sync, txc, (char*)txc_released.c_str());
}

#define trace_txc_release_alloc_sync(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_txc_release_alloc_sync(_value0, _value1)

static inline void __trace_osr_register_zombie(void* osr)
{
    tracepoint(bluestore, osr_register_zombie, osr);
}

#define trace_osr_register_zombie(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_osr_register_zombie(_value0)

static inline void __trace_osr_drain_preceding(void* txc, void* osr)
{
    tracepoint(bluestore, osr_drain_preceding, txc, osr);
}

#define trace_osr_drain_preceding(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_osr_drain_preceding(_value0, _value1)

static inline void __trace_osr_drain_preceding_done(void* osr)
{
    tracepoint(bluestore, osr_drain_preceding_done, osr);
}

#define trace_osr_drain_preceding_done(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_osr_drain_preceding_done(_value0)

static inline void __trace_kv_sync_thread_start()
{
    tracepoint(bluestore, kv_sync_thread_start);
}

#define trace_kv_sync_thread_start(__loglevel, __subsys, __format) __trace_kv_sync_thread_start()

static inline void __trace_kv_sync_thread_new_nid_max(int new_nid_max)
{
    tracepoint(bluestore, kv_sync_thread_new_nid_max, new_nid_max);
}

#define trace_kv_sync_thread_new_nid_max(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_kv_sync_thread_new_nid_max(_value0)

static inline void __trace_kv_sync_thread_new_blobid_max(int new_blobid_max)
{
    tracepoint(bluestore, kv_sync_thread_new_blobid_max, new_blobid_max);
}

#define trace_kv_sync_thread_new_blobid_max(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_kv_sync_thread_new_blobid_max(_value0)

static inline void __trace_kv_sync_thread_nid_max_now(int nid_max_now)
{
    tracepoint(bluestore, kv_sync_thread_nid_max_now, nid_max_now);
}

#define trace_kv_sync_thread_nid_max_now(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_kv_sync_thread_nid_max_now(_value0)

static inline void __trace_kv_sync_thread_blobid_max_now(int blobid_max)
{
    tracepoint(bluestore, kv_sync_thread_blobid_max_now, blobid_max);
}

#define trace_kv_sync_thread_blobid_max_now(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_kv_sync_thread_blobid_max_now(_value0)

static inline void __trace_kv_sync_releasing_old_bluefs(string bluefs_extents_reclaiming)
{
    tracepoint(bluestore, kv_sync_releasing_old_bluefs, (char*)bluefs_extents_reclaiming.c_str());
}

#define trace_kv_sync_releasing_old_bluefs(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_kv_sync_releasing_old_bluefs(_value0)

static inline void __trace_kv_sync_thread_finish()
{
    tracepoint(bluestore, kv_sync_thread_finish);
}

#define trace_kv_sync_thread_finish(__loglevel, __subsys, __format) __trace_kv_sync_thread_finish()

static inline void __trace_kv_finalize_thread_start()
{
    tracepoint(bluestore, kv_finalize_thread_start);
}

#define trace_kv_finalize_thread_start(__loglevel, __subsys, __format) __trace_kv_finalize_thread_start()

static inline void __trace_kv_finalize_thread_sleep()
{
    tracepoint(bluestore, kv_finalize_thread_sleep);
}

#define trace_kv_finalize_thread_sleep(__loglevel, __subsys, __format) __trace_kv_finalize_thread_sleep()

static inline void __trace_kv_finalize_thread_wake()
{
    tracepoint(bluestore, kv_finalize_thread_wake);
}

#define trace_kv_finalize_thread_wake(__loglevel, __subsys, __format) __trace_kv_finalize_thread_wake()

static inline void __trace_kv_finalize_thread_finish()
{
    tracepoint(bluestore, kv_finalize_thread_finish);
}

#define trace_kv_finalize_thread_finish(__loglevel, __subsys, __format) __trace_kv_finalize_thread_finish()

static inline void __trace_deferred_submit_unlock(void* osr, size_t iomap_size)
{
    tracepoint(bluestore, deferred_submit_unlock, osr, iomap_size);
}

#define trace_deferred_submit_unlock(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_deferred_submit_unlock(_value0, _value1)

static inline void __trace_deferred_aio_finish(void* osr)
{
    tracepoint(bluestore, deferred_aio_finish, osr);
}

#define trace_deferred_aio_finish(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_deferred_aio_finish(_value0)

static inline void __trace_deferred_replay_start()
{
    tracepoint(bluestore, deferred_replay_start);
}

#define trace_deferred_replay_start(__loglevel, __subsys, __format) __trace_deferred_replay_start()

static inline void __trace_deferred_replay_completed(int count)
{
    tracepoint(bluestore, deferred_replay_completed, count);
}

#define trace_deferred_replay_completed(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_deferred_replay_completed(_value0)

static inline void __trace_queue_transactions_blackhole()
{
    tracepoint(bluestore, queue_transactions_blackhole);
}

#define trace_queue_transactions_blackhole(__loglevel, __subsys, __format) __trace_queue_transactions_blackhole()

static inline void __trace_queue_transactions(void* collection, string cid)
{
    tracepoint(bluestore, queue_transactions, collection, (char*)cid.c_str());
}

#define trace_queue_transactions(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_queue_transactions(_value0, _value1)

static inline void __trace_txc_aio_submit(void* txc)
{
    tracepoint(bluestore, txc_aio_submit, txc);
}

#define trace_txc_aio_submit(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_txc_aio_submit(_value0)

static inline void __trace_txc_add_transaction_coll_hint_noop(uint32_t pg_num, uint64_t num_objs)
{
    tracepoint(bluestore, txc_add_transaction_coll_hint_noop, pg_num, num_objs);
}

#define trace_txc_add_transaction_coll_hint_noop(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_txc_add_transaction_coll_hint_noop(_value0, _value1)

static inline void __trace_txc_add_transaction_coll_unknown_hint(uint32_t hint)
{
    tracepoint(bluestore, txc_add_transaction_coll_unknown_hint, hint);
}

#define trace_txc_add_transaction_coll_unknown_hint(__loglevel, __subsys, _type0, _name0, _value0, __format) __trace_txc_add_transaction_coll_unknown_hint(_value0)

static inline void __trace_do_write_small(uint64_t offset, uint64_t length)
{
    tracepoint(bluestore, do_write_small, offset, length);
}

#define trace_do_write_small(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, __format) __trace_do_write_small(_value0, _value1)

static inline void __trace_do_write_big(uint64_t offset, uint64_t length, uint64_t target_blob_size, int wctx_compress)
{
    tracepoint(bluestore, do_write_big, offset, length, target_blob_size, wctx_compress);
}

#define trace_do_write_big(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, __format) __trace_do_write_big(_value0, _value1, _value2, _value3)

static inline void __trace_write(string cid, string oid, uint64_t offset, size_t length, int r)
{
    tracepoint(bluestore, write, (char*)cid.c_str(), (char*)oid.c_str(), offset, length, r);
}

#define trace_write(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, _type4, _name4, _value4, __format) __trace_write(_value0, _value1, _value2, _value3, _value4)

static inline void __trace_setattrs(string cid, string oid, size_t aset_size, int r)
{
    tracepoint(bluestore, setattrs, (char*)cid.c_str(), (char*)oid.c_str(), aset_size, r);
}

#define trace_setattrs(__loglevel, __subsys, _type0, _name0, _value0, _type1, _name1, _value1, _type2, _name2, _value2, _type3, _name3, _value3, __format) __trace_setattrs(_value0, _value1, _value2, _value3)

static inline void __trace__flush_cache()
{
    tracepoint(bluestore, _flush_cache);
}

#define trace__flush_cache(__loglevel, __subsys, __format) __trace__flush_cache()

static inline void __trace_flush_cache()
{
    tracepoint(bluestore, flush_cache);
}

#define trace_flush_cache(__loglevel, __subsys, __format) __trace_flush_cache()

#endif
