#include<iostream>
using namespace std;

int main() {
	//Kn+Pn^2 ��ǥ
	//�Է�
	int C, K, P;//������ ���� ���, ����� ���� ����, �����ߵ� ����
	cin >> C >> K >> P;
	int n;
	int total = 0;
	for (n = 1;n <= C;n++) {
		total += K * n + P * n*n;
	}
	cout << total;

}
