#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> findTriplets(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int len = arr.size();

        for (int i = 0; i < len - 2; i++) {
            if (i > 0 && arr[i] == arr[i - 1]) continue;

            int j = i + 1, k = len - 1;
            while (j < k) {
                int total = arr[i] + arr[j] + arr[k];
                if (total == 0) {
                    res.push_back({arr[i], arr[j], arr[k]});
                    while (j < k && arr[j] == arr[j + 1]) j++;
                    while (j < k && arr[k] == arr[k - 1]) k--;
                    j++;
                    k--;
                } else if (total < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> input = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> output = sol.findTriplets(input);

    for (const auto& triplet : output) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
