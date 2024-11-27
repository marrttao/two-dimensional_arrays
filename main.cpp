#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int array[rows][cols] = {
        {5, 8, 2},
        {6, 1, 9},
        {3, 7, 4}
    };
    int sum_row, sum_col[cols] = { 0 };
    int total_sum = 0;

    for (int i = 0; i < rows; i++) {
        sum_row = 0;
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
            sum_row += array[i][j];
            sum_col[j] += array[i][j];
        }
        total_sum += sum_row;
        cout << " | " << sum_row << endl;
    }

    for (int i = 0; i < cols; i++) {
        cout << "----";
    }
    cout << "----" << endl;

    for (int j = 0; j < cols; j++) {
        cout << sum_col[j] << " ";
    }
    cout << " | " << total_sum << endl;

    return 0;
}
