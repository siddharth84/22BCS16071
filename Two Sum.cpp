#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findPair(vector<int>& values, int goal) {
        for (int a = 0; a < values.size(); a++) {
            for (int b = a + 1; b < values.size(); b++) {
                int result = values[a] + values[b];
                if (result == goal) {
                    return {a, b};
                }
            }
        }
        return {};
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int targetValue = 9;

    Solution solution;
    vector<int> indices = solution.findPair(numbers, targetValue);

    if (!indices.empty()) {
        cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
