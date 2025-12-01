#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//stock buy or sell 
class Solution{
    public:
    int maxPrice(vector<int>& nums){
        int maxProfit=0;
        int minProfit=INT_MAX;
        for(auto x : nums){
            minProfit=min(minProfit,x);
            maxProfit=max(maxProfit,x-minProfit);
        }
        return maxProfit;
    }
};
int main()
{
    Solution s1;
    vector<int>nums={1,2,10,3,7};
    int ans=s1.maxPrice(nums);
    cout<<ans;
    return 0;
}