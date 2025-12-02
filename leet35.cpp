#include<iostream>
using namespace std;
#include<vector>
//leet question no 354 : search insert position 
class Solution{
    public:
    int searchInsertElement(vector<int>& nums,int target){
        int n=nums.size();
        int low =0;
        int high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
int main()
{
    Solution s1;
    vector<int>nums={1,2,3,4,5};
    int target=7;
    int ans = s1.searchInsertElement(nums,target);
    cout<<ans;

    return 0;
}