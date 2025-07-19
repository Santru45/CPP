#include<bits/stdc++.h>
using namespace std;

int main(){
     map<string, vector<int>> details;
    details["Santru"] = {91,93,90};
    details["Stephen"] = {88,85,90};

    map<string,vector<int>> clgInfo = {
        {"Alice", {79,71,81}},
        {"Bob", {83,85,87}}
    };

    for(auto it = details.begin(); it != details.end(); ++it){
        cout<<"Student: "<<it->first<<" | Marks: ";
        for(auto mark : it->second){
            cout<< mark<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(const auto &entry : clgInfo){
        cout<<"Student: "<<entry.first<<" | Marks:";
        for(auto mark : entry.second){
            cout<<mark<<" ";
        }
        cout<<endl;
    }
    return 0;
}