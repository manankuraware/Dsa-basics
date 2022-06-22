// Backtracking is an algorithmic technique for solving recursive problems by trying to build every
// possible solution incrementally and removing those solutions that fail to satisfy the constraints of the problem at any point of time.

// rat in a maze problem

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int** arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratMaze(int** arr, int x, int y, int n, int** solArr)
{
    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; //backtracking
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **Solarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        Solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            Solarr[i][j] = 0;
        }
    }
    if (ratMaze(arr, 0, 0, n, Solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << Solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1