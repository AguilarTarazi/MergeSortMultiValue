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
      int impl_noname_6;
      bool impl_noname_7;
      int impl_noname_8;
      int impl_noname_9;


      startCompare_3_closure() {
        init();
      }
      startCompare_3_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_5;}
      int & getP1() { return impl_noname_6;}
      bool & getP2() { return impl_noname_7;}
      int & getP3() { return impl_noname_8;}
      int & getP4() { return impl_noname_9;}
      void pup(PUP::er& __p) {
        __p | impl_noname_5;
        __p | impl_noname_6;
        __p | impl_noname_7;
        __p | impl_noname_8;
        __p | impl_noname_9;
        packClosure(__p);
      }
      virtual ~startCompare_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(startCompare_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::requestSwap_4_closure : public SDAG::Closure {
      int impl_noname_a;
      int impl_noname_b;
      int impl_noname_c;
      int impl_noname_d;


      requestSwap_4_closure() {
        init();
      }
      requestSwap_4_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_a;}
      int & getP1() { return impl_noname_b;}
      int & getP2() { return impl_noname_c;}
      int & getP3() { return impl_noname_d;}
      void pup(PUP::er& __p) {
        __p | impl_noname_a;
        __p | impl_noname_b;
        __p | impl_noname_c;
        __p | impl_noname_d;
        packClosure(__p);
      }
      virtual ~requestSwap_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestSwap_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::acceptSwap_5_closure : public SDAG::Closure {
      int impl_noname_e;
      int impl_noname_f;
      int *val;
      int impl_noname_10;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptSwap_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptSwap_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return impl_noname_e;}
      int & getP1() { return impl_noname_f;}
      int *& getP2() { return val;}
      int & getP3() { return impl_noname_10;}
      void pup(PUP::er& __p) {
        __p | impl_noname_e;
        __p | impl_noname_f;
        __p | impl_noname_10;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_noname_e; implP|impl_noname_e;
  int impl_noname_f; implP|impl_noname_f;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_10; implP|impl_noname_10;
          impl_buf+=CK_ALIGN(implP.size(),16);
        val = (int *)(impl_buf+impl_off_val);
        }
      }
      virtual ~acceptSwap_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptSwap_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::denySwap_6_closure : public SDAG::Closure {
      int impl_noname_11;
      int impl_noname_12;
      int *val;
      int impl_noname_13;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      denySwap_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      denySwap_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int & getP0() { return impl_noname_11;}
      int & getP1() { return impl_noname_12;}
      int *& getP2() { return val;}
      int & getP3() { return impl_noname_13;}
      void pup(PUP::er& __p) {
        __p | impl_noname_11;
        __p | impl_noname_12;
        __p | impl_noname_13;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_noname_11; implP|impl_noname_11;
  int impl_noname_12; implP|impl_noname_12;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_13; implP|impl_noname_13;
          impl_buf+=CK_ALIGN(implP.size(),16);
        val = (int *)(impl_buf+impl_off_val);
        }
      }
      virtual ~denySwap_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(denySwap_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::saveValue_7_closure : public SDAG::Closure {
      int *val;
      int impl_noname_14;
      bool impl_noname_15;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      saveValue_7_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      saveValue_7_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int *& getP0() { return val;}
      int & getP1() { return impl_noname_14;}
      bool & getP2() { return impl_noname_15;}
      void pup(PUP::er& __p) {
        __p | impl_noname_14;
        __p | impl_noname_15;
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
  int impl_noname_14; implP|impl_noname_14;
  bool impl_noname_15; implP|impl_noname_15;
          impl_buf+=CK_ALIGN(implP.size(),16);
        val = (int *)(impl_buf+impl_off_val);
        }
      }
      virtual ~saveValue_7_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(saveValue_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Merge::check_8_closure : public SDAG::Closure {
      int impl_noname_16;


      check_8_closure() {
        init();
      }
      check_8_closure(CkMigrateMessage*) {
        init();
      }
      int & getP0() { return impl_noname_16;}
      void pup(PUP::er& __p) {
        __p | impl_noname_16;
        packClosure(__p);
      }
      virtual ~check_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(check_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: array Merge: ArrayElement{
Merge(void);
void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
void check(int impl_noname_16);
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
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements/2+1));
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
/* DEFS: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
 */

void CProxyElement_Merge::startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_7;
    implP|impl_noname_8;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_7;
    implP|impl_noname_8;
    implP|impl_noname_9;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
 */

void CProxyElement_Merge::requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|impl_noname_c;
    implP|impl_noname_d;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|impl_noname_c;
    implP|impl_noname_d;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
 */

void CProxyElement_Merge::acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_e;
    implP|impl_noname_f;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_10;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_e;
    implP|impl_noname_f;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_10;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_acceptSwap_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
 */

void CProxyElement_Merge::denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_11;
    implP|impl_noname_12;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_13;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_11;
    implP|impl_noname_12;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_13;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_denySwap_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
 */

void CProxyElement_Merge::saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int impl_noname_14, const bool &impl_noname_15
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_14;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_15;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_14;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_15;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_saveValue_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check(int impl_noname_16);
 */

void CProxyElement_Merge::check(int impl_noname_16, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_16
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_16;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_16;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_check_marshall8(),0);
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
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements/2+1));
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
/* DEFS: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
 */

void CProxy_Merge::startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_7;
    implP|impl_noname_8;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_7;
    implP|impl_noname_8;
    implP|impl_noname_9;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_startCompare_marshall3() {
  int epidx = CkRegisterEp("startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9)",
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
  /*Unmarshall pup'd fields: int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_5; implP|impl_noname_5;
  int impl_noname_6; implP|impl_noname_6;
  bool impl_noname_7; implP|impl_noname_7;
  int impl_noname_8; implP|impl_noname_8;
  int impl_noname_9; implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startCompare(impl_noname_5, impl_noname_6, impl_noname_7, impl_noname_8, impl_noname_9);
}

int CkIndex_Merge::_callmarshall_startCompare_marshall3(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_5; implP|impl_noname_5;
  int impl_noname_6; implP|impl_noname_6;
  bool impl_noname_7; implP|impl_noname_7;
  int impl_noname_8; implP|impl_noname_8;
  int impl_noname_9; implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startCompare(impl_noname_5, impl_noname_6, impl_noname_7, impl_noname_8, impl_noname_9);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_startCompare_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_5; implP|impl_noname_5;
  int impl_noname_6; implP|impl_noname_6;
  bool impl_noname_7; implP|impl_noname_7;
  int impl_noname_8; implP|impl_noname_8;
  int impl_noname_9; implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_7");
  implDestP|impl_noname_7;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_8");
  implDestP|impl_noname_8;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_9");
  implDestP|impl_noname_9;
}
PUPable_def(SINGLE_ARG(Closure_Merge::startCompare_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
 */

void CProxy_Merge::requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|impl_noname_c;
    implP|impl_noname_d;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|impl_noname_c;
    implP|impl_noname_d;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_requestSwap_marshall4() {
  int epidx = CkRegisterEp("requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d)",
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
  /*Unmarshall pup'd fields: int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_a; implP|impl_noname_a;
  int impl_noname_b; implP|impl_noname_b;
  int impl_noname_c; implP|impl_noname_c;
  int impl_noname_d; implP|impl_noname_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestSwap(impl_noname_a, impl_noname_b, impl_noname_c, impl_noname_d);
}

int CkIndex_Merge::_callmarshall_requestSwap_marshall4(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_a; implP|impl_noname_a;
  int impl_noname_b; implP|impl_noname_b;
  int impl_noname_c; implP|impl_noname_c;
  int impl_noname_d; implP|impl_noname_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestSwap(impl_noname_a, impl_noname_b, impl_noname_c, impl_noname_d);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_requestSwap_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_a; implP|impl_noname_a;
  int impl_noname_b; implP|impl_noname_b;
  int impl_noname_c; implP|impl_noname_c;
  int impl_noname_d; implP|impl_noname_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_a");
  implDestP|impl_noname_a;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_b");
  implDestP|impl_noname_b;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_c");
  implDestP|impl_noname_c;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_d");
  implDestP|impl_noname_d;
}
PUPable_def(SINGLE_ARG(Closure_Merge::requestSwap_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
 */

void CProxy_Merge::acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_e;
    implP|impl_noname_f;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_10;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_e;
    implP|impl_noname_f;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_10;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_acceptSwap_marshall5(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_acceptSwap_marshall5() {
  int epidx = CkRegisterEp("acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10)",
      _call_acceptSwap_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptSwap_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptSwap_marshall5);

  return epidx;
}


void CkIndex_Merge::_call_acceptSwap_marshall5(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_e; implP|impl_noname_e;
  int impl_noname_f; implP|impl_noname_f;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_10; implP|impl_noname_10;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->acceptSwap(impl_noname_e, impl_noname_f, val, impl_noname_10);
}

int CkIndex_Merge::_callmarshall_acceptSwap_marshall5(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_e; implP|impl_noname_e;
  int impl_noname_f; implP|impl_noname_f;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_10; implP|impl_noname_10;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->acceptSwap(impl_noname_e, impl_noname_f, val, impl_noname_10);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_acceptSwap_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_e; implP|impl_noname_e;
  int impl_noname_f; implP|impl_noname_f;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_10; implP|impl_noname_10;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_e");
  implDestP|impl_noname_e;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_f");
  implDestP|impl_noname_f;
  if (implDestP.hasComments()) implDestP.comment("val");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*val))<impl_cnt_val;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|val[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_10");
  implDestP|impl_noname_10;
}
PUPable_def(SINGLE_ARG(Closure_Merge::acceptSwap_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
 */

void CProxy_Merge::denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_11;
    implP|impl_noname_12;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_13;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_11;
    implP|impl_noname_12;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_13;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_denySwap_marshall6(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_denySwap_marshall6() {
  int epidx = CkRegisterEp("denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13)",
      _call_denySwap_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_denySwap_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_denySwap_marshall6);

  return epidx;
}


void CkIndex_Merge::_call_denySwap_marshall6(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_11; implP|impl_noname_11;
  int impl_noname_12; implP|impl_noname_12;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_13; implP|impl_noname_13;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->denySwap(impl_noname_11, impl_noname_12, val, impl_noname_13);
}

int CkIndex_Merge::_callmarshall_denySwap_marshall6(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_11; implP|impl_noname_11;
  int impl_noname_12; implP|impl_noname_12;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_13; implP|impl_noname_13;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->denySwap(impl_noname_11, impl_noname_12, val, impl_noname_13);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_denySwap_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_11; implP|impl_noname_11;
  int impl_noname_12; implP|impl_noname_12;
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_13; implP|impl_noname_13;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_11");
  implDestP|impl_noname_11;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_12");
  implDestP|impl_noname_12;
  if (implDestP.hasComments()) implDestP.comment("val");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*val))<impl_cnt_val;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|val[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_13");
  implDestP|impl_noname_13;
}
PUPable_def(SINGLE_ARG(Closure_Merge::denySwap_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
 */

void CProxy_Merge::saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int impl_noname_14, const bool &impl_noname_15
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_14;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_15;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_14;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_15;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_saveValue_marshall7(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_saveValue_marshall7() {
  int epidx = CkRegisterEp("saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15)",
      _call_saveValue_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_saveValue_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_saveValue_marshall7);

  return epidx;
}


void CkIndex_Merge::_call_saveValue_marshall7(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *val, int impl_noname_14, const bool &impl_noname_15*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_14; implP|impl_noname_14;
  bool impl_noname_15; implP|impl_noname_15;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->saveValue(val, impl_noname_14, impl_noname_15);
}

int CkIndex_Merge::_callmarshall_saveValue_marshall7(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int *val, int impl_noname_14, const bool &impl_noname_15*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_14; implP|impl_noname_14;
  bool impl_noname_15; implP|impl_noname_15;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *val=(int *)(impl_buf+impl_off_val);
  impl_obj->saveValue(val, impl_noname_14, impl_noname_15);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_saveValue_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *val, int impl_noname_14, const bool &impl_noname_15*/
  PUP::fromMem implP(impl_buf);
  int impl_off_val, impl_cnt_val; 
  implP|impl_off_val;
  implP|impl_cnt_val;
  int impl_noname_14; implP|impl_noname_14;
  bool impl_noname_15; implP|impl_noname_15;
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
  if (implDestP.hasComments()) implDestP.comment("impl_noname_14");
  implDestP|impl_noname_14;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_15");
  implDestP|impl_noname_15;
}
PUPable_def(SINGLE_ARG(Closure_Merge::saveValue_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check(int impl_noname_16);
 */

void CProxy_Merge::check(int impl_noname_16, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_16
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_16;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_16;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Merge::idx_check_marshall8(),0);
}

// Entry point registration function

int CkIndex_Merge::reg_check_marshall8() {
  int epidx = CkRegisterEp("check(int impl_noname_16)",
      _call_check_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_check_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_check_marshall8);

  return epidx;
}


void CkIndex_Merge::_call_check_marshall8(void* impl_msg, void* impl_obj_void)
{
  Merge* impl_obj = static_cast<Merge *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_16*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_16; implP|impl_noname_16;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->check(impl_noname_16);
}

int CkIndex_Merge::_callmarshall_check_marshall8(char* impl_buf, void* impl_obj_void) {
  Merge* impl_obj = static_cast< Merge *>(impl_obj_void);
  /*Unmarshall pup'd fields: int impl_noname_16*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_16; implP|impl_noname_16;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->check(impl_noname_16);
  return implP.size();
}

void CkIndex_Merge::_marshallmessagepup_check_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_16*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_16; implP|impl_noname_16;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_16");
  implDestP|impl_noname_16;
}
PUPable_def(SINGLE_ARG(Closure_Merge::check_8_closure))
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
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements/2+1));
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
/* DEFS: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
 */

void CProxySection_Merge::startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_5;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_7;
    implP|impl_noname_8;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_5;
    implP|impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_7;
    implP|impl_noname_8;
    implP|impl_noname_9;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_startCompare_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
 */

void CProxySection_Merge::requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|impl_noname_c;
    implP|impl_noname_d;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
    implP|impl_noname_b;
    implP|impl_noname_c;
    implP|impl_noname_d;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_requestSwap_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
 */

void CProxySection_Merge::acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_e;
    implP|impl_noname_f;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_10;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_e;
    implP|impl_noname_f;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_10;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_acceptSwap_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
 */

void CProxySection_Merge::denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_11;
    implP|impl_noname_12;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_13;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_11;
    implP|impl_noname_12;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_13;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_denySwap_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
 */

void CProxySection_Merge::saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const int *val, int impl_noname_14, const bool &impl_noname_15
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_val, impl_cnt_val;
  impl_off_val=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_val=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_14;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_15;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_val;
    implP|impl_cnt_val;
    implP|impl_noname_14;
    //Have to cast away const-ness to get pup routine
    implP|(bool &)impl_noname_15;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_val,val,impl_cnt_val);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_saveValue_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check(int impl_noname_16);
 */

void CProxySection_Merge::check(int impl_noname_16, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int impl_noname_16
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_16;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_16;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Merge::idx_check_marshall8(),0);
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

  // REG: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
  idx_startCompare_marshall3();

  // REG: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
  idx_requestSwap_marshall4();

  // REG: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
  idx_acceptSwap_marshall5();

  // REG: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
  idx_denySwap_marshall6();

  // REG: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
  idx_saveValue_marshall7();

  // REG: void check(int impl_noname_16);
  idx_check_marshall8();

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
void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
void check(int impl_noname_16);
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
