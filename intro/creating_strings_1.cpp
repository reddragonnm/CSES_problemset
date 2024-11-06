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

vector<string> getVar(string ref, string s)
{
    if (ref.size() == 0)
        return vector<string>{s};

    vector<string> ans{};

    for (int i = 0; i < ref.size(); i++)
    {
        vector<string> a = getVar(ref.substr(0, i) + ref.substr(i + 1), s + ref[i]);
        ans.insert(ans.end(), a.begin(), a.end());
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    sort(s.begin(), s.end());

    vector<string> ans = getVar(s, "");
    auto setStr = set<string>(ans.begin(), ans.end());

    cout << setStr.size() << '\n';
    for (string s : setStr)
    {
        cout << s << '\n';
    }
}
