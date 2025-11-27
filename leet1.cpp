#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;   // value → index

        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if(mp.count(need)){
                return {mp[need],i};
            }
            mp[nums[i]]=i;
        }

        return {};
    }
    
};

int main()
{
    Solution s1;
    vector<int>num={12,45,74,70};
    int target=82;
    vector<int>ans=s1.twoSum(num,target);
    for(int index : ans) {
    cout << index << " ";
}
    return 0;
}