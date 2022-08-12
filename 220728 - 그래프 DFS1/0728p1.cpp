/*/#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[100][100];

	cin >> n;

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			cin >> arr[y][x];
		}
	}

	int vote[100] = { 0 };

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			vote[y] += arr[y][x];
		}
	}

	int Max = 0;
	int MaxWho = 0;
	int Min = 999;
	int MinWho = 0;
	for (int x = 0; x < n; x++)
	{
		if (vote[x] > Max)
		{
			Max = vote[x];
			MaxWho = x;
		}
		if (vote[x] < Min)
		{
			Min = vote[x];
			MinWho = x;
		}
	}

	cout << MaxWho + 1 << "\n";
	cout << MinWho + 1;

	return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[11][11] = { 0 };
	// arr[from][to] <= fom - > to로 갈 수 있는가?
	//                          투표를 했는가? 

	for (int from = 1; from <= N; from++) {
		for (int to = 1; to <= N; to++)
		{
			cin >> arr[from][to]; // 해당하는 from에서 to로	가는 정보
		}
	}

	// 1이 3번에게 투표를 했는가?
	// arr[1][3]을 확인

	//누가 표를 제일 많이 받았는가?
	//누가 표를 제일 적게 받았는가?

	//받은게 중심  => to
	int maxSum = 0; //최대로 받은 표수
	int maxTo = 0;//표를 최대로 받은 사람의 번호
	int minSum = 2213012; // 최소로 받은 표수
	int minTo = 0; // 표를 최소로 받은 사람의 번호
	for (int to = 1; to <= N; to++)
	{
		int sum = 0;
		for (int from = 1; from <= N; from++)
		{
		sum += arr[from][to];
		if (arr[from][to] == 1)
		sum++;
		}
		cout << to << ":" << sum << "\n";
		if (sum > maxSum)
		{
		 maxSum = sum;
		maxTo = to;
		}
		if (sum < minSum)
		{
		minSum = sum;
		minTo = to;
		}
		}
		cout << maxTo << "\n" << minTo;
		int sum = 0;

}