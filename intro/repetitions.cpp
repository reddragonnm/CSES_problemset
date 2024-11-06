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

    string s;
    getline(cin, s);

    int m = 0;
    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        c++;
        if (i == s.size() or s[i] != s[i + 1])
        {
            m = max(m, c);
            c = 0;
        }
    }
    cout << m;
}
