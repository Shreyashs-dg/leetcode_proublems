#include<iostream>
#include<vector>
using namespace std;
//724. Find Pivot Index
class Solutions{
    public:
    int pivotIndex(vector<int>& nums){
        int totalSum=0;
        for(auto x : nums){
            totalSum += x;
        }
        int leftSum=0;
        for(int i=0 ; i< nums.size() ; i++){
            int rightSum = totalSum - leftSum - nums[i];
            if(leftSum == rightSum){
                return i ;
            }
            leftSum += nums[i] ;
        }
        return -1 ;
    }
};
int main()
{
    Solutions s1;
    vector<int>num={1,7,3,6,5,6};
    int ans = s1.pivotIndex(num);
    cout<< "pivotIndex = "<<ans<<endl;
    return 0;
}