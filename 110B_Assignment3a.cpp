#include <iostream>
#include <cmath>
using namespace std;

   int showMenu();
   void addition();
   void substration();
   void multiplication();
   void division();
   void power();
   void squareRoot();
   void ABS();
   void floor();
   void ceil();
   void factorial();

int main(){

   int choice;

   choice = showMenu();

   switch ( choice ) {

   case 1 :
        addition();
    break;

   case 2 :
        substration();
    break;

   case 3 :
        multiplication();
    break;

   case 4 :
        division();
    break;

   case 5 :
        power();
    break;

   case 6 :
        squareRoot();
    break;

   case 7 :
        ABS();
    break;

   case 8 :
        floor();
    break;

   case 9 :
        ceil();
    break;

   case 10 :
        factorial();
    break;

    return 0;
}
}

   int showMenu(){

      int choice;

      cout << "Enter your choice. Pick from 1 to 10. ";
      cin >> choice;
      return choice;
   }

    void addition (){

      double num1, num2, result;

      cout << "Enter the first number" << endl;
      cin >> num1 ;
      cout << "Enter the second number" << endl;
      cin >>  num2;
      result = num1 + num2;
      cout << "The answer is " << result << endl;
   }

    void substration (){

      double num1, num2, result;

      cout << "Enter the first number" << endl;
      cin >> num1 ;
      cout << "Enter the second number" << endl;
      cin >>num2;
      result = num1 - num2;
      cout << "The answer is " << result << endl;
   }

    void multiplication (){

      double num1, num2, result;

      cout << "Enter the first number" << endl;
      cin >> num1 ;
      cout << "Enter the second number" << endl;
      cin >> num2;
      result = num1 * num2;
      cout << "The answer is " << result << endl;
   }

    void division (){

      double num1, num2, result;

      cout << "Enter the first number" << endl;
      cin >> num1;
      cout << "Enter the second number" << endl;
      cin >>num2;
      result = num1 / num2;
      cout << "The answer is " << result << endl;
   }

    void power(){

      double num1, num2, result;

      cout << "Enter the base " << endl;
      cin >> num1 >>num2;
      cout << "Enter the exponent " << endl;
      result = pow(num1,num2);
      cout << "The answer is " << result << endl;
   }

    void squareRoot(){

      double num1, num2 = 0.5, result;

      cout << "Enter a number ";
      cin >> num1;
      result = pow(num1,num2);
      cout << "The square root of  this number is " << result << endl;
   }

    void ABS(){

      double num1, result;

      cout << "Enter a number ";
      cin >> num1;
      result = abs(num1);
      cout << "The absolute value of  the number is " << result << endl;
   }

    void floor(){

      double num1, result;

      cout << "Enter a number " ;
      cin >> num1;
      result = floor(num1);
      cout << "The answer is " << result << endl;
   }

    void ceil(){

      double num1, result;

      cout << "Enter a number ";
      cin >> num1;
      result = ceil(num1);
      cout << "The answer is " << result << endl;
   }

    void factorial(){

      int num1;
      long factorial  =  1;

      cout << "Enter a number " ;
      cin >> num1;
      for(int i = 1; i <= num1 ; i++)
         factorial *= i;
         cout << "The answer is " << factorial << endl;
   }
