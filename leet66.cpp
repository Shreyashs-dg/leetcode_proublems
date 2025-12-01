#include<iostream>
#include<vector>
using namespace std;
//one plus
class Solution{
    public:
    vector<int> onePlus(vector<int>& digit){
        int n=digit.size();
        for(int i=n-1 ; i >= 0 ; i-- ){
            if(digit[i]<9){
                digit[i]++;
                return digit;
            }
            digit[i]=0;
        }
        digit.insert(digit.begin(),1);
        return digit;
    }
};
int main()
{
    Solution s1;
    vector<int>num={9,9};
    vector<int>ans=s1.onePlus(num);
    for(auto x:ans){
        cout<<x <<" ";
    }
    return 0;
}