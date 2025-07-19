#include<iostream>
using namespace std;

int main(){
    char str[15];
    cout<<"Enter the string";
    cin.getline(str,15);    //Reads 14 characters and adds \0 at the end
    cout<<str<<endl;
    return 0;
}