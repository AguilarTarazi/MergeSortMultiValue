#ifndef __MERGE_H__
#define __MERGE_H__

class Merge : public CBase_Merge {

 private:
  /// Member Variables (Object State) ///
  int myValue, newPos, newcantChares, phase, tempo, indexSave, posicion, posicionDer;
  int indexLlamoIzq, accion, primero, cantFases, elementos;
  bool activo,noValues;
  int *myValues;
  int comparar[30];
  int numElementsLocal;
  /// Member Functions (private) ///
  void sort(int,int,int[]);
  void merging(int,int,int,int[]);
  void bubbleSort(int[],int);
  void insertionSort();

 public:
  /// Constructors ///
  Merge();
  Merge(CkMigrateMessage *msg);

  /// Entry Methods ///
  void initPhase(int,int,int,int,int[],int);
  void startCompare(int);
  void requestSwap(int,int,int);
  // void acceptSwap(int [],int);
  // void denySwap(int [],int);
  void saveValue(int [],int,bool);
  void check();
  void listo();
};


#endif //__MERGE_H__
