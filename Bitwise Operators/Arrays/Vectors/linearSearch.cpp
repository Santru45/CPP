#include<iostream>
#include<vector>
using namespace std;

void linearSearch(vector<int> vec, int n){
    for(int i:vec){
        if(i==n){
            cout<<"Element found"<<endl;
        }
    }
    cout<<"Element not found"<<endl;
}
int main(){
    int n;
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    cout<<"Enter the element to be searched ";
    cin>>n;
    linearSearch(vec,n);
    return 0;
}