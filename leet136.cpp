#include<iostream>
#include<vector>
using namespace std;
//single element in a vector 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans^=val;
        }
        return ans;
    }
};
int main(){
    cout<<"single number in a vector "<<endl;
    Solution s1;
    vector<int>nums={10,20,30,20,30};
    cout<<s1.singleNumber(nums)<<endl;
    
    return 0;
    }