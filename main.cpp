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
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	int sum_of_elements_in_array = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum_of_elements_in_array += array[i][j];
		}
	}
	cout << "Sum of elements in array: " << sum_of_elements_in_array << endl;

	int midle_average = 0;
	int number_of_elements = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			number_of_elements++;
		}
	}
	midle_average = sum_of_elements_in_array / number_of_elements;
	cout << "Midle average: " << midle_average << endl;

	int max_element = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] > max_element) {
				max_element = array[i][j];
			}
		}
	}
	cout << "Max element: " << max_element << endl;

	int min_element = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] < min_element) {
				min_element = array[i][j];
			}
		}
	}
	cout << "Min element: " << min_element << endl;


	return 0;
}