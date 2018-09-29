#include <iostream>
using namespace std;

int searchMax(int array[], int elementsOfarray,int value)
  {
    int index = 0;
    int position = -1;
    bool found = false;

    while(index < elementsOfarray && !found)
    {

    if(array[index] == value)
    {
      found = true;
      position = index;
    }
      index++;
    }
    return position;
  }


int searchMin(int array[], int elementsOfarray,int value)
  {
    int index = 0;
    int position = -1;
    bool found = false;

    while(index > elementsOfarray && !found)
    {

    if(array[index] == value)
    {
      found = true;
      position = index;
    }
      index++;
    }
    return position;
  }

int main()
{
  //int array[];
  int arraySize = 0;
  int elementsOfarray;
  int min, max, value;

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
   max = searchmax(array, elementsOfarray, value) 
   cout << max << endl;

   min = searchmin(array, elementsOfarray, value)
   cout << min << endl;
}
  