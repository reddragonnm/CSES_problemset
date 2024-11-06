#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    sort(s.begin(), s.end());

    vector<string> ans{s};
    while (next_permutation(s.begin(), s.end()))
        ans.push_back(s);

    std::cout << ans.size() << '\n';
    for (string a : ans)
    {
        cout << a << '\n';
    }
}
