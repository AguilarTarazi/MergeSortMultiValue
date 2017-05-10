/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::initPhase_2_closure : public SDAG::Closure {
      int impl_noname_0;
      int impl_noname_1;
      int impl_noname_2;
      int *val;
      int impl_noname_3;
      int impl_noname_4;

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
      int & getP0() { return impl_noname_0;}
      int & getP1() { return impl_noname_1;}
      int & getP2() { return impl_noname_2;}
      int *& getP3() { return val;}
      int & getP4() { return impl_noname_3;}
      int & getP5() { return impl_noname_4;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        __p | impl_noname_1;
        __p | impl_noname_2;
        __p | impl_noname_3;
        __p | impl_noname_4;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_3; implP|impl_noname_3;
  int impl_noname_4; implP|impl_noname_4;
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
      int impl_noname_5;


      startCompare_3_closure() {
        init();
      }
      startCompare_3_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_5;}
      void pup(PUP::er& __p) {
        __p | impl_noname_5;
        packClosure(__p);
      }
      virtual ~startCompare_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(startCompare_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::requestSwap_4_closure : public SDAG::Closure {
      int impl_noname_6;
      int impl_noname_7;
      int impl_noname_8;


      requestSwap_4_closure() {
        init();
      }
      requestSwap_4_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_6;}
      int & getP1() { return impl_noname_7;}
      int & getP2() { return impl_noname_8;}
      void pup(PUP::er& __p) {
        __p | impl_noname_6;
        __p | impl_noname_7;
        __p | impl_noname_8;
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
      int impl_noname_9;
      bool impl_noname_a;

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
      int & getP1() { return impl_noname_9;}
      bool & getP2() { return impl_noname_a;}
      void pup(PUP::er& __p) {
        __p | impl_noname_9;
        __p | impl_noname_a;
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
  int impl_noname_9; implP|impl_noname_9;
  bool impl_noname_a; implP|impl_noname_a;
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
void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
void startCompare(int impl_noname_5);
void requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8);
void saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a);
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
/* DEFS: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
 */

void CProxyElement_Merge::initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_3;
    implP|impl_noname_4;
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
/* DEFS: void startCompare(int impl_noname_5);
 */

void CProxyElement_Merge::startCompare(int impl_noname_5, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8);
 */

void CProxyElement_Merge::requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_6, int impl_noname_7, int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_6;
    implP|impl_noname_7;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_6;
    implP|impl_noname_7;
    implP|impl_noname_8;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a);
 */

void CProxyElement_Merge::saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int impl_noname_9, const bool &impl_noname_a
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_9;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_a;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_9;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_a;
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
/* DEFS: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
 */

void CProxy_Merge::initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_3;
    implP|impl_noname_4;
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
  int epidx = CkRegisterEp("initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4)",
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
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_3; implP|impl_noname_3;
  int impl_noname_4; implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->initPhase(impl_noname_0, impl_noname_1, impl_noname_2, val, impl_noname_3, impl_noname_4);
}

int CkIndex_Merge::_callmarshall_initPhase_marshall2(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_3; implP|impl_noname_3;
  int impl_noname_4; implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->initPhase(impl_noname_0, impl_noname_1, impl_noname_2, val, impl_noname_3, impl_noname_4);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_initPhase_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_3; implP|impl_noname_3;
  int impl_noname_4; implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
  if (implDestP.hasComments()) implDestP.comment("val");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*val))<impl_cnt_val;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|val[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}
PUPable_def(SINGLE_ARG(Closure_Merge::initPhase_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startCompare(int impl_noname_5);
 */

void CProxy_Merge::startCompare(int impl_noname_5, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_startCompare_marshall3() {
  int epidx = CkRegisterEp("startCompare(int impl_noname_5)",
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
  /*Unmarshall pup'd fields: int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_5; implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startCompare(impl_noname_5);
}

int CkIndex_Merge::_callmarshall_startCompare_marshall3(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_5; implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startCompare(impl_noname_5);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_startCompare_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_5; implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
}
PUPable_def(SINGLE_ARG(Closure_Merge::startCompare_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8);
 */

void CProxy_Merge::requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_6, int impl_noname_7, int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_6;
    implP|impl_noname_7;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_6;
    implP|impl_noname_7;
    implP|impl_noname_8;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_requestSwap_marshall4() {
  int epidx = CkRegisterEp("requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8)",
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
  /*Unmarshall pup'd fields: int impl_noname_6, int impl_noname_7, int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_6; implP|impl_noname_6;
  int impl_noname_7; implP|impl_noname_7;
  int impl_noname_8; implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestSwap(impl_noname_6, impl_noname_7, impl_noname_8);
}

int CkIndex_Merge::_callmarshall_requestSwap_marshall4(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_6, int impl_noname_7, int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_6; implP|impl_noname_6;
  int impl_noname_7; implP|impl_noname_7;
  int impl_noname_8; implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestSwap(impl_noname_6, impl_noname_7, impl_noname_8);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_requestSwap_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_6, int impl_noname_7, int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_6; implP|impl_noname_6;
  int impl_noname_7; implP|impl_noname_7;
  int impl_noname_8; implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_7");
  implDestP|impl_noname_7;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_8");
  implDestP|impl_noname_8;
}
PUPable_def(SINGLE_ARG(Closure_Merge::requestSwap_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a);
 */

void CProxy_Merge::saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int impl_noname_9, const bool &impl_noname_a
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_9;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_a;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_9;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_a;
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
  int epidx = CkRegisterEp("saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a)",
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
  /*Unmarshall pup'd fields: const int *val, int impl_noname_9, const bool &impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_9; implP|impl_noname_9;
  bool impl_noname_a; implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->saveValue(val, impl_noname_9, impl_noname_a);
}

int CkIndex_Merge::_callmarshall_saveValue_marshall5(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int *val, int impl_noname_9, const bool &impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_9; implP|impl_noname_9;
  bool impl_noname_a; implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->saveValue(val, impl_noname_9, impl_noname_a);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_saveValue_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *val, int impl_noname_9, const bool &impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_9; implP|impl_noname_9;
  bool impl_noname_a; implP|impl_noname_a;
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
  if (implDestP.hasComments()) implDestP.comment("impl_noname_9");
  implDestP|impl_noname_9;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_a");
  implDestP|impl_noname_a;
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
/* DEFS: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
 */

void CProxySection_Merge::initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_3;
    implP|impl_noname_4;
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
/* DEFS: void startCompare(int impl_noname_5);
 */

void CProxySection_Merge::startCompare(int impl_noname_5, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8);
 */

void CProxySection_Merge::requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_6, int impl_noname_7, int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_6;
    implP|impl_noname_7;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_6;
    implP|impl_noname_7;
    implP|impl_noname_8;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a);
 */

void CProxySection_Merge::saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int impl_noname_9, const bool &impl_noname_a
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_9;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_a;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_9;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_a;
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

  // REG: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
  idx_initPhase_marshall2();

  // REG: void startCompare(int impl_noname_5);
  idx_startCompare_marshall3();

  // REG: void requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8);
  idx_requestSwap_marshall4();

  // REG: void saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a);
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
void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
void startCompare(int impl_noname_5);
void requestSwap(int impl_noname_6, int impl_noname_7, int impl_noname_8);
void saveValue(const int *val, int impl_noname_9, const bool &impl_noname_a);
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
