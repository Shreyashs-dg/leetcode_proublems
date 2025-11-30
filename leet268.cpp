#include<iostream>
#include<vector>
using namespace std;
class Solutions{
    public:
    int missingNo(vector<int>& nums){
        int totalSum=0;
        int actualSum=0;
        int n=nums.size();
        int missno;
        totalSum=(n*(n+1)/2);
        for(int i=0 ;i < n ;i++){
            actualSum+=nums[i];
        }
        missno = totalSum - actualSum;
        return missno;
    }
};
int main()
{
    Solutions s1;
    vector<int>num={0,1,2,4,5};
    cout<<s1.missingNo(num);
    return 0;
}