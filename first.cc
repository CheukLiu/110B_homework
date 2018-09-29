#include <iostream>
using namespace std;

int main()
{
  //int array[];
  int arraySize = 0;
  int elementsOfarray;

  cout << "Enter the size of the array: " << endl;
  cin >> arraySize;
  int array[arraySize];
  //cout << "Enter the elements of the array: " << endl;

  for(int i =0; i < arraySize; i++)
  {
    cout << "Enter the elements of the array: " <<endl;
    cin >> array[i]; 
    cout << array[i];
  }
}