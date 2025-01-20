class Solution {
public:
    
    
    int minimumNumbers(int num, int k) {
   if (num == 0) return 0;
    vector<int> dp(num + 1, num + 1);
    dp[0] = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 10 == k) dp[i] = 1;
        for (int j = 1; j <= i; j++) {
            if (j % 10 == k) dp[i] = min(dp[i], dp[i - j] + 1);
        }
    }
    return dp[num] == num + 1 ? -1 : dp[num];
}

};