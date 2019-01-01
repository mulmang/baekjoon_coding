#include <iostream>
using namespace std;
#define max 1000

int N;//Çï¸äÀÇ °³¼ö
int M;//Á¶³¢ÀÇ °³¼ö
int h[max];//Çï¸ä ¹æ¾î·Â
int a[max];//Á¶³¢ ¹æ¾î·Â

int main() {//ÃÖ´ë ¹æ¾î·Â Ãâ·Â

	int hmax = 0;//Çï¸ä ÃÖ´ë¹æ¾î·Â
	int amax = 0;//Á¶³¢ ÃÖ´ë¹æ¾î·Â
	cin >> N >> M;
	for (int i = 0;i<N;i++) {
		cin >> h[i];
		if (hmax < h[i]) {
			hmax = h[i];
		}
	}//Çï¸ä ¹æ¾î·Â ÀÔ·Â

	for (int i = 0;i<M;i++) {
		cin >> a[i];
		if (amax < a[i]) {
			amax = a[i];
		}
	}//Á¶³¢ ¹æ¾î·Â ÀÔ·Â

	cout << hmax + amax;
	return 0;
}
