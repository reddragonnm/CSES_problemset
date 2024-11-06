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

    int n;
    cin >> n;

    ll ans = 1;
    ll m = 1e9 + 7;
    while (n != 0)
    {
        ans = (ans * 2) % m;
        n--;
    }
    cout << ans;
}
