#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    cout<<"The elements in vector are: ";

    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"front element = "<<vec.front()<<endl;
    cout<<"back element = "<<vec.back()<<endl;       
    cout<<"size = "<<vec.size()<<endl;    
    cout<<"capacity before = "<<vec.capacity()<<endl;    
    vec.push_back(6);
    cout<<"size after pushing an element = "<<vec.size()<<endl;
    cout<<"capacity after pushing element "<<vec.capacity()<<endl;
    vec.pop_back();
    cout<<"size after popping = "<<vec.size()<<endl;
    cout<<"capacity after pushing element = "<<vec.capacity()<<endl;
    return 0;
}