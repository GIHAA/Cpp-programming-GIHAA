#include <iostream>
#include "MyClass.h"

int main(){

  char name[10] = {"GIHAN"};
  std::cout<<add(20, 20)<<std::endl;
  std::cout<<sub(20, 20)<<std::endl;
  displayname(name);

  MyClass class1;

  class1.myPrint();

}

