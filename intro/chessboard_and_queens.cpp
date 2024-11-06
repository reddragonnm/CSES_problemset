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

int getWays(int queensRem, bool board[8][8])
{
    if (queensRem == 0)
        return 1;

    int ways = 0;
    int i = 8 - queensRem;
    for (int j = 0; j < 8; j++)
    {
        if (!board[i][j])
        {

            board[i][j] = true;

            bool tempBoard[8][8];
            memcpy(tempBoard, board, sizeof(tempBoard));

            pi dirns[] = {
                MP(1, 0), MP(-1, 0), MP(1, 1),
                MP(1, -1), MP(-1, 1), MP(-1, -1)};

            for (int mult = 1; mult < 8; mult++)
            {
                for (pi dirn : dirns)
                {
                    int x = i + mult * dirn.first;
                    int y = j + mult * dirn.second;

                    if (0 <= x && x < 8 && 0 <= y && y < 8)
                        tempBoard[x][y] = true;
                }
            }

            ways += getWays(queensRem - 1, tempBoard);

            board[i][j] = false;
        }
    }

    return ways;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool board[8][8]{};

    for (int i = 0; i < 8; i++)
    {
        string s;
        getline(cin, s);

        for (int j = 0; j < 8; j++)
        {
            if (s[j] == '*')
                board[i][j] = true;
        }
    }

    cout << getWays(8, board);
}
