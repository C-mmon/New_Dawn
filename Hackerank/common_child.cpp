
      vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));

  for (int i = 1; i < s1.size() + 1; i++) {
    for (int j = 1; j < s2.size() + 1; j++) {
      if (s1[i - 1] == s2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
      }
    }
  }
