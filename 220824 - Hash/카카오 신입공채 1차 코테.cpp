#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
vector<int> arr1;
vector<int> arr2;
vector<string> bucketStr1;
vector<string> bucketStr2;
vector<string> ret;

void goTwobit1(vector<int> arr)
{
	for (int i = 0; i < n; i++)
	{
		string str;
		for (int j = 0; j < n; j++)
		{
			str = to_string(arr[i] % 2) + str;
			arr[i] = arr[i] / 2;
		}
		bucketStr1.push_back(str);
	}

	return;
}

void goTwobit2(vector<int> arr)
{
	for (int i = 0; i < n; i++)
	{
		string str;
		for (int j = 0; j < n; j++)
		{
			str = to_string(arr[i] % 2) + str;
			arr[i] = arr[i] / 2;
		}
		bucketStr2.push_back(str);
	}

	return;
}

void goMap()
{
	for (int i = 0; i < n; i++)
	{
		string str;
		for (int j = 0; j < n; j++)
		{
			if (bucketStr1[i][j] == '0' && bucketStr2[i][j] == '0') str = " " + str;
			else if (bucketStr1[i][j] == '1' || bucketStr2[i][j] == '1') str = "#" + str;
		}
		ret.push_back(str);
	}

	return;
}

int main()
{
	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr1.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr2.push_back(num);
	}

	goTwobit1(arr1);
	goTwobit2(arr2);

	goMap();

	for (int i = 0; i < n; i++)
	{
		cout << ret[i] << "\n";
	}

	return 0;
}