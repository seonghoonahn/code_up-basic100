/*
다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력한다.

참고
scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
를 사용하면 1개의 숫자로 각각 구분되어 저장된다.

예시
읽어들인 값을 적당히 바꿔 출력하기 위해서

printf("[%d]", a*10000);

과 같은 방법도 가능하다.


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	char num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	cout << '[' << (num[0] - '0') * 10000 << ']' << endl;
	cout << '[' <<  (num[1] - '0') * 1000 << ']' << endl;
	cout << '[' << (num[2] - '0') * 100 << ']' <<endl;
	cout << '[' << (num[3] - '0') * 10 << ']' << endl;
	cout << '[' << (num[4] - '0') * 1 << ']' << endl;
}