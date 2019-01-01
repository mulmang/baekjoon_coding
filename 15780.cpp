멀티탭 충분하니? 

#include <iostream>
using namespace std;

int n, k;
int main() {
	cin >> n >> k;
	while (k--) {
		int x;//구의 수
		cin >> x;
		n -= ((x + 1) / 2);//꽂을 수 있는 수
	}
	if (n <= 0) cout << "YES";//사람이 남지 않음
	else cout << "NO";//사람이 남은 경우
}