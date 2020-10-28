/*
년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
	int year, month, day;
	cin >> year;
	cin.ignore(50, '.'); 
	cin >> month;
	cin.ignore(50, '.');
	cin >> day;

	cout.width(4); // 출력되는 폭을 4로 지정
	cout.fill('0'); // 공백은 문자0으로 채움
	cout << year << '.';

	cout.width(2);
	cout.fill('0');
	cout << month << '.';

	cout.width(2);
	cout.fill('0');
	cout << day << endl;
}
