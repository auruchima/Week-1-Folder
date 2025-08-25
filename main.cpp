//
//  main.cpp
//  PS1P1
//
//  Created by Alex Uruchima on 8/22/25.
/// INPUT:
/// - enter users name
/// - enter users last name
/// -add 'hello" message
/// PROCESS:
/// - insert users name and last name
/// - display result with a "hello "message
/// OUTPUT:
/// - display full content 
#include <iostream>
using namespace std;
int main(){
    string name;
    cout <<"Whats your name ";
    cin >>name;
    string lastname;
    cout <<"What is your last name ";
    cin  >> lastname;
    cout<<"Hello "<<lastname<<endl;
    
  
    return 0;
}
