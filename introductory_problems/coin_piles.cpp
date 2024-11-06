#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        int x = n % 3;
        int y = m % 3;

        if (2 * n >= m and 2 * m >= n and (2 * x - y) % 3 == 0 and (2 * y - x) % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
