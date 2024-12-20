#include <iostream>
#include <random>
using namespace std;

int main() {

    const int rows = 5;
    const int cols = 5;
    int number_of_steps;
    int arr[rows][cols];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 50);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = dist(gen);
        }
    }

    int choice;
    do {
        cout << "Enter 1 for up, 2 for right, 3 for down, 4 for left, 5 to exit: ";
        cin >> choice;

        if (choice == 1)
        {
            system("CLS");
			cout << "Enter number of steps: ";
			cin >> number_of_steps;
            cout << "Array before moving up: " << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
            for (int steps = 0; steps < number_of_steps; steps++) {
                for (int j = 0; j < cols; j++) {
                    int temp = arr[0][j];
                    for (int i = 0; i < rows - 1; i++) {
                        arr[i][j] = arr[i + 1][j];
                    }
                    arr[rows - 1][j] = temp;
                }
            }
			cout << "Array after moving up: " << endl;
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
        }

        if (choice == 2)
        {
            system("CLS");
            cout << "Enter number of steps: ";
            cin >> number_of_steps;
            cout << "Array before moving right: " << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
            for (int steps = 0; steps < number_of_steps; steps++) {
                for (int i = 0; i < rows; i++) {
                    int temp = arr[i][cols - 1];
                    for (int j = cols - 1; j > 0; j--) {
                        arr[i][j] = arr[i][j - 1];
                    }
                    arr[i][0] = temp;
                }
            }
            cout << endl;
			cout << "Array after moving right: " << endl;
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
        }

        if (choice == 3)
        {
            system("CLS");
            cout << "Enter number of steps: ";
            cin >> number_of_steps;
            cout << "Array before moving down: " << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            for (int steps = 0; steps < number_of_steps; steps++) {
                for (int j = 0; j < cols; j++) {
                    int temp = arr[rows - 1][j];
                    for (int i = rows - 1; i > 0; i--) {
                        arr[i][j] = arr[i - 1][j];
                    }
                    arr[0][j] = temp;
                }
            }
            cout << "Array after moving down: " << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }

        if (choice == 4) {
            system("CLS");
            cout << "Enter number of steps: ";
            cin >> number_of_steps;
            cout << "Array before moving left: " << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            for (int steps = 0; steps < number_of_steps; steps++) {
                for (int i = 0; i < rows; i++) {
                    int temp = arr[i][0];
                    for (int j = 0; j < cols - 1; j++) {
                        arr[i][j] = arr[i][j + 1];
                    }
                    arr[i][cols - 1] = temp;
                }
            }
            cout << "Array after moving left: " << endl;
            for (int i = 0; i < rows; i++)

            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
    } while (choice != 5);

    return 0;
}
