/*
2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자.

참고
char x, y;
scanf("%c %c", &x, &y);
printf("%c %c", y, x); //출력되는 순서를 작성
와 같은 방법으로 해결할 수 있다.
*/
#include <iostream>
using namespace std;

int main(){
    char x,y;
    cin >> x >> y;
    cout << y <<" "<< x;
     
}
