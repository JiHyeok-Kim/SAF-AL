#include <iostream>
#include <vector>
using namespace std;

int arr[500][500];
int arrBucket[10];
int directY[3] = { -1, 0, -1 };
int directX[3] = { 0, -1, -1 };
int bucket[500][500][10];

void count(int y , int x)
{
	for (int i = 0; i < 3; i++)
	{
		int dy = y + directY[i];
		int dx = x + directX[i];
		if (i == 2)
		{
			for (int j = 1; j < 10; j++)
			{
				bucket[y][x][j] -= bucket[dy][dx][j];
			}
			continue;
		}
		for (int j = 1; j < 10; j++)
		{
 			bucket[y][x][j] += bucket[dy][dx][j];
		}
	}
	return;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			count(y, x);
			bucket[y][x][arr[y][x]]++;
		}
	}

	int q;
	cin >> q;
	int maxi = -1;
	for (int i = 0; i < q; i++)
	{
		int y1, x1, y2, x2;
		cin >> y1 >> x1 >> y2 >> x2;
		for (int j = 1; j < 10; j++)
		{
			arrBucket[j] = bucket[y2][x2][j] - bucket[y2][x1 - 1][j] - bucket[y1 - 1][x2][j] + bucket[y1 - 1][x1 - 1][j];
			if (arrBucket[j] > maxi) { maxi = arrBucket[j]; }
		}
		cout << maxi << "\n";
	}

	return 0;
}