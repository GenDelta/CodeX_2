/*
Create a program that uses a loop to find and display the first 5 prime numbers. 
Use the break statement to exit the loop once all prime numbers are found.
*/
#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int count = 0;
    cout<<"The first 5 prime numbers are:"<<endl;
    for(int i = 2; i <= 100; i++){
        if(isPrime(i)){
            cout<<i<<" ";
            count++;
            if(count == 5){
                break;
            }
        }
    }
    return 0;
}