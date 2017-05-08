#ifndef _DECL_merge_H_
#define _DECL_merge_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: array Merge: ArrayElement{
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
 class Merge;
 class CkIndex_Merge;
 class CProxy_Merge;
 class CProxyElement_Merge;
 class CProxySection_Merge;
/* --------------- index object ------------------ */
class CkIndex_Merge:public CkIndex_ArrayElement{
  public:
    typedef Merge local_t;
    typedef CkIndex_Merge index_t;
    typedef CProxy_Merge proxy_t;
    typedef CProxyElement_Merge element_t;
    typedef CProxySection_Merge section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Merge(void);
     */
    // Entry point registration at startup
    
    static int reg_Merge_void();
    // Entry point index lookup
    
    inline static int idx_Merge_void() {
      static int epidx = reg_Merge_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Merge_void(); }
    
    static void _call_Merge_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Merge_void(void* impl_msg, void* impl_obj);
    /* DECLS: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_initPhase_marshall2();
    // Entry point index lookup
    
    inline static int idx_initPhase_marshall2() {
      static int epidx = reg_initPhase_marshall2();
      return epidx;
    }

    
    inline static int idx_initPhase(void (Merge::*)(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4) ) {
      return idx_initPhase_marshall2();
    }


    
    static int initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4) { return idx_initPhase_marshall2(); }
    
    static void _call_initPhase_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initPhase_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_initPhase_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_initPhase_marshall2(PUP::er &p,void *msg);
    /* DECLS: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
     */
    // Entry point registration at startup
    
    static int reg_startCompare_marshall3();
    // Entry point index lookup
    
