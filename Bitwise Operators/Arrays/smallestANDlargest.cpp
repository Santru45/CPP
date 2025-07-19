#include<iostream>
using namespace std;

int main(){
    int nums[] = {78,23,58,33,-16,94,-37};
    int size = sizeof(nums)/sizeof(int);

    int smallest = INT32_MAX;
    int largest = INT32_MIN;

    for(int i=0;i<size;i++){
        smallest = min(nums[i] ,smallest);
        largest = max(nums[i] , largest);
    }

    cout<<"largest = "<<largest<<endl;
    cout<<"smallest = "<<smallest<<endl;
    return 0;
}