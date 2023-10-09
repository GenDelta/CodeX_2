/*
Develop a program that calculates the area of a circle using a constant value 
for pi (π). Use appropriate constants for radius and pi.
*/
#include<iostream>
using namespace std;
int main(){
    const float pi = 3.14;
    float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float area = pi*radius*radius;
    cout<<"The area of the circle is: "<<area<<endl;
    return 0;
}