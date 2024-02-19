#include <iostream>
#include <vector>
#include "List.h"
using namespace std;

int main(){

  List<int> list;
  list.insert(5);
  list.insert(10);
  list.insert(15);
  list.insert(20);
  list.insert(25);
  list.insert(30);
  list.print();

  cout<<"size: "<<list.getSize()<<endl;
  cout<<"max: "<<list.getMax()<<endl;

  list.removeLast();
  list.print();
  
  return 0;
}
