#include<iostream>
using namespace std;

int main(void)
{
	int n;
	int a[100], b[100];
	int res=0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}//a �Է�
	for (int i = 0;i < n;i++) {
		cin >> b[i];
	}//b �Է�

	for (int i = 0; i < n; i++) {//a���� ���� ����,bubble sort
		for (int j = 0; j < n - i -1 ; j++) {
			if (a[j] < a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {//b���� ���� ����,bubble sort
		for (int j = 0; j < n - i - 1; j++) {
			if (b[j] > b[j + 1]) {
					int temp = b[j];
					b[j] = b[j + 1];
					b[j + 1] = temp;
			}
		}
	}

	for (int i = 0;i < n;i++) {
		res+=a[i] * b[i];
	}

	cout << res;//�ּڰ�
}

