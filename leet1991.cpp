#include<iostream>
#include<vector>
using namespace std;
//returning middle index where left index =right index   
class Solutions{
    public:
    int middleIndex(vector<int>& num){
        int totalSum=0;
        for(auto x : num){
            totalSum+=x;
        }
        int leftSum=0;
        for(int i=0 ; i<num.size() ; i++){
            int rightSum = totalSum - leftSum - num[i];
            if (leftSum == rightSum){
                return i;
            }
            leftSum+=num[i];
        }
        return -1;
    }


};
int main()
{
    vector<int>num={2,3,-1,8,4};
    Solutions s1;
    int ans=s1.middleIndex(num);
    cout<<ans<<endl;
    return 0;
}