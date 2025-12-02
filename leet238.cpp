#include<iostream>
#include<vector>
using namespace std;
//product of array except self
class Solution{
    public:
    vector<int> productOfArray(vector<int>& nums){
        int n=nums.size();
        vector<int>answer(n,1);
        //prefix
        for(int i=1 ; i<n ;i++){
            answer[i]=answer[i-1]*nums[i-1];
        }
        //suffix
        int suffix=1;
        for(int i=n-1 ; i>=0 ;i--){
            answer[i]=answer[i]*suffix;
            suffix*=nums[i];
        }
        return answer;
    }

};

int main(){
    Solution s1;
    vector<int>nums={1,2,3,4};
    vector<int>ans = s1.productOfArray(nums);
    for(auto x:ans){
    cout<<x<<" ";
    }
    return 0;
}