#include<iostream>
using namespace std;
//pow(x,n) cover edge cases 
class Solution {
public:
    double myPow(double x, int n) {
        long long pow=n;
        double ans=1;
        if(x==0) return 0;
        if(x==1) return 1;
        if(n==0) return 1;
        if(pow < 0){
            x=1.0/x;
            pow=-(pow);
        }
        while(pow>0){
            if(pow % 2 == 1){
                ans *= x;
            }
            x*=x;
            pow/=2;
        }
        return ans;
        
        
    }
};
int main()
{
    Solution s1;
    double x=2;
    int n=50;
    cout<<s1.myPow(x,n);
    return 0;
}