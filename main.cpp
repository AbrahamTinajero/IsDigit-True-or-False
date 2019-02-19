#include <iostream>
#include <cstdbool>
using namespace std;

char value;
bool isDigit(char value);

int main(){
 char ch = '5';
 do {
 cout << "Enter: ";
   cin >> ch;
    cout << "Is Digit: "<< isDigit(ch) << endl;
 }while(ch != -1); 
  }

  bool isDigit(char value){
     if(value >='0' && value <= '9')
       return true;
      else
       //cout<< "false";
       return false;
  }
