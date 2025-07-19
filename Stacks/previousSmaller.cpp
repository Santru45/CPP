#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> prevSmallerElement(vector<int>& arr){
    vector<int> ans;
    stack<int> s;
    for(int i=0; i<arr.size(); i++){
        while(s.size()>0 && s.top()>=arr[i]){
            s.pop();
        }
        // There are only two cases possible i.e stack is empty or we found prevSmaller element on top of stack
        if(s.empty()){
            ans.push_back(-1);
            s.push(arr[i]);
        }
        else{
            ans.push_back(s.top());
            s.push(arr[i]);
        }
        
    }
    return ans;
}
int main(){
    vector<int> arr = {3, 1, 0, 8, 6};
    vector<int> ans = prevSmallerElement(arr);

    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}