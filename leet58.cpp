#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length = 0;

        // Skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') i--;

        // Count last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};
int main(){
    Solution s1;
    string s="Shreyas HS ";
    cout<<s1.lengthOfLastWord(s)<<endl;
}
