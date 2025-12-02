#include<iostream>
#include<vector>
using namespace std;
//product of array except self
class Solution{
    public:
    vector<int> productOfArray(vector<int>& nums){
        int n=nums.size();
        vector<int>answer(n,1);
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        //prefix
        for(int i=1 ; i<n ;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        //suffix
        for(int i=n-2 ; i>=0 ;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        //prefix
        for(int i=0 ; i<n ;i++){
            answer[i]=prefix[i]*suffix[i];
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