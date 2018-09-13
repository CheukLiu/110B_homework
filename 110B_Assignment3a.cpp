#include <iostream>
#include <cmath>
using namespace std;

   int showMenu();
   void addition();
   void subtraction();
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
        subtraction();
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

      cout << "This calculator can help you perform the following function.\n " << endl;

      cout << "Function 1: Sum" << endl;
      cout << "Function 2: Subtraction" <<endl;
      cout << "Function 3: Multiplication" << endl;
      cout << "Function 4: Division" << endl;
      cout << "Function 5: Power" << endl;
      cout << "Function 6: Square Root" << endl;
      cout << "Function 7: Absolute Value" <<endl;
      cout << "Function 8: Floor" << endl;
      cout << "Function 9: Ceiling" << endl;
      cout << "Function 10: Factorial" << endl;
      cout << endl;

      cout <<"Execute a function by entering the function number (1 to 10) ";
      cin >> choice;
      cout << endl;

      return choice;
   }

    void addition (){

      double num1, num2, result;

      cout << "Give two numbers and get the sum\n\n";
      cout << "Enter the first number " ;
      cin >> num1 ;
      cout  << endl;
      cout << "Enter the second number " ;
      cin >>  num2;
      cout << endl;
      result = num1 + num2;
      cout << "The answer is " << result << endl;
   }

    void subtraction (){

      double num1, num2, result;

     cout << "Give two numbers and get the difference\n\n";
      cout << "Enter the first number " ;
      cin >> num1 ;
      cout  << endl;
      cout << "Enter the second number " ;
      cin >>  num2;
      cout << endl;
      result = num1 - num2;
      cout << "The answer is " << result << endl;
   }

    void multiplication (){

      double num1, num2, result;

      cout << "Give two numbers and get the product\n\n";
      cout << "Enter the first number " ;
      cin >> num1 ;
      cout  << endl;
      cout << "Enter the second number " ;
      cin >>  num2;
      cout << endl;
      result = num1 * num2;
      cout << "The answer is " << result << endl;
   }

    void division (){

      double num1, num2, result;

      cout << "Give two numbers and get the quotient\n\n";
      cout << "Enter the first number " ;
      cin >> num1 ;
      cout  << endl;
      cout << "Enter the second number " ;
      cin >>  num2;
      cout << endl;
      result = num1 / num2;
      cout << "The answer is " << result << endl;
   }

    void power(){

      double num1, num2, result;

      cout << "Give two numbers and get the exponent\n\n";
      cout << "Enter the base ";
      cin >> num1 ;
      cout  <<  endl;
      cout << "Enter the exponent ";
      cin >> num2;
      cout << endl;
      result = pow(num1,num2);
      cout << "The answer is " << result << endl;
   }

    void squareRoot(){

      double num1, num2 = 0.5, result;

      cout << "Give a numbers and get the square root\n\n";
      cout << "Enter a number ";
      cin >> num1;
      cout << endl;
      result = pow(num1,num2);
      cout << "The square root of  this number is " << result << endl;
   }

    void ABS(){

      double num1, result;

      cout << "Give a numbers and get the absolute value\n\n";
      cout << "Enter a number ";
      cin >> num1;
      cout << endl;
      result = abs(num1);
      cout << "The absolute value of  the number is " << result << endl;
   }

    void floor(){

      double num1, result;

      cout << "Give a numbers and get its floor number\n\n";
      cout << "Enter a number " ;
      cin >> num1;
      cout << endl;
      result = floor(num1);
      cout << "The answer is " << result << endl;
   }

    void ceil(){

      double num1, result;

      cout << "Give a numbers and get the ceiling number\n\n";
      cout << "Enter a number ";
      cin >> num1;
      cout << endl;
      result = ceil(num1);
      cout << "The answer is " << result << endl;
   }

    void factorial(){

      int num1;
      long factorial  =  1;

      cout << "Give a number and get the factorial\n\n";
      cout << "Enter a number " ;
      cin >> num1;
      cout << endl;
      for(int i = 1; i <= num1 ; i++)
         factorial *= i;
         cout << "The answer is " << factorial << endl;
   }
