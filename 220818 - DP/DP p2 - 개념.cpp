#include <iostream>
using namespace std;

long long dp[10000]; // 앞에 계산했떤 결과를 저장
// 속도가 엄청나게 증가한다.

int fibo(int now)
{
	if (now <= 1)  // fibo(1) : 1, fibo(0) : 0을 도출하겠다
	{
		dp[now] = now;
		return now;
	}
	if (dp[now]) // 계산했던 결과가 존재한다.
	{
		return dp[now];
	}
	long long first = fibo(now - 1);
	long long second = fibo(now - 2);

	long long  nowValue = first + second;
	// now번째 피보나치 수

	dp[now] = nowValue;
	return nowValue;
}

void usedfibo()
{
	for (int i = 0; i <= 100; i++)
	{
		cout << fibo(i) << "\n";
	}
	return;
}

int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int prefix[10] = { 0 }; // index : 번쨰

	//for (int index = 0; index < 10; index++)
	//{
	//	for (int i = 0; i <= index; i++)
	//	{
	//		prefix[index] += arr[i];
	//	}
	//}

	//prefix[0] = arr[0];
	//for (int i = 1; i < 10; i++)
	//{
	//	prefix[i] = prefix[i - 1] + prefix[i];
	//}
	// 중복 계산을 방지하며 계산 Dinamic Programming
	// 재계산을 방지하여 빠르게 원하는 값까지 계산 <- 저장해서 쓰겠다
	// 1. 같은 규칙으로 계산해 나가야한다
	// (큰 문제를 해결하는 방법과 작은 문제를 해결하는 방법이 같다)
	// 2. 한 번 계산한 결과가 바뀌지 않는가?
	

	// DP를 해결하는 방법
	// 1. 상황을 설명할 수 있는 변인 용인
	// 2. 배열 설정 변인요인에 따라 차원을 늘린다 dp[1개][2개][3개]

	
	usedfibo();

	return 0;
}