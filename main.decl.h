#ifndef _DECL_main_H_
#define _DECL_main_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly int numElements;
 */

/* DECLS: readonly int cantChares;
 */

#include "merge.decl.h"

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void terminar(const int *values);
void barrier(void);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void terminar(const int *values);
     */
    // Entry point registration at startup
    
    static int reg_terminar_marshall2();
    // Entry point index lookup
    
    inline static int idx_terminar_marshall2() {
      static int epidx = reg_terminar_marshall2();
      return epidx;
    }

    
    inline static int idx_terminar(void (Main::*)(const int *values) ) {
      return idx_terminar_marshall2();
    }


    
    static int terminar(const int *values) { return idx_terminar_marshall2(); }
    
    static void _call_terminar_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_terminar_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_terminar_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_terminar_marshall2(PUP::er &p,void *msg);
    /* DECLS: void barrier(void);
     */
    // Entry point registration at startup
    
    static int reg_barrier_void();
    // Entry point index lookup
    
    inline static int idx_barrier_void() {
      static int epidx = reg_barrier_void();
      return epidx;
    }

    
    inline static int idx_barrier(void (Main::*)(void) ) {
      return idx_barrier_void();
    }


    
    static int barrier(void) { return idx_barrier_void(); }
    
    static void _call_barrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_barrier_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_Main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

/* DECLS: void terminar(const int *values);
 */
    
    void terminar(const int *values, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrier(void);
 */
    
    void barrier(void);

};
PUPmarshall(CProxy_Main)
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;






/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct terminar_2_closure;


    struct barrier_3_closure;

};


extern void _registermain(void);
extern "C" void CkRegisterMainModule(void);
#endif
