#include <bits/stdc++.h>
using namespace std;

/*
    Increasing Number Star Flag
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
        int num = row_cnt;
        for (int col = 0; col < 2 * row_cnt + 1; ++col)
        {
            if (col % 2 == 0)
            {
                cout << ++num;
            }
            else
                cout << "*";
        }
        cout << endl;
        row < n - 1 ? ++row_cnt : --row_cnt;
    }

    return 0;
}