#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int count = 0, sr = 0, sc = 0, er = nRows - 1, ec = nCols - 1, total = nRows * nCols;

    while (count < total)
    {
        // starting row
        for (int j = sc; j <= ec && count < total; j++)
        {
            cout << input[sr][j] << " ";
            count += 1;
        }
        sr += 1;
        // ending column
        for (int i = sr; i <= er && count < total; i++)
        {
            cout << input[i][ec] << " ";
            count += 1;
        }
        ec -= 1;
        // ending row
        for (int j = ec; j >= sc && count < total; j--)
        {
            cout << input[er][j] << " ";
            count += 1;
        }
        er -= 1;
        // starting column
        for (int i = er; i >= sr && count < total; i--)
        {
            cout << input[i][sc] << " ";
            count += 1;
        }
        sc += 1;
    }
}