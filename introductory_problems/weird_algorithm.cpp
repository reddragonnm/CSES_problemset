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

    cout << n << ' ';
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = (n * 3) + 1;
        cout << n << ' ';
    }
}
