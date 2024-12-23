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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // knapsack like solution isn't efficient for n > 20 (pg 72)
    // bitwise operations for creating subsets leads to overflowing and it is computationally ineffective (pg 48)

    // greedy solution is used here
    // sums need to be incremental
    // if i counter a new element that is greater than currSum
    // i can't have any values between currSum and elem
    // this is is possible as sums are incremental

    int n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    ll currSum = 1;

    for (int i : arr) {
        if (i > currSum) break;
        currSum += i;
    }

    cout << currSum;

}
