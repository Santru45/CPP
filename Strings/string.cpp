#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "Santrupt";
    string str2 = "Manjaragi";

    string str3 = str1 +" "+ str2;
    cout<<str3<<endl;
    for(char ch : str3){
        cout<<ch;
    }
    cout<<endl;
    string str4;
    cout<<"Enter the string: ";
    getline(cin,str4);
    cout<<str4;
    
    return 0;
}