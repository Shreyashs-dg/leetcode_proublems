// Time Complexity Examples in C++
// Author: Shreyas HS
// Date: Today

#include <iostream>
#include <vector>
using namespace std;

// O(1) example
void constantTime() {
    int x = 10;
    int y = 20;
    cout << "O(1) Example Output: " << (x + y) << endl;
}

// O(n) examples
void linearTime(vector<int> &arr) {
    cout << "O(n) Example Output: ";
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

// O(n^2) example
void quadraticTime(int n) {
    cout << "O(n^2) Example Output:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
}

int main() {
    constantTime();      

    vector<int> arr = {1, 2, 3, 4, 5};
    linearTime(arr);     

    quadraticTime(3);    

    return 0;
}
