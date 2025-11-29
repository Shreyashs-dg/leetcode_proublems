// Time Complexity Examples in C++
// Author: Shreyas HS
// Date: Today

#include <iostream>
#include <vector>
using namespace std;

// O(log n) - Binary Search
int binarySearch(vector<int> &arr, int target) {
    int left = 0, right = arr.size() - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

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
    vector<int>num={1,2,3,4,5,6};
    int target=4;
    binarySearch(num,target);
    constantTime();      

    vector<int> arr = {1, 2, 3, 4, 5};
    linearTime(arr);     

    quadraticTime(3);    

    return 0;
}
