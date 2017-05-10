



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::terminar_2_closure : public SDAG::Closure {
      int *values;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      terminar_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      terminar_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      int *& getP0() { return values;}
      void pup(PUP::er& __p) {
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_values, impl_cnt_values; 
  implP|impl_off_values;
  implP|impl_cnt_values;
          impl_buf+=CK_ALIGN(implP.size(),16);
        values = (int *)(impl_buf+impl_off_values);
        }
      }
      virtual ~terminar_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(terminar_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::barrier_3_closure : public SDAG::Closure {
      

      barrier_3_closure() {
        init();
      }
      barrier_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~barrier_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(barrier_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int numElements;
 */
extern int numElements;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_numElements(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|numElements;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int cantChares;
 */
extern int cantChares;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_cantChares(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|cantChares;
}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void terminar(const int *values);
void barrier(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */

CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_Main::CProxy_Main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      _call_Main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  new (impl_obj) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void terminar(const int *values);
 */

void CProxy_Main::terminar(const int *values, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *values
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_values, impl_cnt_values;
  impl_off_values=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_values=sizeof(int)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_values;
    implP|impl_cnt_values;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_values;
    implP|impl_cnt_values;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_values,values,impl_cnt_values);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_terminar_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_terminar_marshall2(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_terminar_marshall2(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_terminar_marshall2() {
  int epidx = CkRegisterEp("terminar(const int *values)",
      _call_terminar_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_terminar_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_terminar_marshall2);

  return epidx;
}


void CkIndex_Main::_call_terminar_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *values*/
  PUP::fromMem implP(impl_buf);
  int impl_off_values, impl_cnt_values; 
  implP|impl_off_values;
  implP|impl_cnt_values;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *values=(int *)(impl_buf+impl_off_values);
  impl_obj->terminar(values);
}

int CkIndex_Main::_callmarshall_terminar_marshall2(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast< Main *>(impl_obj_void);
  /*Unmarshall pup'd fields: const int *values*/
  PUP::fromMem implP(impl_buf);
  int impl_off_values, impl_cnt_values; 
  implP|impl_off_values;
  implP|impl_cnt_values;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *values=(int *)(impl_buf+impl_off_values);
  impl_obj->terminar(values);
  return implP.size();
}

void CkIndex_Main::_marshallmessagepup_terminar_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const int *values*/
  PUP::fromMem implP(impl_buf);
  int impl_off_values, impl_cnt_values; 
  implP|impl_off_values;
  implP|impl_cnt_values;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *values=(int *)(impl_buf+impl_off_values);
  if (implDestP.hasComments()) implDestP.comment("values");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*values))<impl_cnt_values;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|values[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_Main::terminar_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrier(void);
 */

void CProxy_Main::barrier(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_barrier_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_barrier_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_barrier_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_barrier_void() {
  int epidx = CkRegisterEp("barrier(void)",
      _call_barrier_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_barrier_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->barrier();
}
PUPable_def(SINGLE_ARG(Closure_Main::barrier_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void terminar(const int *values);
  idx_terminar_marshall2();

  // REG: void barrier(void);
  idx_barrier_void();

}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void _registermain(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  CkRegisterReadonly("numElements","int",sizeof(numElements),(void *) &numElements,__xlater_roPup_numElements);

  CkRegisterReadonly("cantChares","int",sizeof(cantChares),(void *) &cantChares,__xlater_roPup_cantChares);

  _registermerge();

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void terminar(const int *values);
void barrier(void);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

  _registerInitCall(processorStartupFunc,0);

}
extern "C" void CkRegisterMainModule(void) {
  _registermain();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main >(dynamic_cast<Main* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
