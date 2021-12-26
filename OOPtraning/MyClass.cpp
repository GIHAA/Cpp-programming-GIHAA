#include <iostream>
#include <string>
#include "MyClass.h"

MyClass::MyClass(){


}

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


