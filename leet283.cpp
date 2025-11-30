#include<iostream>
#include<vector>
using namespace std;
//moving zeros to last with pop and push back
class Solution{
    public:
    vector<int> moveZero(vector<int>& nums){
        int j=0;
        for(int i=0 ; i< nums.size();i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};
int main()
{
    Solution s1;
    vector<int>num={0,1,2,0,4};
    vector<int>ans=s1.moveZero(num);
    for(int x : num){
        cout<<x<<" ";
    }
    return 0;
}