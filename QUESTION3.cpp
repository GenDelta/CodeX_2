/*
Write a program that uses manipulators to format and display the current date and time.
*/

#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

int main(){
    time_t now = time(0); // current date/time based on current system
    tm *lt = localtime(&now); // local time
    cout << setfill('0') << setw(2) 
    << lt->tm_mday << "/" << setw(2) // day of month
    << lt->tm_mon + 1 << "/" << setw(4) // month of year
    << lt->tm_year + 1900 << endl; // year since 1900
    cout << setfill('0') << setw(2) 
    << lt->tm_hour << ":" << setw(2) // hours since midnight
    << lt->tm_min << ":" << setw(2) // minutes since midnight
    << lt->tm_sec << endl; // seconds since midnight
    return 0;
}