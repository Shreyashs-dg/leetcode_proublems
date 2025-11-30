#include<iostream>
#include<vector>
using namespace std;
//single number finding 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        for(int x:nums){
            ones=(ones ^ x) & ~(twos);
            twos=(twos ^ x) & ~(ones);
        }
        return ones;    
    }
};
int main()
{
    Solution s1;
    vector<int>num={1,1,1,2,2,2,6};
    cout<<s1.singleNumber(num);
    return 0;
}