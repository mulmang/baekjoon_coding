#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;//입력

	int a, b;//10의 자리,1의 자리
	int cycle = 1;//사이클 길이
	a = n / 10;
	b = n % 10;

	int sum_right;//합의 가장 오른쪽 자리
	sum_right= (a + b)%10;
	int temp_n = 10 * b + sum_right;
	
	while (n !=temp_n ) {
		a = temp_n / 10;
		b = temp_n % 10;
		sum_right = (a + b) % 10;
		temp_n = 10 * b + sum_right;
		cycle++;
	}//반복

	cout << cycle;
	
}