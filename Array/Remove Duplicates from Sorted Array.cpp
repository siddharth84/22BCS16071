#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    Solution sol;
    int newSize = sol.removeDuplicates(nums);
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
