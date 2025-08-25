//
//  main.cpp
//  PS5P5
//
//  Created by Alex Uruchima on 8/24/25.
//


// INPUT:
// - number 1, number 2.
// - add, multiply and substract
// PROCESS:
// - assing variable for number 1 and 2
//- select case ;add, substract and multiply.
//- display calculation result
// OUTPUT:
//- result of calculation

#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    cout<<"Enter 2 numbers";
    cin>>num1>>num2;
    cout<<"The sum is:" <<num1+num2<<endl;
    cout<<"The product is:" <<num1*num2<<endl;
    cout<<"The difference is:" <<num1-num2<<endl;
  
    return 0;
}
