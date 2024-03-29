class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        while (n > 1) {
        if (n % 2 != 0) {
            ans += n / 2;
            n = n / 2 + 1;
        } else {
            ans += n / 2;
            n /= 2;
        }
        }
        return ans;
    }
};

// time complexity: O(log N)
// space complexity: O(1)