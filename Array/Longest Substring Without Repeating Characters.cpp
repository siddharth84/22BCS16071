#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestUniqueSubstring(string str) {
        unordered_set<char> charSet;
        int start = 0, maxLen = 0;

        for (int end = 0; end < str.size(); end++) {
            while (charSet.count(str[end])) { 
                charSet.erase(str[start]);
                start++;
            }
            charSet.insert(str[end]);
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};

int main() {
    Solution obj;
    string input;
    cin >> input;
    cout << obj.longestUniqueSubstring(input) << endl;
    return 0;
}
