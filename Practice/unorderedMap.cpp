#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> vec;
    unordered_map<int,int> m;
    vec = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<vec.size(); i++){
        m[vec[i]] = i;
    }

    cout<<m.size()<<endl;
    return 0;
}