#include<iostream>
#include<vector>
using namespace std;
//container with most water
class Solution{
    public:
    int maxArea(vector<int>& height){
        int n=height.size();
        //brute force  aproach 
        // int maX=0;
        // for(int i=0 ; i<n ;i++){
        //     for(int j=i+1 ; j<n ; j++){
        //         int w = j - i;
        //         int h = min( height[i] , height[j]);
        //         int currentArea = w * h;
        //         maX = max(currentArea , maX);
        //     }
        // }
        // return maX;


        //optimised version 
        int maxWater=0;
        int lp=0,rp=n-1;
        while(lp < rp){
            int w = rp - lp;
            int h = min(height[lp],height[rp]);
            int currentWater = w * h;
            maxWater=max(currentWater,maxWater);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }

        }
        return maxWater;
    }

};

int main()
{
    Solution s1;
    vector<int>height = {1,8,2,3,4,5,4,4,7};
    int ans=s1.maxArea(height);
    cout<<ans;
    return 0;
}