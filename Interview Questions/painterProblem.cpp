#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m,int maxAllowedTime){
    int painters  = 1;
    int time =0;
    for(int i =0; i<n;i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }
        else{
            painters++;
            time = arr[i];
        }
    }
    return painters <= m ? true : false;
}

int allocatePainters(vector<int> arr, int n, int m){
    int ans =0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    int st =0; 
    int end = sum;
    while(st<=end){
        int mid = st + (end - st)/2;

        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid -1;

        }
        else{
            st = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {40,30,10,20};
    int n = arr.size();
    int m  = 2;
    int result = allocatePainters(arr,n,m);
    cout<<"Time :"<<result<<endl;
    return 0;
}