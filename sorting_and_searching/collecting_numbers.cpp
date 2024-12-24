#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
    // add kind of bookkeeping array

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        arr[x - 1] = i;
    }

    int sum = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) sum++;
    }

    cout << sum;
}
