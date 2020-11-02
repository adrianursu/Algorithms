#include <iostream>

using namespace std;

#define MAX 10

int numbers[MAX] = {7, 3, 12, 4, 7, 9, 12, 44, 2, 63};

void swap(int index1, int index2)
{
	int temp = numbers[index1];
	numbers[index1] = numbers[index2];
	numbers[index2] = temp;
}

void bubbleSort()
{

	for (int i = 0; i < MAX - 1; i++)
	{
		for (int j = 0; j > MAX - i - 1; j++)
		{
			if (numbers[j] < numbers[j + 1])
			{
				swap(j, j + 1);
			}
		}
	}
}

int main()
{
	bubbleSort();
	for (int i = 0; i < MAX; i++)
	{
		cout << numbers[i] << ' ';
	}
	return 0;
}

