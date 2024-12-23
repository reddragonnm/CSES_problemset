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

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll curr = 0;
    ll best = arr[0];
    for (int i = 0; i < n; i++)
    {
        curr = max(arr[i], curr + arr[i]);
        best = max(best, curr);
    }
    cout << best;
}
