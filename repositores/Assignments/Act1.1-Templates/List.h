#ifndef List_H
#define List_H
using namespace std;
#include <vector>
template <class T>

class List{
    private:
        vector <T> data;
        int size;
    public:
        List();
        void insert(const T& value);
        void removeLast();
        T getData(int pos);
        int getSize();
        T getMax();
        void print();
};

//constructor
template <class T>
List<T>::List(){
  size = 0;
}

//insert
template <class T>
void List<T>::insert(const T& value){
  data.push_back(value);
  size++;
}

//remove
template <class T>
void List<T>::removeLast(){
  //valida que la lista no este vicia 
  if (size > 0) {
    //la lista no esta vacia
    cout <<data[size - 1] << endl;
    data.pop_back();
    //decrementamos el tama;o de la lista 
    size--;
  } else{
    cout<< "No hay elementos" << endl;
  }
}

//getData
template <class T>
T List<T>::getData(int pos){
  if (pos >= 0 && pos < size) {
    return data[pos];
  }
  return T();
}

//getSize
template <class T>
int List<T>::getSize() {
  return size;
}

//getMax
template <class T>
T List<T>::getMax() {
  if(size == 0){
    return T();
  }
  T maxVal = data[0];
  for (int i = 0; i < size; i++){
    if(data[i] > maxVal){
      maxVal = data[i];
    }
  }
  return maxVal;
}

template <class T>
void List<T>::print() {
  for (int i = 0; i < size; i++){
    cout << "[" << i << "] - " << data[i] << endl;
  }
}

#endif // LIST_H