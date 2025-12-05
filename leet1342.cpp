#include<iostream>
//leet code 1342
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num > 0){
            if(num % 2 == 0) num /= 2;
            else num -= 1;
            steps++;
        }
        return steps;
    }
};

int main()
{
    Solution s1;
    int num=10;
    cout<<s1.numberOfSteps(num)<<endl;
    return 0;
}