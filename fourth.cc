#include <iostream>
using namespace std;

class Employee{
  public:
    string name = "";
    string IDnumber;
    string title;
    string department;
    string hourlyRate;
    string numOfHours;
    int weeklyWages = hourlyRate * numOfHours;

}; 

void printEmployee(Employee employee){
  cout << "Name:" << employee.name << endl;
  cout << "IDnumber:" << employee.IDnumber << endl;
  cout << "title:" << employee.title << endl;
  cout << "department:" << employee.department << endl;
  cout << "hourlyRate:" << employee.hourlyRate << endl;
  cout << "numOfHours:" << employee.numOfHours << endl;
  cout << "weeklyWages:" << employee.weeklyWages << endl;
}

void sortemployment(Employment arr[]){
  for(int i = 0; i < 100 - 1; ++i){
    int minValue = i; 
    for(int j = i + 1; j < 100; ++j){
      if(arr[j].name > arr[minValue].name){
        minValue = j; 
      }
    }
    swap(arr[i], arr[minValue]);
  }
}

int main(){
  Employee employee[100]
  return 0;

}