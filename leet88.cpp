#include<iostream>
#include<vector>
//merge sorted array
using namespace std;
class solution{
    public:
    void merge(vector<int>& num1,int m,vector<int> & num2 ,int n){
        int i = m - 1;
        int j = n - 1;
        int k= m + n - 1;
        while(j >= 0){
            if(i>=0 && num1[i] > num2[j]){
                num1[k] = num1[i];
                i--;
            }
            else{
                num1[k] = num2[j];
                j--;
            }
            k--;
        }
        for(auto x : num1){
            cout<<x <<" ";
        }
        
    }
};
int main()
{
    vector<int>num1={1,2,4,0,0,0};
    vector<int>num2={3,5,6};
    int m=3;
    int n=3;
    solution s1;
    s1.merge(num1,m,num2,n);

    return 0;
}