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

    int q;
    cin >> q;

    while (q--)
    {
        ll k;
        cin >> k;

        ll n = 1;
        ll base = 1;
        while (true)
        {
            if ((k - 9 * n * base) <= 0)
                break;
            k -= 9 * n * base;
            base *= 10;
            n++;
        }

        ll num = base + ((k - 1) / n);
        ll digit = (k - 1) % n;

        cout << to_string(num)[digit] << '\n';
    }
}
