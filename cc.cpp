
        void func5(string s, int base ) {
    int n = s.length();
    suf5.assign(n + 1, 0); // suf[n] = 0
    b5.assign(n + 1, 0);
    b5[0] = 1;
    b5[1] = base;
  
    for (int i = n - 1; i >= 0; --i) {
        suf5[i] = (s[i] + suf5[i + 1] * b5[1]) % POD;
    }
    for (int i = 2; i <= n; ++i) {
        b5[i] = b5[i - 1] * b5[1] % POD;
    }
}
