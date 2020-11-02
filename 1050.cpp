/*
세 정수가 주어지면 그 중 가장 작은 수를 출력한다.

입력
세 정수가 주어진다.

출력
가장 작은 값을 출력한다.

입력 예시   
3 5 2

출력 예시
2
*/


#include<iostream>
using namespace std; 
  
int main() 
{ 
    int a, b, c;
    cin >> a >> b >> c;

  
    if (a <= b && a <= c) 
        cout << a;
  
    else if (b <= a && b <= c) 
        cout << b; 
  
    else
        cout << c;
  
    return 0; 
} 