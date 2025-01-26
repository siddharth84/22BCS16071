#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string text, string pattern) {
        int len1 = text.size(), len2 = pattern.size();
        
        for (int j = 0; j <= len1 - len2; j++) {
            if (text.substr(j, len2) == pattern) {
                return j;
            }
        }
        
        return -1;
    }
};

int main() {
    string text, pattern;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter pattern: ";
    cin >> pattern;

    Solution obj;
    int result = obj.strStr(text, pattern);

    if (result != -1) {
        cout << "Pattern found at index: " << result << endl;
    } else {
        cout << "Pattern not found" << endl;
    }

    return 0;
}
