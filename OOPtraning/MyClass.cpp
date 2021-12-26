#include <iostream>
#include <string>
#include "MyClass.h"

//MyClass::MyClass()(int a, int b)
//: regvar(a), convar(b){

   // std::cout<< regvar << std::endl;
   // std::cout<< convar << std::endl;
//}

class MyClass{

    private:
        int regvar;
        const int convar;
    public:
        MyClass(int a, int b): regvar(a), convar(b){

          std::cout<<regvar<<std::endl;
          
        }
        void myPrint();


};



void MyClass::myPrint(){

  std::cout << "Hello" << std::endl; 
}

int add (int x, int y){

  return x + y; 
}

int sub( int x , int y){

  return  x - y;

} 

void displayname(char name [10]){

    std::cout<<name;

}


