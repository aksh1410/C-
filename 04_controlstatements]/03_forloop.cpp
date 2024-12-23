#include<iostream>
using namespace std;

//int main(){
  //  int i,j;
    // for(i=1;i<=4;i++){
    //     for(j=1;j<=3;j++){
    //         cout << "*";
            
    //     }
    //     cout << endl;
    // }
    //right angle triangle
    // for (i=1;i<=4;i++){
    //     for(j=1;j<=i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;

    //  }
    //reverse triangle
    // for(i=4;i<=4;i--){
    //     for(j=1;j<=i;j++){
    //         cout <<"*";
    //     }
    //     cout << endl;

    // }
    //triangl with spaces

int main(){
    int  num,i,j,k;
    cout << "enter the length of triangle: ";
    cin >> num;
    for(i=1;i<=num;i++){
        for(j=num;j>i;j--){
            cout << " ";
            }
            for(k=1;k<=i;k++){
                cout << "*";
        }
        cout << endl;
    }
}

   
    


