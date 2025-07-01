#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, target;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> target;

	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
	for (int i = 0; i < n - 3; i++)
	{
		for (int j = i + 1; j < n - 2; j++)
		{
			int ans = target - arr[i] - arr[j];
			int start = j + 1, end = n - 1;
			while (start < end)
			{
				if (arr[start] + arr[end] == ans)
				{
					cout << "true";
					break;
				}

				else if (arr[start] + arr[end] > ans)
					end--;

				else
					start++;
			}
		}
	}
	return 0;
}