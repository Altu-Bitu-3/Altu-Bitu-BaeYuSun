#include <iostream>
#include <vector>

using namespace std;
bool switches [101];      //입력받을 스위치
typedef pair <int,int> ci;

//남학생인 경우 배수에 해당하는 스위치를 반전시키는 함수
void maleStudent(int n, int num){
    for(int i= num; i<=n; i+=num){
        switches[i] = !switches[i];  //스위치 반전
    }
}

//여학생인 경우 대칭인 최대구간 스위치를 반전시키는 함수
void femaleStudent(int n, int num){
    int under = num, upper = num;
    while(under >= 1 && upper <=n){
        under--, upper++;
        if(switches[under] != switches[upper]){
            break;
        }
    }    
    for(int i=under+1; i<=upper-1; i++){
        switches[i] = !switches[i];  //스위치 반전
    }
}


int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;

    //스위치 입력
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> switches[i];
    }

    //학생 입력 
    cin >> m;
    vector <ci> student(m, {0,0});

    for(int i=0; i<m; i++){
        cin >> student[i].first >> student[i].second;

        if(student[i].first == 1){  //남학생인 경우
            maleStudent(n, student[i].second);
        } else{  //여학생인 경우
            femaleStudent(n, student[i].second);
        }
    }

    //출력 형식에 맞춰 출력
    for(int i=1; i<=n; i++){
        cout << switches[i] << " ";
        if(i % 20 == 0){
            cout << '\n';
        }
    }
    return 0;
}