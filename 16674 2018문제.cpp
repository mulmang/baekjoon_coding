#include<iostream>
using namespace std;
int main()
{
	//2018 ���þ��� 0
	//2018 ���������� �������� ���� 1
	//2018 ������ ��(����)�̳� �����ִ� �� �ƴ� 2
	//2018 �����ִ�(���� ����) 8

	int n;// (1 �� n < 1,000,000,000) 
	cin >> n;//input

	int a[4] = { 0 };//ǥ��
	bool flag = 1;
	while (n != 0)
	{
		if (n % 10 == 2) a[0]++;//2ǥ��
		else if (n % 10 == 0) a[1]++;//0ǥ��
		else if (n % 10 == 1) a[2]++;//1ǥ��
		else if (n % 10 == 8) a[3]++;//8ǥ��
		else flag = 0;
		n /= 10;
	}
	if (flag == 0)
	{
		cout << 0;
		return 0;
	}//���� ����

	if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
	{
		cout << 8;
		return 0;
	}//�����ִ�

	else if (a[0] > 0 && a[1] > 0 && a[2] > 0 && a[3] > 0)
	{
		cout << 2;
		return 0;
	}//�����ϳ� �������� �ʴ�.

	else
	{
		cout << 1;
		return 0;
	}//���������� �������� �ʴ�.

}

