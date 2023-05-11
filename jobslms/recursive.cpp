#include <iostream>

using namespace std;

int k;
int a[20];
int a2[20];
int a3[20];
char inequal[20];
bool visited[10];
bool printed; //=> 한 번만 출력할 것이기 때문에!



void recur (int cur) {
     // 몇 번째 수인지 정보를 갖고 있는 cur 변수 => k개의 부등호가 들어오면 k+1만큼의 수가 필요하다.
    if(cur == k+1) {
        for (int i = 0; i < k+1; i++) {
            if(inequal[i] == '>' && a[i] < a[i+1]) return;
            if(inequal[i] == '<' && a[i] > a[i+1]) return;
        } // inequal 조건에 맞는지 확인하기

        if(!printed) {
            for (int i = 0; i < k+1; i++) a3[i] = a[i]; // 첫 번째 순열을 저장합니다.
            printed = true;
        }

        for (int i = 0; i < k+1; i++) a2[i] = a[i]; // 첫 번째 순열을 저장합니다.
    }

    // 중복이 불가한 수열을 만들어야 함.
    for (int i = 0; i < 10; i++) {
        if(visited[i]) continue;
        a[cur] = i;
        visited[i] = true;
        recur(cur + 1);
        visited[i] = false;
    } 
    return;
}

int main () {
    cin >> k;

    for (int i = 0; i < k; i++) cin >> inequal[i];

    // recur 안에서 출력할 순열을 모두 처리하는 것. 우선 순열을 만들고 출력하는 코드 먼저 만들기
    recur (0);

    for (int i = 0; i < k+1; i++) cout << a2[i];
    cout << '\n';
    for (int i = 0; i < k+1; i++) cout << a3[i];
    return 0;
}

/*
    우선,  순열을 만들고, 그걸 계속 갱신해가는 것
    
*/



#include <iostream>

using namespace std;

int n;
int result[100];
bool isFinished = false;

bool isPossible (int idx, int len) {
    for (int i = 0; i < len; i++) {
        if(result[idx - i] != result[idx - i -len]) return true;
    }

    return false;
}
/*
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
(idx - 2 * len + 1 + i)
*/
void recur (int x) {
    if(isFinished) return;

    if(x >= n) {
        for (int i = 0; i < n; i++) cout << result[i];
        cout << '\n';
        isFinished = true;
        return;
    }

    for (int i = 1; i <= 3; i++) {
        result[x] = i;

        bool flag = false;
        for (int j = 1; j <= (x+1)/2; j++) { // 부분 수열의 길이를 나타내는 부분 
            if (!isPossible(x, j)) {
                flag = true;
                break;
            }
        }
        if(!flag) continue;

        recur(x+1);
        // 가능한지 체크, 가능하다면 getResult(x+1);
        // 이 방식으로 마지막에 추가된 숫자가 포함된 부분 수열이 가능한 수열인지 체크 하면 됨.
    }

    return;
}

int main () {
    cin >> n;

    recur (0);

    return 0;
}

/*
    길이가 N인 수열들 가운데, 인접한 부분수열이 중복되지 않게...! ㄷㅅㄷ
    그럼 인접한 부분 수열 생각하지 말고, N자리 수열을 출력하는 함수를 만들어봅시다.

    => 수열을 만드는 게 먼저가 아니라, 조건에 맞게 하나씩 채워가는 방식이네.
*/



/*
한 자리씩 체크하면서 채우기
*/

#include <iostream>

using namespace std;

int n;
int a[100];

bool isPossible (int idx, int len) {
    for (int i = 0; i < len; i++) {
        if (a[idx-i] != a[idx-i-len]) return true;
    }
    return false;
}

void recursive(int x) {
    if (x == n) {
        for (int i = 0; i < n; i++) cout << a[i];
        cout << '\n';
        return;
    }

    for (int i = 1; i <= 3; i++) {
        bool flag = false;
        a[x] = i;

        for (int j = 1; j; j++) {
            if(isPossible(x, j)) flag = true;
        }
        // 자릿수 => 근데 맨 마지막에 들어간 a[x]에 대한 값들이 포함된 부분수열들만 체크해야 하기 때문에..
        if (flag) recursive(x+1);
    }
}

int main () {
    cin >> n;
    recursive(0);

    return 0;
}


#include <iostream>

using namespace std;
int n,  a[100];

void recur(int x) {
    
    if (x == n) {

    }

    for (int i = 1; i <= 3; i++) {
        
    }


}

int main () {

    cin >> n; //자릿수 입력받기



    return 0;
}




