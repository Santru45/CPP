#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a','b','a','c','u','s'};
    int st = 0, end = vec.size()-1;

    while(st<end){
        swap(vec[st++],vec[end--]);
    }

    cout<<"The reversed string is :"<<endl;
    for(char ch : vec){
        cout<<ch;
    }
    return 0;
}