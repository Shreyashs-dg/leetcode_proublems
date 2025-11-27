#include<iostream>
#include<vector>
using namespace std;
//majority elements in a vector 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,ans=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(freq==0){
                ans=nums[i];
            }
            if (ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans ;
    }
};

int main()
{
    Solution s1;
    int ans ;
    vector<int>num={10,20,10,30};
    ans=s1.majorityElement(num);
    cout<<ans;
    return 0;
}