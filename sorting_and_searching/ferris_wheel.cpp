#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
    // two pointer method for 2SUM (pg 78)
    // for 3SUM iterate through using one element and reduce the problem to 2SUM

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    ll x;
    cin >> n >> x;

    ll p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p, p + n);

    int ans = 0;
    int j = n - 1;

    for (int i = 0; i < n; i++) {
        while (i < j && (p[i] + p[j]) > x) j--;

        if (i >= j) break;

        ans++;
        j--;
    }

    cout << n - ans;

}
