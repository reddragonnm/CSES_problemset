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

    if (n == 1)
        cout << 1;
    else if (n == 4)
        cout << "3 1 4 2";
    else if (n < 5)
        cout << "NO SOLUTION";
    else
    {
        int arr[n];
        int j = 1;
        for (int i = 0; i < n; i += 2)
        {
            arr[i] = j;
            j++;
        }
        for (int i = 1; i < n; i += 2)
        {
            arr[i] = j;
            j++;
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << ' ';
    }
}
