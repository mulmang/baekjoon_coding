#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int res = 1;//�� �� �ʿ�?
	int cnt = 11;//����
	while (n >= cnt)
	{
		res++;
		cnt = cnt * 10 + 1;
	}
	cout << res;

}

//ex 111 ->3 3018->4 1100 ->3