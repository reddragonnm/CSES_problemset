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

    int n, m;
    cin >> n >> m;

    multiset<int> h;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        h.insert(x);
    }

    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        auto it = h.upper_bound(t);

        if (it == h.begin()) {
            cout << -1 << '\n';
        }
        else {
            it--;
            cout << *it << '\n';
            h.erase(it);
        }
    }
}
