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

    int sum_of_elements_in_array = 0;
    int max_element = array[0][0];
    int min_element = array[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
            sum_of_elements_in_array += array[i][j];
            if (array[i][j] > max_element) {
                max_element = array[i][j];
            }
            if (array[i][j] < min_element) {
                min_element = array[i][j];
            }
        }
        cout << endl;
    }

    cout << "Sum of elements in array: " << sum_of_elements_in_array << endl;
    int midle_average = sum_of_elements_in_array / (rows * cols);
    cout << "Midle average: " << midle_average << endl;
    cout << "Max element: " << max_element << endl;
    cout << "Min element: " << min_element << endl;

    return 0;
}
