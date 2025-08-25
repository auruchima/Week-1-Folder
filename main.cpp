//
//  main.cpp
//  PS3P3
//
//  Created by Alex Uruchima on 8/23/25.


///INPUT:
///- last name
///- score
///PROCESS:
///- insert last name and score
///- display result
///OUTPUT:
///- display users last name and score

#include <iostream>
using namespace std;

int main() {
    string lastname;
    int score;
    cout<<"What is your last name ";
    cin>>lastname;
    cout<<"What is your score ";
    cin>>score;
    cout<<lastname<< " has a score of " <<score <<endl;
    
   
    return 0;
}
