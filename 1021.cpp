/*1개의 단어를 입력받아 그대로 출력해보자.


입력
한 단어가 입력된다.(단, 단어의 길이는 50자 이하이다.)

문자를 50개 저장하기 위해서는 char data[51] 로 선언하면 된다.

char data[51]="";
scanf("%s", data);

를 실행하면, data[51] 에 한 단어가 저장된다.
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    getline (cin, word);
    cout << word << endl;
}