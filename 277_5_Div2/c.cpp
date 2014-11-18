#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;

    string s1, s2;

    if (s == 0  && m > 1)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    if (m * 9 < s)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    for (int i = 0; i < m; i++)
    {
        int t = min(9, s);
        s -= t;
        s1 += char(t + '0');
    }

    s2 = s1;
    reverse(s2.begin(), s2.end());

    if (s2[0] == '0')
    {
        for (int i = 0; i < m; i++)
        {
            if (s2[i] > '0')
            {
                s2[0]++;
                s2[i]--;
                break;
            }
        }
    }

    cout << s2 << " " << s1 << endl;
    return 0;
}