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

void hanoi(int n, int source, int target, int aux)
{
    if (n == 1)
    {
        cout << source << ' ' << target << '\n';
        return;
    }

    hanoi(n - 1, source, aux, target);

    cout << source << ' ' << target << '\n';

    hanoi(n - 1, aux, target, source);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << pow(2, n) - 1 << '\n';
    hanoi(n, 1, 3, 2);
}
