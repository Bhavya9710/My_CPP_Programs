#include<iostream>
using namespace std;
char a;

int main(){
    cout << "enter the data:";
    cin >> a;
    if ((a>='A' and a<='Z') || (a>='a' and a<='z')){
        cout << "The entered data is alphabet";
    }
    else if (a>= '0' and a<= '9'){
        cout << "the entered data is a number";
    }
    else
    {
        cout << "the entered data is a special character";
    }
}