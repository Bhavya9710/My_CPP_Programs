#include<iostream>
using namespace std;
int year;
int main(){
    cout << "enter the year number: " ;
    cin >> year ;
    bool isLeapYear;
    isLeapYear = (year%4 ==0) and ((year%400 == 0) || (year % 100 not_eq 0));
    cout << "is it a leap year?"<<endl << isLeapYear << endl ;
    return 0;
}