#include <iostream>

using namespace std;


class bankaccount{

  
    private:
        string name = {"alexa"};
    
    public:

        bankaccount(string x){
        
        cout << "hey !! "<< x ;
      
        }

        void sayhi(){

            cout << "HI" << name;
        }


};


int main( void ){


    bankaccount b1("'GIHAA");
   // b1.sayhi();

}

