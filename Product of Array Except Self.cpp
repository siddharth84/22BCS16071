#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> r(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            r[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            r[i] *= suffix;
            suffix *= nums[i];
        }

        return r;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution obj;
    vector<int> result = obj.productExceptSelf(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
