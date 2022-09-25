#include <iostream>
using namespace std;

//그룹단어인지 체크하고 맞으면 true, 아니면 false 반환하는 함수
bool checkGroup(string word) {
    //입력받은 문자열의 길이만큼 비교 반복
    for (int i = 0; i < word.size(); i++) {
        for (int j = 0; j < i; j++) {
            //연속해서 나타난 문자가 아닐 경우 && 이전에 등장했던 문자지만 떨어져서 나타난 경우
            if (word[i] != word[i - 1] && word[i] == word[j]) {
                //그룹 단어가 아니므로 false 반환
                return false;
            }
        }
    }
    //위의 경우에 걸러지지 않았으면 true 반환
    return true;
}


int main() {
    int n, result = 0;

    //입력
    cin >> n;
    while (n--) {
        string word;
        cin >> word;

        //그룹 단어인지 확인하는 연산
        if (checkGroup(word)) { 
            result++;
        }
    }

    //출력
    cout << result <<'\n';
    return 0;
}