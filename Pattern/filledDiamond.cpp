#include <bits/stdc++.h>
using namespace std;

/*
    Filled Diamond
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    int size = 2 * n - 1;

    int row_cnt = 0;
    for (int row = 0; row < size; ++row)
    {
        for (int col = 0; col < size; ++col)
        {
            if (col >= n - row_cnt - 1 && col <= n + row_cnt - 1)
            {
                if (n % 2 == 0)
                {
                    if ((row % 2 == 1 && col % 2 == 0) || (row % 2 == 0 && col % 2 == 1))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if ((row % 2 == 0 && col % 2 == 0) || (row % 2 == 1 && col % 2 == 1))
                    cout << "*";
                else
                    cout << " ";
            }
            else
                cout << " ";
        }
        cout << endl;
        row < n - 1 ? ++row_cnt : --row_cnt;
    }

    return 0;
}