#include<iostream>
#include<vector>
#include<climits>
//maximum sub array
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0;
        int maxSum=INT_MIN;
        for(auto val : nums){
            currentSum+=val;
            maxSum=max(maxSum,currentSum);
            if(currentSum<0){
                currentSum=0;
            }
        }
        return  maxSum;
        
    }
};
int main()
{
    cout<<"Max subarray sum "<<endl;
    Solution s1;
    vector<int> nums ={1,-4,7,5,-8};
    int ans=s1.maxSubArray(nums);
    cout<<"Maximum sub array sum = "<<ans<<endl;
    return 0;
}