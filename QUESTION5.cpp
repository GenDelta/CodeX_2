/*
Develop a program that uses a while loop to continuously prompt the user for a 
password until the correct password is entered. (You can decide the correct password)
*/
#include<iostream>
using namespace std;
int main(){
    string password = "PaSsWorD123";
    while(true){
        string input;
        cout<<"Enter password: ";
        cin>>input;
        if(input==password){
            cout<<"Correct password"<<endl;
            break;
        }
        else{
            cout<<"Incorrect password"<<endl;
        }
    }
    return 0;
}