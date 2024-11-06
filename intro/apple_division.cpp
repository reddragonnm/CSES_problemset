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

ll getBest(ll closeTo, int start, int n, ll weights[])
{
    if (closeTo == 0)
        return closeTo;

    ll best = closeTo;
    for (int i = start; i < n; i++)
        if (weights[i] <= closeTo)
            best = min(best, getBest(closeTo - weights[i], i + 1, n, weights));
    return best;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    ll weights[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
        sum += weights[i];
    }
    sort(weights, weights + n, greater<ll>());

    ll grp = (sum / 2) - getBest(sum / 2, 0, n, weights);
    cout << sum - 2 * grp;
}
