#include <iostream>
using namespace std;

void fibonum(int input){
    int array[input];

    int i =2;

       array[0] = 0 ;
       array[1] = 1;
 
    cout << "The Fibonacci numbers are as follows:\n";
    
    if(input == 0)
      cout << array[0];
      
    else{  
    cout << array[0] << "," << array[1] << ",";
        for(i = 2 ;i <= input;i++){
            array[i] = array[i - 2] + array[i - 1];
            cout << array[i] << "," ;
        }
    }    
   }



int main(){
    
    int count;
    
    cout << "Please enter the number (larger than or equal to 0) of element(s) that the Fibonacci numbers will have: "<<endl;
    cin >> count;
        
  
    
    fibonum(count);
    
    return 0;
    }
