#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i= 0 ; i < nums.size() ;i++){
            freq[nums[i]]++;
        }
        for(int i=0 ; i<nums.size(); i++){
            if(freq[i]>1){
                return true;
            }
        }
        return false;
        
    }
};


int main()
{
    Solution s1;
    vector<int>num={1,2,3,1};
    bool ans=s1.containsDuplicate(num);
    cout<<ans<<endl;
    return 0;
}