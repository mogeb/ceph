// -*- mode:C++; tab-width:8; c-basic-offset:2; indent-tabs-mode:t -*-
// vim: ts=8 sw=2 smarttab

#ifndef CEPH_MGR_MGRSESSION_H
#define CEPH_MGR_MGRSESSION_H

#include "common/RefCountedObj.h"
#include "common/entity_name.h"
#include "msg/msg_types.h"
#include "mon/MonCap.h"
#include "include/xlist.h"
#include "msg/Connection.h"

struct MgrSubscription {
  string type;
  version_t next;
  ConnectionRef con;
//  xlist<MgrSubscription*>::item type_item;

public:
  MgrSubscription(Message *m, const string& t) : type(t)
  {
    if (m) {
      con = m->get_connection();
    }
  }
};

/**
 * Session state associated with the Connection.
 */
struct MgrSession : public RefCountedObject {
  uint64_t global_id = 0;
  EntityName entity_name;
  entity_inst_t inst;

  int osd_id = -1;  ///< osd id (if an osd)

  // mon caps are suitably generic for mgr
  MonCap caps;
//  map<string, xlist<MgrSubscription*> *> subs;
  map<string, vector<MgrSubscription*> *> subs;

  std::set<std::string> declared_types;

  MgrSession(CephContext *cct) : RefCountedObject(cct, 0) {}
  ~MgrSession() override {}
};

typedef boost::intrusive_ptr<MgrSession> MgrSessionRef;


#endif
