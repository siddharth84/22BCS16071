#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int leftPointer = 0, rightPointer = height.size() - 1;
        int leftMaxHeight = 0, rightMaxHeight = 0;
        int totalWater = 0;
        
        while (leftPointer <= rightPointer) {
            if (height[leftPointer] <= height[rightPointer]) {
                if (height[leftPointer] >= leftMaxHeight) {
                    leftMaxHeight = height[leftPointer];
                } else {
                    totalWater += leftMaxHeight - height[leftPointer];
                }
                leftPointer++;
            } else {
                if (height[rightPointer] >= rightMaxHeight) {
                    rightMaxHeight = height[rightPointer];
                } else {
                    totalWater += rightMaxHeight - height[rightPointer];
                }
                rightPointer--;
            }
        }
        
        return totalWater;
    }
};

int main() {
    Solution solution;
    
    vector<int> height1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << solution.trap(height1) << endl;
    
    vector<int> height2 = {4,2,0,3,2,5};
    cout << solution.trap(height2) << endl;
    
    vector<int> height3 = {};
    cout << solution.trap(height3) << endl;
    
    vector<int> height4 = {5};
    cout << solution.trap(height4) << endl;
    
    return 0;
}
