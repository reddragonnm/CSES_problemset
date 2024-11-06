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

    if (n % 4 == 0)
    {
        cout << "YES\n";

        cout << n / 2 << '\n';
        for (int i = 1; i <= n; i += 4)
            cout << i << ' ' << i + 3 << ' ';

        cout << '\n';

        cout << n / 2 << '\n';
        for (int i = 1; i <= n; i += 4)
            cout << i + 1 << ' ' << i + 2 << ' ';
    }
    else if (n % 4 == 3)
    {
        cout << "YES\n";

        cout << (n - 3) / 2 + 2 << '\n';
        cout << "1 2 ";
        for (int i = 4; i <= n; i += 4)
            cout << i << ' ' << i + 3 << ' ';

        cout << '\n';

        cout << (n - 3) / 2 + 1 << '\n';
        cout << "3 ";
        for (int i = 4; i <= n; i += 4)
            cout << i + 1 << ' ' << i + 2 << ' ';
    }
    else
        cout << "NO";
}
