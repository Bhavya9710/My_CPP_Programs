//find the size of int, float, double and char
#include<iostream>
using namespace std;
int a;
float b;
char c;
double d;
int main(){
    // cout << "enter an integer value:" ;
    // cin >> a;
    cout << "the size of integer value is:  " << sizeof(a) << endl;
    cout << "the size of float value is:  " << sizeof(b) << endl;
    cout << "the size of char value is:  " << sizeof(c) << endl;
    cout << "the size of double value is:  " << sizeof(d) << endl;
    return 0;
}