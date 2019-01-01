#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int res = 1;//몇 개 필요?
	int cnt = 11;//기준
	while (n >= cnt)
	{
		res++;
		cnt = cnt * 10 + 1;
	}
	cout << res;

}

//ex 111 ->3 3018->4 1100 ->3