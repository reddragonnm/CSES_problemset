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

    ll n;
    cin >> n;

    ll s = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        s -= x;
    }
    cout << s;
}
