/*
Build a program that takes a user's age as input and uses if-else statements to determine 
if the user is a child, teenager, adult, or senior citizen.
*/

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<1){
        while(age<1){
            cout<<"Please enter a valid age."<<endl;
            cout<<"Enter your age: ";
            cin>>age;
        }
    }
    if(age>=1 && age<13){
        cout<<"You are a child"<<endl;
    }
    else if(age>=13 && age<18){
        cout<<"You are a teenager"<<endl;
    }
    else if(age>=18 && age<65){
        cout<<"You are an adult"<<endl;
    }
    else{
        cout<<"You are a senior citizen"<<endl;
    }

    return 0;
}