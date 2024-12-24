#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void solution1() {
    // frequency map works with map and not with unordered_map due to hash collisions as well as resizing overhead
    // map on the other hand uses red-black tree structure

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int best = 0;

    map<int, int> m;

    int i = 0;
    for (int j = 0; j < n; j++) {
        m[arr[j]]++;


        while (i <= j && m[arr[j]] > 1) {
            m[arr[i]]--;
            i++;
        }

        best = max(best, j - i + 1);
    }

    cout << best;

}

void solution2() {
    // similarly set works but unordered_set doesn't working without reserving first

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0;
    int j = 0;

    int best = 0;

    set<int> s;
    // s.reserve(n);

    while (j < n) {
        if (s.find(arr[j]) == s.end()) {
            s.insert(arr[j]);
            j++;

            best = max(best, j - i);
        }
        else {
            s.erase(arr[i]);
            i++;
        }
    }

    cout << best;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    solution1();
}
