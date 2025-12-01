#include<iostream>
using namespace std;
//pow(x,n)
class Solution {
public:
    double myPow(double x, int n) {
        long long pow=n;
        double ans=1;
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
    int n=-500;
    cout<<s1.myPow(x,n);
    return 0;
}