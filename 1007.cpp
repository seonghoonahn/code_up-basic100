/*윈도우 운영체제의 파일 경로를 출력하는 연습을 해보자.
 
파일 경로에는 특수문자들이 포함된다.

다음 경로를 출력하시오.

"C:\Download\hello.cpp"
(단, 큰따옴표도 함께 출력한다.)

참고
printf( ) 함수로 백슬래시 문자 \ 를 출력하기 위해서는 \\ 로 출력해야 한다.

예시
printf("\\");


** 주의 : 본 화면에서 복사하여 붙여넣기하면 제대로 되지 않을 수 있으니 직접 작성해야한다.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "\"C:\\Download\\hello.cpp\""<< endl;
}