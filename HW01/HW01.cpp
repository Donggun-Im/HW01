#include <iostream>

using namespace std;


double GetAverage(int arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

int GetTotal(int arr[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	return total;
}

void SortAcsending(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int temp = i;
		for (int j = i+1; j < size; ++j)
		{
			if (arr[temp] > arr[j])
			{
				temp = j;
			}
		}
		if (temp != i)
		{
			int swap = arr[i];
			arr[i] = arr[temp];
			arr[temp] = swap;
		}
	}
}
void SortDesending(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int temp = i;
		for (int j = i+1; j < size; ++j)
		{
			if (arr[temp] < arr[j])
			{
				temp = j;
			}
		}
		if (temp != i)
		{
			int swap = arr[i];
			arr[i] = arr[temp];
			arr[temp] = swap;
		}
	}
}
int main()
{
	int arr[5];
	int sortMethod = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		cout << "숫자 입력" << i + 1 << ": ";
		cin >> arr[i];
	}
	/*int total = 0;
	double average = 0;
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	average = static_cast<double>(total) / size;

	cout << "평균: " << average << endl;
	cout << "총합: " << total << endl;*/
	cout << "평균: " << GetAverage(arr, size) << endl << "총합: " << GetTotal(arr, size) << endl;
	/*SortAcsending(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}*/
	cout << endl;
	cout << "정렬 방식을 고르세요: 1. 오름차순 2. 내림차순 ";
	cin >> sortMethod;
	if (sortMethod == 1)
	{
		SortAcsending(arr, size);
	}
		
	else if (sortMethod == 2)
	{
		SortDesending(arr, size);
	}
	else
	{
		cout << "잘못된 입력입니다." << endl;
		return 1;
	}

	cout << "정렬 결과: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}