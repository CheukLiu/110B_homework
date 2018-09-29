#include <iostream>
using namespace std;
int input = 

void fibonum(int input){
    int array[input];

    int i =2;

       array[0] = 0 ;
       array[1] = 1;
 
    cout << "The Fibonacci numbers are as follows:\n";
    
    if(input == 0)
      cout << array[0];
      
    if(input < 1000){  
    cout << array[0] << "," << array[1] << ",";
        for(i = 2 ;i <= input;i = i + 2){
            array[i] = array[i - 2] + array[i - 1];
            cout << array[i] << "," ;
        }
    }    
}