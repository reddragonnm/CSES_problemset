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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<pi> c;

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        c.PB(MP(a, 1));
        c.PB(MP(b, -1));
    }

    sort(c.begin(), c.end());

    int curr = 0;
    int best = 0;
    for (auto p : c) {
        curr += p.second;
        best = max(curr, best);
    }
    cout << best;
}
