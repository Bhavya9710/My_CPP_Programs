#include<iostream>
using namespace std;
float a,b,c ;

int main(){
    cout << "Enter the angle A:";
    cin >> a;
    cout << "Enter the angle B:";
    cin >> b;
    cout << "enter the angle C:";
    cin >> c;
    if ((a+b+c) == 180){
        a,b,c > 0;
        cout << "This is a perfect triangle";
    }
    else {
        cout << "Check the values of the angles in the traingle.";
    }
}