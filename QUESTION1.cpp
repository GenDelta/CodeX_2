/*
Q1) Create a program that takes user input as a floating-point number, 
converts it to an integer using typecasting, 
and displays both the original and the typecasted values.
*/

#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The original number is: "<<a<<endl;
    cout<<"The typecasted number is: "<<(int)a<<endl;
    return 0;
}