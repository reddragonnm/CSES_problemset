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

    map<char, int> charmap;
    for (char i = 'A'; i <= 'Z'; i++)
        charmap[i] = 0;

    for (char &c : s)
        charmap[c]++;

    char singleChar = ' ';
    string ans = "";
    for (auto [key, value] : charmap)
    {
        if (value % 2 == 0)
            ans += string(value / 2, key);
        else
        {
            if (singleChar == ' ')
            {
                singleChar = key;
                ans += string((value - 1) / 2, key);
            }
            else
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    string reverseAns = ans;
    reverse(reverseAns.begin(), reverseAns.end());

    if (singleChar == ' ')
        cout << ans + reverseAns;
    else
        cout << ans + singleChar + reverseAns;
}
