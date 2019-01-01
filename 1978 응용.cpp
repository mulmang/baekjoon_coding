1987 응용 소수 1~N 소수찾기

#include<iostream>
using namespace std;
#define max 1000

int cnt = 0;
int Num;

void main() {
	cout << "몇 개?";
	cin >> Num;
	for (int i = 2; i <= max; i++) {
		int j;
		for (j = 2;j < i;j++) {
			if (i%j == 0)
				break;
		}
		if (i == j) {
			cout << i << " ";
			cnt++;
		}
		if (cnt == Num) {
			break;
		}
	}
	printf("\n1부터 1000 사이의 소수는 %d개이다. \n", cnt);
}

#include<iostream>
using namespace std;
#define max 1000

int cnt = 0;
int Num;
int a[max];

int main() {
	cout << "몇 개 입력?";
	cin >> Num;
	for (int i = 0; i < Num; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < Num; i++) {
		int j;
		for (j = 2;j < a[i];j++) {
			if (a[i] % j == 0)
				break;
		}
		if (a[i] == j) {
			cout << a[i] << " ";
			cnt++;
		}
	}
	cout << endl<< cnt;
	
	return 0;
}



