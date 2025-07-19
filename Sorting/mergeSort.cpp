#include<iostream>
#include<vector>
using namespace std;

//merge function merges two sorted subbarrays into a single sorted array i.e temp array
void merge(vector<int>& arr, int low, int mid, int high){
    int left = low; 
    int right  = mid+1;
    vector<int> temp;

    //Merge the two subarrays into temp array   
    while(left <= mid && right<= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //If there are any elements left in the left subarray, add them to temp array
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    //If there are any elements left in the right subarray, add them to temp array      
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    //Copy the sorted elements back tho the sorted array
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high){
    if(low >= high){    // Base case: if the array has one or no elements, it's already sorted
        return;
    }
    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);   // Sort the left half
    mergeSort(arr, mid+1, high);    // Sort the right half
    merge(arr, low, mid, high); // Merge the two sorted halves//
}
int main(){
    vector<int> vec = {3,2,6,4,8,5,1,7,9};
    mergeSort(vec, 0 , vec.size());
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    return 0;
}