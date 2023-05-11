#include <iostream>

using namespace std;

int main() {
  
  //Please Enter Your Code Here
  int N, S;
  cin >> N >> S;
  
  // N => 층수를 관장하는 반복문
  // S => 시작 정수 => 출력시마다 후행 ++
  
  for ( int i = 0; i < N; i++) {
    
    for ( int j = 0; j < N - i - 1; j++) {
        cout << '\n';
    }
    
    

    cout << '\n';
  }
  
  return 0;
}

// 공백은 n-1개부터 0까지 => i와의 관계 => n-i-1

// 숫자 => 1, 3,5,7,9.... (2 * n -1)