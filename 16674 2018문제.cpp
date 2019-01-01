#include<iostream>
using namespace std;
int main()
{
	//2018 관련없음 0
	//2018 관련하지만 밀접하지 않음 1
	//2018 밀접한 수(포함)이나 묶여있는 수 아님 2
	//2018 묶여있다(개수 같다) 8

	int n;// (1 ≤ n < 1,000,000,000) 
	cin >> n;//input

	int a[4] = { 0 };//표식
	bool flag = 1;
	while (n != 0)
	{
		if (n % 10 == 2) a[0]++;//2표식
		else if (n % 10 == 0) a[1]++;//0표식
		else if (n % 10 == 1) a[2]++;//1표식
		else if (n % 10 == 8) a[3]++;//8표식
		else flag = 0;
		n /= 10;
	}
	if (flag == 0)
	{
		cout << 0;
		return 0;
	}//관련 없음

	if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
	{
		cout << 8;
		return 0;
	}//묶여있다

	else if (a[0] > 0 && a[1] > 0 && a[2] > 0 && a[3] > 0)
	{
		cout << 2;
		return 0;
	}//밀접하나 묶여있지 않다.

	else
	{
		cout << 1;
		return 0;
	}//관련하지만 밀접하지 않다.

}

