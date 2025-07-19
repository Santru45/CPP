#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec= {3,1,6,4,9,4,8,0,2};
    sort(vec.begin(),vec.end());
    auto idx = lower_bound(vec.begin(),vec.end(),6);
    cout<<*idx<<endl;
    

   
    return 0;
}