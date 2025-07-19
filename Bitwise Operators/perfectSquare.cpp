#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n & 511 == n){
        cout<<"The number is a square number";
    }
    else{
        cout<<"The number is not a square number";
    }
    return 0;
}