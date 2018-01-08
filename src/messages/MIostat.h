// -*- mode:C++; tab-width:8; c-basic-offset:2; indent-tabs-mode:t -*-
// vim: ts=8 sw=2 smarttab
/*
 * Ceph - scalable distributed file system
 *
 * Copyright (C) 2004-2006 Sage Weil <sage@newdream.net>
 *
 * This is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1, as published by the Free Software
 * Foundation.  See file COPYING.
 *
 */

#ifndef CEPH_MIOSTAT_H
#define CEPH_MIOSTAT_H

#include "common/LogEntry.h"
#include "messages/PaxosServiceMessage.h"

#include <deque>

class MIostat : public PaxosServiceMessage {
public:
  uuid_d fsid;
  bufferlist service_map_bl;  // encoded ServiceMap
  int64_t iostuff;  // encoded ServiceMap

  MIostat() : PaxosServiceMessage(MSG_IOSTAT, 0) {}
  MIostat(const uuid_d& f) : PaxosServiceMessage(MSG_IOSTAT, 0), fsid(f) { }
private:
  ~MIostat() override {}

public:
  const char *get_type_name() const override { return "iostat"; }
  void print(ostream& out) const override {
    out << "mogeb: iostat()";
  }

  void encode_payload(uint64_t features) override {
    paxos_encode();
//    ::encode(fsid, payload);
//    ::encode(entries, payload, features);
  }
  void decode_payload() override {
    bufferlist::iterator p = payload.begin();
    paxos_decode(p);
//    ::decode(fsid, p);
//    ::decode(entries, p);
  }
};

#endif
