//convert farenheit to celcius
#include<iostream>
using namespace std;
float far,cel;

int main(){
    cout << "enter the farenheit value:";
    cin >> far;
    cel = (far -32) * (5.0/9) ;
    cout << "the celsius value is: " << cel << endl ;
}