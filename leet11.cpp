#include<iostream>
#include<vector>
using namespace std;
//container with most water
class Solution{
    public:
    int maxArea(vector<int>& height){
        int n=height.size();
        int maX=0;
        for(int i=0 ; i<n ;i++){
            for(int j=i+1 ; j<n ; j++){
                int w = j - i;
                int h = min( height[i] , height[j]);
                int currentArea = w * h;
                maX = max(currentArea , maX);
            }
        }
        return maX;
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