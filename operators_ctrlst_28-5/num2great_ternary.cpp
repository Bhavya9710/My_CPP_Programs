#include<iostream>
using namespace std;

int a,b;
string res;
int main(){
    cout << "enter the values of a:";
    cin >> a;
    cout << "enter the value of b:";
    cin >> b;

    res = (a>b)?"a is greater than b":"b is greater" ;
    cout << res;
    
}