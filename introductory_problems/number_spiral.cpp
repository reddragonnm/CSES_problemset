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
        ll y, x;
        cin >> y >> x;

        if (x >= y)
        {
            if (x % 2 == 0)
                cout << (x - 1) * (x - 1) + y;
            else
                cout << x * x - y + 1;
        }
        else
        {
            if (y % 2 == 0)
                cout << y * y - x + 1;
            else
                cout << (y - 1) * (y - 1) + x;
        }

        cout << '\n';
    }
}
