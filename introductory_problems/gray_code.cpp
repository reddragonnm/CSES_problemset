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

vector<string> getVariations(string s, int depth, int sum)
{
    vector<string> ans{};
    if (depth == 0)
        return vector<string>{s};

    if (sum % 2 == 0)
    {
        vector<string> a1 = getVariations(s + "1", depth - 1, sum + 1);
        ans.insert(ans.end(), a1.begin(), a1.end());

        vector<string> a2 = getVariations(s + "0", depth - 1, sum);
        ans.insert(ans.end(), a2.begin(), a2.end());
    }
    else
    {

        vector<string> a2 = getVariations(s + "0", depth - 1, sum);
        ans.insert(ans.end(), a2.begin(), a2.end());

        vector<string> a1 = getVariations(s + "1", depth - 1, sum + 1);
        ans.insert(ans.end(), a1.begin(), a1.end());
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (string s : getVariations("", n, 0))
    {
        cout << s << '\n';
    }
}
