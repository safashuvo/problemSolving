#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            m++;
        }
    }
    cout << m;
    return 0;
}