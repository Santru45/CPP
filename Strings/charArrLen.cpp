#include<iostream>
#include<string>
using namespace std;

int main(){
    int len=0;
    char str[100];
    cout<<"Enter the string: "<<endl;
    cin.getline(str,12);

    cout<<"The string is: ";
    for(int i=0; str[i]!='\0';i++){
        cout<<str[i];
        len++;
    }
    cout<<endl;
    cout<<"Length of the string is: "<<len<<endl;
    return 0;
}