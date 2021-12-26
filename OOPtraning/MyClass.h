#include <iostream>
#ifndef MYCLASS_H
#define MYCLASS_H


class Mycclass{

  private:
    int regvar;
    int convar;
  public:
    Mycclass(int a, int b);
    void myPrint();

};

int add (int x, int y);

int sub( int x , int y);

void displayname( char name [10]);

#endif // MYCLASS_H