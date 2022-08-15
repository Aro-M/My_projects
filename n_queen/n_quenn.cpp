#include <iostream>
void print(int** arr,int X)
{
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < X; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
bool Safe(int** arr, int row, int col, int X)
{
    int i, j;
    for (i = 0; i < col; ++i) {
        if (arr[row][i]) {
            return false;
        }
    }
    for (i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (arr[i][j]) {
            return false;
        }
    }
    for (i = row, j = col; j >= 0 && i < X; ++i, --j) {
        if (arr[i][j]) {
            return false;
        }
    }
    return true;
}
bool X_queen(int** arr, int col, int X)
{
    if (col >= X)
        return true;
    for (int i = 0; i < X; ++i) {
        if (Safe(arr, i, col, X)) {
            arr[i][col] = 1;
            if (X_queen(arr, col + 1, X)) {
                return true;
            }
            arr[i][col] = 0;
        }
    }
    return false;
}
bool Queen(int X)
{
    int** arr = new int*[X];
    for (int i = 0; i < X; ++i) {
        arr[i] = new int[X];
    }
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < X; ++j) {
            arr[i][j] = 0;
        }
    }
    X_queen(arr, 0, X);
    print(arr, X);
    return true;
}
int main()
{
    Queen(4);
    return 0;
}
