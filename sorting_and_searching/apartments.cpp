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

    int n, m, k;
    cin >> n >> m >> k;

    ll desired[n];
    ll available[m];

    for (int i = 0; i < n; i++)
        cin >> desired[i];

    for (int i = 0; i < m; i++)
        cin >> available[i];

    sort(desired, desired + n);
    sort(available, available + m);

    int ans = 0;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        while (i < m && (available[i] - desired[j]) <= k)
        {
            if (abs(available[i] - desired[j]) <= k)
            {
                ans++;
                i++;
                break;
            }
            i++;
        }
    }

    cout << ans;
}
