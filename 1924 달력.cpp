#include<iostream>
#include<string>
using namespace std;

class Calender {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int x;//month
	int y;//date
	int key;//나머지 값
public:
	void setDate() {
		cin >> x;
		cin >> y;
		key = 0;//1월 1일은 월요일
	}
	void solution() {
		for (int i = 0;i < x - 1;i++) {
			y += month[i];//각 달의 일수를 더해줌
		}
		key = y % 7;//나눠줌
	}
	void printDay() const {
		cout << day[key];
	}//출력


};
int main() {
	Calender c;
	c.setDate();
	c.solution();
	c.printDay();
}