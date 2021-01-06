#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int& x : a) {
            cin >> x;
        }

        vector<int> s(n);
        for(int i = n - 1; i >= 0; i--) {
            s[i] = a[i];
            int j = i + a[i];
            if(j < n) {
                s[i] += s[j];
            }
        }
        cout << *max_element(s.begin(), s.end()) << endl;
    }
}