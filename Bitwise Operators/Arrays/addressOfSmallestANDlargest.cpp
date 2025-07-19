#include<iostream>
using namespace std;

int main(){
    int smallest_index, largest_index;
    
    int nums[] = {78,23,58,33,-16,94,-37};
    int size = sizeof(nums)/sizeof(int);

    int smallest = INT32_MAX;
    int largest = INT32_MIN;

    for(int i=0;i<size;i++){
        smallest = min(nums[i] , smallest);
        if(smallest == nums[i]){
            smallest_index = i;
        } 
    }

    for(int i=0;i<size;i++){
        largest = max(nums[i] , largest);
        if(largest == nums[i]){
            largest_index = i;
        } 
    }

    cout<<"smallest number index is : "<<smallest_index<<endl;
    cout<<"largest number index is : "<<largest_index<<endl;

    return 0;
}