#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int idx = 0;
        for (int k = 0; k < arr.size(); k++) {
            if (arr[k] != 0) {
                swap(arr[k], arr[idx]);
                idx++;
            }
        }
    }
};

int main() {
    vector<int> data = {0, 1, 0, 3, 12};
    Solution obj;
    obj.moveZeroes(data);

    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
