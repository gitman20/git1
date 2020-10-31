
        void func5(string s, int base ) {
    int a = s.length();
    suf5.assign(a + 1, 0); // suf[a] = 0
    b5.assign(a + 1, 0);
    b5[0] = 1;
    b5[1] = base;
  
    for (int i = a - 1; i >= 0; --i) {
        suf5[i] = (s[i] + suf5[i + 1] * b5[1]) % POD;
    }
    for (int i = 2; i <= a; ++i) {
        b5[i] = b5[i - 1] * b5[1] % POD;
    }
}
