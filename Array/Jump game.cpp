#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxR=0;
        for(int i=0; i<nums.size(); i++){
            if(i>maxR){
                return false;
            }
            maxR=max(maxR, i+nums[i]);
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 1, 1, 4}; // Example test case
    if (sol.canJump(nums)) {
        cout << "Can reach the last index." << endl;
    } else {
        cout << "Cannot reach the last index." << endl;
    }
    
    return 0;
}