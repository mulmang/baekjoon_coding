��Ƽ�� ����ϴ�? 

#include <iostream>
using namespace std;

int n, k;
int main() {
	cin >> n >> k;
	while (k--) {
		int x;//���� ��
		cin >> x;
		n -= ((x + 1) / 2);//���� �� �ִ� ��
	}
	if (n <= 0) cout << "YES";//����� ���� ����
	else cout << "NO";//����� ���� ���
}