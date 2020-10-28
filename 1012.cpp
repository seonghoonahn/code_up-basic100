/*
실수형(float)로 변수를 선언하고 그 변수에 실수값을 저장한 후
저장되어 있는 실수값을 출력해보자.

참고
float x;
scanf("%f", &x);
printf("%f", x);
와 같은 방법으로 가능하다.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float flo;
    cin >> flo;
    cout << fixed; //fixed는 입력받은 소수점까지 출력
    cout  << flo;
    
}
