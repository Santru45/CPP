#include<iostream>
using namespace std;

int main(){
    char ch = 65;
    int n=6;
    
    for(int i=0;i<n;i++){
        for(char j=i;j>=0;j--){
            cout<<char(ch+j)<<" ";
        }

        cout<<endl;
    }
    return 0;
}