#include<iostream>
using namespace std;

int main(){
    int number;
    int rem;
    bool isEven;
    
    cout << "enter a number: ";
    cin >> number;
    isEven = (number % 2 ==0) ;
        cout << " is it even? " << isEven << endl ;
   // }
    // else {
    //     cout << "odd" ;
    // }
    return 0;
}
