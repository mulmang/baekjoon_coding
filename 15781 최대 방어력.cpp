#include <iostream>
using namespace std;
#define max 1000

int N;//����� ����
int M;//������ ����
int h[max];//��� ����
int a[max];//���� ����

int main() {//�ִ� ���� ���

	int hmax = 0;//��� �ִ����
	int amax = 0;//���� �ִ����
	cin >> N >> M;
	for (int i = 0;i<N;i++) {
		cin >> h[i];
		if (hmax < h[i]) {
			hmax = h[i];
		}
	}//��� ���� �Է�

	for (int i = 0;i<M;i++) {
		cin >> a[i];
		if (amax < a[i]) {
			amax = a[i];
		}
	}//���� ���� �Է�

	cout << hmax + amax;
	return 0;
}
