#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[3000][3000];
int b[3000][3000];
vector<int> c[3000];
long ans = 0;
int main()
{
    int n, m;
    cin >> n >> m;


    for (int i = 0; i < m; i++)
    {
        int k1, k2;
        cin >> k1 >> k2;
        --k1;
        --k2;
        a[k1][k2] = 1;
        c[k1].push_back(k2);
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                for (int k = 0; k < c[j].size(); k++)
                    ++b[i][c[j][k]];
            }
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans += b[i][j] * (b[i][j] - 1) / 2;
            }
        }
    cout<<ans<<endl;
    return 0;
}