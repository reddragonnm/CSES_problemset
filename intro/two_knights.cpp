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

    ll num;
    cin >> num;

    for (ll n = 1; n <= num; n++)
    {
        if (n == 1)
            cout << 0 << '\n';
        else if (n == 2)
            cout << 6 << '\n';
        else if (n == 3)
            cout << 28 << '\n';
        else
        {
            ll ans = n * n * n * n - n * n - (n - 4) * (n - 4) * 8 - 4 * 6 * (n - 4) - 4 * 4 - 4 * 2 - 4 * 4 * (n - 4);
            cout << ans / 2 - 12 << '\n';
        }
    }
}
