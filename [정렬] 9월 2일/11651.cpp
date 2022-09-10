#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct cordinate{
	int x, y;
};
//비교함수
bool cmp(const cordinate& a, const cordinate& b) {
	if (a.y != b.y) return a.y < b.y; //y좌표가 다르면  좌표가 증가하는 순서대로 정렬
	if (a.x != b.x) return a.x < b.x; //x좌표가 다르면 좌표가 증가하는 순서대로 정렬
}

int main() {
	int n; //입력받을 좌표의 개수

	cin >> n;
	vector<cordinate> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}

	sort(arr.begin(), arr.end(), cmp);
	//출력
	for (int i = 0; i < n; i++) {
		cout << arr[i].x <<" " << arr[i].y << "\n";
	}
}