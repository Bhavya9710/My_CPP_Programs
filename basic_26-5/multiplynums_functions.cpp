//multiply numbers using functions
#include<iostream>
float a,b;
float mul;
using namespace std;
void multiply();
void result();
int main(){
    cout << "value of a is " ;
    cin >> a;
    cout << " value of b is ";
    cin >> b;
    multiply();
    cout << "value of mul is: " << mul << endl ;

    return 0;
}
void multiply( ){
    mul = a * b;
}
//void result(){
   // multiply();
   // cout << "value of mul is: " << mul << endl ;

//}