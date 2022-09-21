
#include <iostream>
using namespace std;

//빨간색 타일 + 갈색 타일 = 방의 크기(L*W)
//갈색 타일 = (L-2) * (W-2)
//빨간색 타일 = (L*W) - 갈색타일
void calArea(int r, int b) {
	//최소 조건인 3*3부터 시작
	for (int i = 3; i < 5000; i++) {
		for (int j = 3; j < 5000; j++) {
			if ((2 * (i - 2) + (2 * (j - 2)) + 4) == r) {
				if (i * j == (r + b) && j >= i) {
					//출력
					cout << j << ' ' << i << '\n';
					break;
				}
			}

		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int r, b;  //r은 빨간색 타일, b는 갈색 타일
	//입력
	cin >> r >> b;
	//연산
	calArea(r, b);
	return 0;

}