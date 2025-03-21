#include <iostream>

#define SIZE 6

using namespace std;

void QuickSort(int list[], int start, int end)
{
	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right)
	{
		
	}

	while (left <= end && list[pivot] >= list[left])
	{
		left++;
	}

	while (right > start && list[pivot] <= list[right])
	{
		right--;
	}

	if (left > right)
	{
		std::swap(list[pivot], list[right]);
	}
	else
	{
		std::swap(list[left], list[right]);
	}
}

int main()
{
#pragma region 퀵 정렬
	// 기준점을 획득한 다음 기준점을 기준으로 배열을 나누고 한 쪽에는
	// 기준점보다 작은 값들이 위치하게 하고 다른 한 쪽에는 기준점보다
	// 큰 값들이 위치하도록 정렬합니다.

	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
	// 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬하는 알고리즘입니다.

	int list[SIZE] = { 5, 4, 6, 2, 1, 3 };

	QuickSort(list, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

#pragma endregion


	return 0;
}