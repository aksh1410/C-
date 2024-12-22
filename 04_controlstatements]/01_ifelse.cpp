#include<iostream>
using namespace std;

int main(){
    int num1;
    cout << "enter number: ";
    cin >> num1;
    if(num1 >=0 && num1 <= 100){
        if(num1%2 == 0){
            cout << num1 << " is even";
        }
        else{
            cout << num1 << " is odd";
        }
    }
    else{
        cout << "please enter number between 0 and 100";

    }
}