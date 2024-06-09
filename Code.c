int subarraysDivByK(int* n, int s, int k) {
    int pref = 0, ans = 0;
    int* map = calloc(k + 1, sizeof(int));
    map[0] = 1;
    for (int i = 0; i < s; i++) {
        pref = (pref + n[i] % k + k) % k;
        ans += map[pref];
        map[pref]++;
    }
    return ans;
}
