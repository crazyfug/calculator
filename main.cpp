#include <iostream>
#include <math.h>
using namespace std;

class operations{
public:
double N1, N2, N3;
};

void Addition(int a, int b, int c){
    int Add = a + b + c;
    cout << "Sum of the number: " << Add << endl;
}

void Subtraction(int a, int b, int c){
    int sub = a - b - c;
    cout << "Subtraction of the numbers: " << sub << endl;
}

void Product(int a, int b, int c){
    int product = a*b*c;
    cout << "Prouct of the numbers: " << product << endl;
}
void Division(int a, int b, int c){
    int division = a/b/c;
    cout << "Division of the numbers: " << division << endl;
}
int main (){
    operations O;
int A, B, C;
int choice;
cout << "Enter any three numbers: \n" << endl;
cin >> O.N1 >> O.N2 >> O.N3;
cout << "Which operator to use: \n" << endl;
cout << "1. +, 2. -, 3. /, 4. *" << endl;
cin >> choice;
  
if (choice == 1){
    Addition(O.N1, O.N2, O.N3);
}
else if (choice == 2){
  Subtraction(O.N1,O.N2, O.N3);
}
else if (choice == 3){
   Product(O.N1,O.N2, O.N3);
}
else if (choice == 4){
     Division(O.N1,O.N2, O.N3);
} 
else {
    cout << "Invalid. " << endl;
}
  return 0;
}
