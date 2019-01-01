#include<iostream>
using namespace std;

int main() {
	//Kn+Pn^2 목표
	//입력
	int C, K, P;//와인은 모은 년수, 고려대 애착 정도, 구매중독 정도
	cin >> C >> K >> P;
	int n;
	int total = 0;
	for (n = 1;n <= C;n++) {
		total += K * n + P * n*n;
	}
	cout << total;

}
