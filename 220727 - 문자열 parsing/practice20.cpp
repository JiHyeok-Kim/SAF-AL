#include <iostream>
#include <string>
using namespace std;

string strs[4] = { "GOLD#GOLD##", "#GOL#GOLE#GOLED", "GOLD","GGGGOLD#GOLD" };

int findGold(int x)
{
	int cnt = 0;
	int start = 0;
	while (1) {
		int ret = strs[x].find("GOLD", start);
		if (ret == -1) break;

		cnt++;
		start = ret + 1;
	}

	return cnt;
}


int main() {



	//골드는 5개

	int cnt = 0;
	for (int x = 0; x < 4; x++)
	{
		cnt += findGold(x);
	}

	cout << cnt << "개";

	return 0;
}