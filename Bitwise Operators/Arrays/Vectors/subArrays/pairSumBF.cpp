#include<iostream>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int n = nums.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 18;

    vector<int> ans = pairSum(nums,target);

    cout<<"The index of pairSum numbers are :"<<ans[0]<<" "<<ans[1];
    return 0;
}