    inline static int idx_startCompare_marshall3() {
      static int epidx = reg_startCompare_marshall3();
      return epidx;
    }

    
    inline static int idx_startCompare(void (Merge::*)(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9) ) {
      return idx_startCompare_marshall3();
    }


    
    static int startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9) { return idx_startCompare_marshall3(); }
    
    static void _call_startCompare_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startCompare_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startCompare_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startCompare_marshall3(PUP::er &p,void *msg);
    /* DECLS: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
     */
    // Entry point registration at startup
    
    static int reg_requestSwap_marshall4();
    // Entry point index lookup
    
    inline static int idx_requestSwap_marshall4() {
      static int epidx = reg_requestSwap_marshall4();
      return epidx;
    }

    
    inline static int idx_requestSwap(void (Merge::*)(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d) ) {
      return idx_requestSwap_marshall4();
    }


    
    static int requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d) { return idx_requestSwap_marshall4(); }
    
    static void _call_requestSwap_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestSwap_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_requestSwap_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_requestSwap_marshall4(PUP::er &p,void *msg);
    /* DECLS: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
     */
    // Entry point registration at startup
    
    static int reg_acceptSwap_marshall5();
    // Entry point index lookup
    
    inline static int idx_acceptSwap_marshall5() {
      static int epidx = reg_acceptSwap_marshall5();
      return epidx;
    }

    
    inline static int idx_acceptSwap(void (Merge::*)(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10) ) {
      return idx_acceptSwap_marshall5();
    }


    
    static int acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10) { return idx_acceptSwap_marshall5(); }
    
    static void _call_acceptSwap_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_acceptSwap_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_acceptSwap_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_acceptSwap_marshall5(PUP::er &p,void *msg);
    /* DECLS: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
     */
    // Entry point registration at startup
    
    static int reg_denySwap_marshall6();
    // Entry point index lookup
    
    inline static int idx_denySwap_marshall6() {
      static int epidx = reg_denySwap_marshall6();
      return epidx;
    }

    
    inline static int idx_denySwap(void (Merge::*)(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13) ) {
      return idx_denySwap_marshall6();
    }


    
    static int denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13) { return idx_denySwap_marshall6(); }
    
    static void _call_denySwap_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_denySwap_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_denySwap_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_denySwap_marshall6(PUP::er &p,void *msg);
    /* DECLS: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
     */
    // Entry point registration at startup
    
    static int reg_saveValue_marshall7();
    // Entry point index lookup
    
    inline static int idx_saveValue_marshall7() {
      static int epidx = reg_saveValue_marshall7();
      return epidx;
    }

    
    inline static int idx_saveValue(void (Merge::*)(const int *val, int impl_noname_14, const bool &impl_noname_15) ) {
      return idx_saveValue_marshall7();
    }


    
    static int saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15) { return idx_saveValue_marshall7(); }
    
    static void _call_saveValue_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_saveValue_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_saveValue_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_saveValue_marshall7(PUP::er &p,void *msg);
    /* DECLS: void check(int impl_noname_16);
     */
    // Entry point registration at startup
    
    static int reg_check_marshall8();
    // Entry point index lookup
    
    inline static int idx_check_marshall8() {
      static int epidx = reg_check_marshall8();
      return epidx;
    }

    
    inline static int idx_check(void (Merge::*)(int impl_noname_16) ) {
      return idx_check_marshall8();
    }


    
    static int check(int impl_noname_16) { return idx_check_marshall8(); }
    
    static void _call_check_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_check_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_check_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_check_marshall8(PUP::er &p,void *msg);
    /* DECLS: Merge(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Merge_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Merge_CkMigrateMessage() {
      static int epidx = reg_Merge_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Merge_CkMigrateMessage(); }
    
    static void _call_Merge_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Merge_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Merge : public CProxyElement_ArrayElement{
  public:
    typedef Merge local_t;
    typedef CkIndex_Merge index_t;
    typedef CProxy_Merge proxy_t;
    typedef CProxyElement_Merge element_t;
    typedef CProxySection_Merge section_t;

    CProxyElement_Merge(void) {}
    CProxyElement_Merge(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Merge *ckLocal(void) const
    { return (Merge *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Merge(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Merge(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Merge(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Merge(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Merge(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
 */
    
    void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
 */
    
    void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
 */
    
    void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
 */
    
    void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
 */
    
    void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
 */
    
    void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void check(int impl_noname_16);
 */
    
    void check(int impl_noname_16, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Merge(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Merge)
/* ---------------- collective proxy -------------- */
 class CProxy_Merge : public CProxy_ArrayElement{
  public:
    typedef Merge local_t;
    typedef CkIndex_Merge index_t;
    typedef CProxy_Merge proxy_t;
    typedef CProxyElement_Merge element_t;
    typedef CProxySection_Merge section_t;

    CProxy_Merge(void) {}
    CProxy_Merge(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_Merge operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Merge(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Merge operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Merge(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Merge operator [] (int idx) const 
        {return CProxyElement_Merge(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Merge operator () (int idx) const 
        {return CProxyElement_Merge(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Merge(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Merge(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Merge(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);
    static CkArrayID ckNew(const int s1);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb);

/* DECLS: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
 */
    
    void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
 */
    
    void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
 */
    
    void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
 */
    
    void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
 */
    
    void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
 */
    
    void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void check(int impl_noname_16);
 */
    
    void check(int impl_noname_16, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Merge(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Merge)
/* ---------------- section proxy -------------- */
 class CProxySection_Merge : public CProxySection_ArrayElement{
  public:
    typedef Merge local_t;
    typedef CkIndex_Merge index_t;
    typedef CProxy_Merge proxy_t;
    typedef CProxyElement_Merge element_t;
    typedef CProxySection_Merge section_t;

    CProxySection_Merge(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Merge operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Merge(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Merge operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Merge(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Merge operator [] (int idx) const 
        {return CProxyElement_Merge(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Merge operator () (int idx) const 
        {return CProxyElement_Merge(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_Merge(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Merge(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Merge(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Merge(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Merge(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Merge(void);
 */
    

/* DECLS: void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4);
 */
    
    void initPhase(int impl_noname_0, int impl_noname_1, int impl_noname_2, const int *val, int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9);
 */
    
    void startCompare(int impl_noname_5, int impl_noname_6, const bool &impl_noname_7, int impl_noname_8, int impl_noname_9, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d);
 */
    
    void requestSwap(int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10);
 */
    
    void acceptSwap(int impl_noname_e, int impl_noname_f, const int *val, int impl_noname_10, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13);
 */
    
    void denySwap(int impl_noname_11, int impl_noname_12, const int *val, int impl_noname_13, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15);
 */
    
    void saveValue(const int *val, int impl_noname_14, const bool &impl_noname_15, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void check(int impl_noname_16);
 */
    
    void check(int impl_noname_16, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Merge(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Merge)
#define Merge_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Merge>CBase_Merge;

/* ---------------- method closures -------------- */
class Closure_Merge {
  public:


    struct initPhase_2_closure;


    struct startCompare_3_closure;


    struct requestSwap_4_closure;


    struct acceptSwap_5_closure;


    struct denySwap_6_closure;


    struct saveValue_7_closure;


    struct check_8_closure;


};

extern void _registermerge(void);
#endif
