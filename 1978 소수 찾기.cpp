#include<iostream>
using namespace std;
#define max 1000

int cnt = 0;
int Num;
int a[max];

int main() {
	cout << "�� �� �Է�?";
	cin >> Num;
	for (int i = 0; i < Num; i++) {
		cin >> a[i];
	}//�ݺ� �Է�

	for (int i = 0; i < Num; i++) {
		int j;
		for (j = 2;j < a[i];j++) {
			if (a[i] % j == 0)
				break;
		}
		if (a[i] == j) {
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}