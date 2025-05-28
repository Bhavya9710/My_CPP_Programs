#include<iostream>
using namespace std;
char a;
int main(){
    cout << "enter the alphabet:";
    cin >> a;
    if ((a>='A' and a<='Z') || (a>='a' and a<='z')){
        if(a == 'a' || a == 'e' || a=='i' || a == 'o' || a== 'u' || a =='A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
            cout << "it's vowel";
        }
        else {
            cout << "a consonant";
        }

    }
    else {
        cout << " it's not an alphabet";
    }
}