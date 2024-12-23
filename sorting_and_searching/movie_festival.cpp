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

        c.PB(MP(a, b));
    }

    sort(c.begin(), c.end(), [](auto a, auto b) {return a.second < b.second;});

    int time = 1;
    int ans = 0;
    for (auto i : c) {
        if (time <= i.first) {
            ans++;
            time = i.second;
        }
    }

    cout << ans;
}
