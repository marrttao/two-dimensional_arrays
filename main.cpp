#include <iostream>
#include <random>

using namespace std;

int main()
{
	const int first_cols = 10;
	const int first_rows = 5;
	int first[first_rows][first_cols];

	const int second_cols = 5;
	const int second_rows = 5;
	int second[second_rows][second_cols];

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 50);

	for (int i = 0; i < first_rows; i++)
	{
		for (int j = 0; j < first_cols; j++)
		{
			first[i][j] = dist(gen);
		}
	}

	for (int i = 0; i < second_rows; i++)
	{
		for (int j = 0; j < second_cols; j++)
		{
			second[i][j] = first[i][j * 2] + first[i][(j * 2) + 1];
		}
	}

	cout << "First array:" << endl;
	for (int i = 0; i < first_rows; i++)
	{
		for (int j = 0; j < first_cols; j++)
		{
			cout << (first[i][j] < 10 ? " " : "") << first[i][j] << "  ";
		}

		cout << endl;
	}

	cout << endl;

	cout << "Second array:" << endl;
	for (int i = 0; i < second_rows; i++)
	{
		for (int j = 0; j < second_cols; j++)
		{
			cout << (second[i][j] < 10 ? " " : "") << second[i][j] << "  ";
		}

		cout << endl;
	}

	return 0;
}
