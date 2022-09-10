#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> line;
//내림차순 정렬을 위한 cmp
bool cmp(int a, int b) {
	return a > b;
}
//받을 수 있는 팁의 합계를 계산
long sum(int n) {
	long sum = 0;
	for (int i = 0; i < n; i++) {
		if (line[i] - i > 0) { //음수가 되면 팁을 받을 수 없기 때문에
			sum += line[i] - i;
		}
	}
	return sum;
}
int main() {
	int n; //첫째 줄에 서 있는 사람의 수
	cin >> n;
	line.assign(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> line[i];
	}
	sort(line.begin(), line.end(), cmp);
	cout << sum(n);
	return 0;
}