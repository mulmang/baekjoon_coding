#include<iostream>
#include<string>
using namespace std;

class Calender {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int x;//month
	int y;//date
	int key;//������ ��
public:
	void setDate() {
		cin >> x;
		cin >> y;
		key = 0;//1�� 1���� ������
	}
	void solution() {
		for (int i = 0;i < x - 1;i++) {
			y += month[i];//�� ���� �ϼ��� ������
		}
		key = y % 7;//������
	}
	void printDay() const {
		cout << day[key];
	}//���


};
int main() {
	Calender c;
	c.setDate();
	c.solution();
	c.printDay();
}