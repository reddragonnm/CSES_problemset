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

    int n, x;
    cin >> n >> x;

    set<pi> a;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        a.insert(MP(p, i));
    }

    bool done = false;
    pi p;

    for (auto num : a) {
        auto it = a.lower_bound(MP(x - num.first, 0));

        if ((*it) == num || it == a.end() || (*it).first + num.first != x) continue;

        done = true;
        p = MP(num.second + 1, (*it).second + 1);
        break;
    }

    if (done)
        cout << p.first << ' ' << p.second << '\n';
    else
        cout << "IMPOSSIBLE";
}
