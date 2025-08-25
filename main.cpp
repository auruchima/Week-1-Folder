//
//  main.cpp
//  PS2P2
//
//  Created by Alex Uruchima on 8/23/25.



/// INPUT:
/// - Insert number 1 and 2
/// - add two numbers
/// PROCESS:
/// - assing value for number 1 and 2
/// - select calculation type: sum
/// - calculate and display result
/// OUTPUT:
///  - Result of calculation
#include <iostream>
using namespace std;
int main() {
    int number1, number2, sum;
    cout << "Insert a number ";
    cin >> number1;
    cout <<"Insert another number ";
    cin >> number2;
    sum = number1 + number2;
    cout<< sum << endl;
    
    return 0;
}
