#include <iostream>
#include <string>

class Person {

 public:

  Person(string n, Birthday b): name(n),bd(b){

  }
  void printInfo(){

   cout << name << endl;
   bd.printDate();

  }

 private:

  string name;
  Birthday bd;

};

class Birthday {

    public:

        Birthday(int m, int d, int y)
            : month(m), day(d), year(y){

     }
    void printDate(){

        cout<<month<<"/"<<day<<"/"<<year<<endl;

     }

 private:

   int month;
   int day;
   int year;

};

int main (){

    Birthday bd(4 , 29 , 2000);
    Person p ("GIHAA", bd);
    p.printInfo();

}