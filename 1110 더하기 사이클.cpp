#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;//�Է�

	int a, b;//10�� �ڸ�,1�� �ڸ�
	int cycle = 1;//����Ŭ ����
	a = n / 10;
	b = n % 10;

	int sum_right;//���� ���� ������ �ڸ�
	sum_right= (a + b)%10;
	int temp_n = 10 * b + sum_right;
	
	while (n !=temp_n ) {
		a = temp_n / 10;
		b = temp_n % 10;
		sum_right = (a + b) % 10;
		temp_n = 10 * b + sum_right;
		cycle++;
	}//�ݺ�

	cout << cycle;
	
}