#include <iostream>

int main(){
 
    using namespace std;

    int curval = 0;
    int val = 0;

    if(cin >> curval){
        
        int count = 1;
      
        while( cin >> val){

            if( val == curval)
                count++;
            
            else{

                cout << curval << "occored" << count << "times" <<endl;
                curval = val;
                count = 1;
            }
        }
        
    cout << curval << "occored" << count << "times" <<endl;

    }

}