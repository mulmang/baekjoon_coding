#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	//ó�� �Է�
	string res;
	cin >> res;

	for (int i = 1;i < n;i++) {
		string temp;
		cin >> temp;
		for (int j = 0;j < temp.length(); j++) {
			if (res[j] != temp[j]) {
				res[j] = '?';
			}
		}//?�� ��ȯ

		//���� �Է�
	}
	cout << res;
}