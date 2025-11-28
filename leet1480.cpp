#include<iostream>
#include<vector>
//claculation of running sum 
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        for(int i=1 ; i < nums.size() ; i++){
            nums[i] += nums[i-1];
        }
        return nums ;
    }
};
int main()
{
    Solution s1;
    vector<int>num={1,2,3,4,5,6};
    vector<int> ans = s1.runningSum(num);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}