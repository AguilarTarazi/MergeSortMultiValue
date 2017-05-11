/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::initPhase_2_closure : public SDAG::Closure {
      int a;
      int b;
      int c;
      int n;
      int *val;
      int d;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      initPhase_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      initPhase_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return a;}
      int & getP1() { return b;}
      int & getP2() { return c;}
      int & getP3() { return n;}
      int *& getP4() { return val;}
      int & getP5() { return d;}
      void pup(PUP::er& __p) {
        __p | a;
        __p | b;
        __p | c;
        __p | n;
        __p | d;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int a; implP|a;
  int b; implP|b;
  int c; implP|c;
  int n; implP|n;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int d; implP|d;
          impl_buf+=CK_ALIGN(implP.size(),16);
        val = (int *)(impl_buf+impl_off_val);
        }
      }
      virtual ~initPhase_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(initPhase_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::startCompare_3_closure : public SDAG::Closure {
      int a;


      startCompare_3_closure() {
        init();
      }
      startCompare_3_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return a;}
      void pup(PUP::er& __p) {
        __p | a;
        packClosure(__p);
      }
      virtual ~startCompare_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(startCompare_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::requestSwap_4_closure : public SDAG::Closure {
      int a;
      int b;
      int c;


      requestSwap_4_closure() {
        init();
      }
      requestSwap_4_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return a;}
      int & getP1() { return b;}
      int & getP2() { return c;}
      void pup(PUP::er& __p) {
        __p | a;
        __p | b;
        __p | c;
        packClosure(__p);
      }
      virtual ~requestSwap_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestSwap_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::saveValue_5_closure : public SDAG::Closure {
      int *val;
      int m;
      bool a;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      saveValue_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      saveValue_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int *& getP0() { return val;}
      int & getP1() { return m;}
      bool & getP2() { return a;}
      void pup(PUP::er& __p) {
        __p | m;
        __p | a;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int m; implP|m;
  bool a; implP|a;
          impl_buf+=CK_ALIGN(implP.size(),16);
        val = (int *)(impl_buf+impl_off_val);
        }
      }
      virtual ~saveValue_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(saveValue_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::check_6_closure : public SDAG::Closure {
      

      check_6_closure() {
        init();
      }
      check_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~check_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(check_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::listo_7_closure : public SDAG::Closure {
      

      listo_7_closure() {
        init();
      }
      listo_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~listo_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(listo_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: array Merge: ArrayElement{
Merge(void);
void initPhase(int a, int b, int c, int n, const int *val, int d);
void startCompare(int a);
void requestSwap(int a, int b, int c);
void saveValue(const int *val, int m, const bool &a);
void check(void);
void listo(void);
Merge(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Merge::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Merge(void);
 */

void CProxyElement_Merge::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Merge::idx_Merge_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initPhase(int a, int b, int c, int n, const int *val, int d);
 */

void CProxyElement_Merge::initPhase(int a, int b, int c, int n, const int *val, int d, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a, int b, int c, int n, const int *val, int d
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    implP|b;
    implP|c;
    implP|n;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|d;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
    implP|b;
    implP|c;
    implP|n;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|d;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_initPhase_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startCompare(int a);
 */

void CProxyElement_Merge::startCompare(int a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int a, int b, int c);
 */

void CProxyElement_Merge::requestSwap(int a, int b, int c, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a, int b, int c
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    implP|b;
    implP|c;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
    implP|b;
    implP|c;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int m, const bool &a);
 */

void CProxyElement_Merge::saveValue(const int *val, int m, const bool &a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int m, const bool &a
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(m));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|m;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)a;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|m;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)a;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_saveValue_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check(void);
 */

void CProxyElement_Merge::check(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_check_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void listo(void);
 */

void CProxyElement_Merge::listo(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_listo_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Merge(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Merge(void);
 */

CkArrayID CProxy_Merge::ckNew(const CkArrayOptions &opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Merge::idx_Merge_void(), opts);
}

void CProxy_Merge::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Merge::idx_Merge_void(), _ck_array_creation_cb, opts, impl_msg);
}

CkArrayID CProxy_Merge::ckNew(const int s1)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Merge::idx_Merge_void(), opts);
}

void CProxy_Merge::ckNew(const int s1, CkCallback _ck_array_creation_cb)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Merge::idx_Merge_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function

int CkIndex_Merge::reg_Merge_void() {
  int epidx = CkRegisterEp("Merge(void)",
      _call_Merge_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Merge::_call_Merge_void(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Merge();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initPhase(int a, int b, int c, int n, const int *val, int d);
 */

void CProxy_Merge::initPhase(int a, int b, int c, int n, const int *val, int d, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a, int b, int c, int n, const int *val, int d
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    implP|b;
    implP|c;
    implP|n;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|d;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
    implP|b;
    implP|c;
    implP|n;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|d;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_initPhase_marshall2(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_initPhase_marshall2() {
  int epidx = CkRegisterEp("initPhase(int a, int b, int c, int n, const int *val, int d)",
      _call_initPhase_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_initPhase_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_initPhase_marshall2);

  return epidx;
}


void CkIndex_Merge::_call_initPhase_marshall2(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int a, int b, int c, int n, const int *val, int d*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  int b; implP|b;
  int c; implP|c;
  int n; implP|n;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int d; implP|d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->initPhase(a, b, c, n, val, d);
}

int CkIndex_Merge::_callmarshall_initPhase_marshall2(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int a, int b, int c, int n, const int *val, int d*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  int b; implP|b;
  int c; implP|c;
  int n; implP|n;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int d; implP|d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->initPhase(a, b, c, n, val, d);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_initPhase_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int a, int b, int c, int n, const int *val, int d*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  int b; implP|b;
  int c; implP|c;
  int n; implP|n;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int d; implP|d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  if (implDestP.hasComments()) implDestP.comment("a");
  implDestP|a;
  if (implDestP.hasComments()) implDestP.comment("b");
  implDestP|b;
  if (implDestP.hasComments()) implDestP.comment("c");
  implDestP|c;
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("val");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*val))<impl_cnt_val;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|val[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("d");
  implDestP|d;
}
PUPable_def(SINGLE_ARG(Closure_Merge::initPhase_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startCompare(int a);
 */

void CProxy_Merge::startCompare(int a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_startCompare_marshall3() {
  int epidx = CkRegisterEp("startCompare(int a)",
      _call_startCompare_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startCompare_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startCompare_marshall3);

  return epidx;
}


void CkIndex_Merge::_call_startCompare_marshall3(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int a*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startCompare(a);
}

int CkIndex_Merge::_callmarshall_startCompare_marshall3(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int a*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startCompare(a);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_startCompare_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int a*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("a");
  implDestP|a;
}
PUPable_def(SINGLE_ARG(Closure_Merge::startCompare_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int a, int b, int c);
 */

void CProxy_Merge::requestSwap(int a, int b, int c, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a, int b, int c
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    implP|b;
    implP|c;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
    implP|b;
    implP|c;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_requestSwap_marshall4() {
  int epidx = CkRegisterEp("requestSwap(int a, int b, int c)",
      _call_requestSwap_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestSwap_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestSwap_marshall4);

  return epidx;
}


void CkIndex_Merge::_call_requestSwap_marshall4(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int a, int b, int c*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  int b; implP|b;
  int c; implP|c;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestSwap(a, b, c);
}

int CkIndex_Merge::_callmarshall_requestSwap_marshall4(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int a, int b, int c*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  int b; implP|b;
  int c; implP|c;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestSwap(a, b, c);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_requestSwap_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int a, int b, int c*/
  PUP::fromMem implP(impl_buf);
  int a; implP|a;
  int b; implP|b;
  int c; implP|c;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("a");
  implDestP|a;
  if (implDestP.hasComments()) implDestP.comment("b");
  implDestP|b;
  if (implDestP.hasComments()) implDestP.comment("c");
  implDestP|c;
}
PUPable_def(SINGLE_ARG(Closure_Merge::requestSwap_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int m, const bool &a);
 */

void CProxy_Merge::saveValue(const int *val, int m, const bool &a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int m, const bool &a
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(m));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|m;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)a;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|m;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)a;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_saveValue_marshall5(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_saveValue_marshall5() {
  int epidx = CkRegisterEp("saveValue(const int *val, int m, const bool &a)",
      _call_saveValue_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_saveValue_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_saveValue_marshall5);

  return epidx;
}


void CkIndex_Merge::_call_saveValue_marshall5(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *val, int m, const bool &a*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int m; implP|m;
  bool a; implP|a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->saveValue(val, m, a);
}

int CkIndex_Merge::_callmarshall_saveValue_marshall5(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int *val, int m, const bool &a*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int m; implP|m;
  bool a; implP|a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->saveValue(val, m, a);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_saveValue_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *val, int m, const bool &a*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int m; implP|m;
  bool a; implP|a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  if (implDestP.hasComments()) implDestP.comment("val");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*val))<impl_cnt_val;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|val[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("m");
  implDestP|m;
  if (implDestP.hasComments()) implDestP.comment("a");
  implDestP|a;
}
PUPable_def(SINGLE_ARG(Closure_Merge::saveValue_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check(void);
 */

void CProxy_Merge::check(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_check_void(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_check_void() {
  int epidx = CkRegisterEp("check(void)",
      _call_check_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Merge::_call_check_void(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->check();
}
PUPable_def(SINGLE_ARG(Closure_Merge::check_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void listo(void);
 */

void CProxy_Merge::listo(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_listo_void(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_listo_void() {
  int epidx = CkRegisterEp("listo(void)",
      _call_listo_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Merge::_call_listo_void(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->listo();
}
PUPable_def(SINGLE_ARG(Closure_Merge::listo_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Merge(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Merge::reg_Merge_CkMigrateMessage() {
  int epidx = CkRegisterEp("Merge(CkMigrateMessage* impl_msg)",
      _call_Merge_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Merge::_call_Merge_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  new (impl_obj) Merge((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Merge(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initPhase(int a, int b, int c, int n, const int *val, int d);
 */

void CProxySection_Merge::initPhase(int a, int b, int c, int n, const int *val, int d, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a, int b, int c, int n, const int *val, int d
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    implP|b;
    implP|c;
    implP|n;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|d;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
    implP|b;
    implP|c;
    implP|n;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|d;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_initPhase_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startCompare(int a);
 */

void CProxySection_Merge::startCompare(int a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int a, int b, int c);
 */

void CProxySection_Merge::requestSwap(int a, int b, int c, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int a, int b, int c
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|a;
    implP|b;
    implP|c;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|a;
    implP|b;
    implP|c;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int m, const bool &a);
 */

void CProxySection_Merge::saveValue(const int *val, int m, const bool &a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int m, const bool &a
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(m));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|m;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)a;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|m;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)a;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_saveValue_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check(void);
 */

void CProxySection_Merge::check(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_check_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void listo(void);
 */

void CProxySection_Merge::listo(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_listo_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Merge(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Merge::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Merge(void);
  idx_Merge_void();
  CkRegisterDefaultCtor(__idx, idx_Merge_void());

  // REG: void initPhase(int a, int b, int c, int n, const int *val, int d);
  idx_initPhase_marshall2();

  // REG: void startCompare(int a);
  idx_startCompare_marshall3();

  // REG: void requestSwap(int a, int b, int c);
  idx_requestSwap_marshall4();

  // REG: void saveValue(const int *val, int m, const bool &a);
  idx_saveValue_marshall5();

  // REG: void check(void);
  idx_check_void();

  // REG: void listo(void);
  idx_listo_void();

  // REG: Merge(CkMigrateMessage* impl_msg);
  idx_Merge_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Merge_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registermerge(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: array Merge: ArrayElement{
Merge(void);
void initPhase(int a, int b, int c, int n, const int *val, int d);
void startCompare(int a);
void requestSwap(int a, int b, int c);
void saveValue(const int *val, int m, const bool &a);
void check(void);
void listo(void);
Merge(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Merge::__register("Merge", sizeof(Merge));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Merge::virtual_pup(PUP::er &p) {
    recursive_pup<Merge >(dynamic_cast<Merge* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
