#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    

    int array[rows][cols];
    int first_element;

    cout << "First element: ";
    cin >> first_element;

    array[0][0] = first_element;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 && j == 0) continue; 
            if (j == 0) {
                array[i][j] = array[i - 1][cols - 1] * 2;
            }
            else {
                array[i][j] = array[i][j - 1] * 2; 
            }
        }
    }
    cout << "The array is: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
