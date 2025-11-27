#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size() - 1;
        vector<int>ans;
        while(i<j){
            int pairSum=numbers[i] + numbers[j];
            if (pairSum < target){
                i++;
            } 
            else if (pairSum > target ){
                j--;
            }
            else {
                return {i+1,j+1};
            }
        }
        return {};
    }
    
};
int main()
{
    Solution s1;
    vector<int>num={1,2,1,45,4};
    int target=49;
    vector<int>ans;
    ans=s1.twoSum(num,target);
    for(auto val : ans ){
        cout <<val<<" ";
    }
    return 0;
}