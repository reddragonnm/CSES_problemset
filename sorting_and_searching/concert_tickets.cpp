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
    // multiple erases are being done, therefore multiset is better than vector as it uses red-black tree structure
    // creating a used array is possible but complicates things unnecessarily
    // understanding lower_bound and upper_bound is important (pg 33)

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
