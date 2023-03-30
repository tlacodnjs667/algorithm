/* 
    문제
    n층의 A를 출력하는 프로그램을 작성하여라. 
    Input, Output의 예제를 참고한다. 
    (단, n은 항상 홀수만 주어진다.)

    입력
    첫째 줄에 자연수이며, 홀수인 n이 주어진다. (5≤n≤100)

    출력
    다음 예제와 같이 A 모양으로 ‘*’을 출력한다.

*/

#include <iostream>

using namespace std;

int main() {
    int n; 
    cin >> n;

    for (int i = 0; i < n; i++ ) {
        
        for(int j = n-i-1; j > 0; j--) {
            cout << ' ';
        }

        //중간 공백 출력하는 반복문 => 만약 i가 (n/2+1)일 경우, 공백 대신 '*' 출력하기
        for(int j = 0; j < i * 2 + 1; j++) {

            if( i == (n/2)) {
                cout << '*';
                continue;    
            }

            if( j == 0)  cout << '*';
            else if( j == i * 2) cout << '*';
            else cout << ' ';

        } // 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 => 등차수열 (2 * n - 1)

  

        cout << '\n';
    } // 세로를 전담하는 반복문 


    return 0;
}

// 1 + 2 * (n-1)

// 가로길이 :  (n-1) * 2 + 1 => 2 * n - 1
// 세로길이 :  n


/* n = 5 (n / 2 + 1)이 중간 값. 
중간값일때는 공백 찍은 후 별 사이에 다른 공백 없이 별로 찍어야 함.
    1층: 공백(4) 별(1)
    2층: 공백(3) 별(1) 공백(1) 별(1)
    // 3층: 공백(2) 별(n)
    4층: 공백(1) 별(1) 공백(5) 별(1)
    5층: 공백(0) 별(1) 공백(7) 별(1)
*/
/* n = 7
    1층: 공백(6) 별(1)
    2층: 공백(5) 별(1) 공백(1) 별(1)
    3층: 공백(4) 별(1) 공백(3) 별(1)
    // 4층: 공백(3) 별(n)
    5층: 공백(2) 별(1) 공백(7) 별(1)
    6층: 공백(1) 별(1) 공백(9) 별(1)
    7층: 공백(0) 별(1) 공백(11) 별(1)
*/