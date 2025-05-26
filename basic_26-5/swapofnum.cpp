//swap numbers (i) without using a third variable and (ii) using a third variable
#include<iostream>
using namespace std;
int a,b;
int c, d,e;
int main()
{
    cout<<"enter a & b values:";
    cin>>a>>b;
    // cout<<a<<endl;
    // cout<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swap is:"<<a<< "  " <<b << endl;
    // cout<<a<<endl;
    // cout<<b << endl;

    //using third variable
    cout << "enter d:";
    cin >> d;
    cout << " enter e:";
    cin >>e;
    c=d;
    d=e;
    e=c;
    cout << "swap num is: " << d <<"  " << e;
}

