
// #include<iostream>
// using namespace std;
// int main(){

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int n,m;
// int arr[100010];
// int prefix[10010];


// int main(){
//     int a, b;
//     // 입력

//     cin >> n >> m;

//     // 시작점에 이전 정보를 이용하기 위해 맨 앞에 0을 붙인다.
//     for(int i=1; i <= n; i++) cin >> arr[i];
//     // 누적합을 먼저 구해 놓는다.
//     for(int i = 1; i <= n; i++) {
//         prefix[i] = prefix[i-1] + arr[i];
//     }
//     // m번의 쿼리 처리(쿼리 개수 처리시 기본)
//     while (m--) {

//     }
//         //입력
//         //구간 get

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){

//     return 0;
// }


// #include<iostream>

// using namespace std;



// int main(){
//     int n;
//     cin >> n;
// char arr[100010];       // 입력창의 R, P, S 입력
// int prefix[100010][3]; //누적합을 나타낼 배열
// // 누적합 배열 만들기
// // 전의 값을 가져와 비교한 후 필요한 값만 변화 시켜 나간다.
//     for(int i=1; i<= n; i++){
//         for(int j= 0; j < 3 ; j++) { // 바위, 보, 가위
//             prefix[i][j] = prefix[-1][j]; // 이전 값을 덧씌운다
//         }
//         if(arr[i]=='R') prefix[i][0];
//         else if(arr[i]=='P') prefix[i][1]++;
//         else  prefix[i][2]++;
        
//         }
//     return 0;
// }



// /*누적합 => 가위바위보*/
// #include<iostream>
// using namespace std;

// int n;
// char arr[100010];
// char prefix[100010][3];

// int main(){

//     int ans;
//     int l, r;

//     cin >> n;
//     for(int i=1; i <= n; i++) cin >> arr[i];

//     for (int i=1; i <= n; i++) {
//         // 이전 위치 값을 i에 넣는다
//         for(int j = 0; j <3; j++) {
//             prefix[i][j]= prefix[i-1][j];
//         }
// // 현재 R, P, S이면 +1
//         if(arr[i]=='R') prefix[i][0];
//         else if(arr[i]=='P') prefix[i][1]++;
//         else  prefix[i][2]++;
//     }


//     // i까지 바꾸기 전 PRS 최대 개수 l, 바꾼 후 RPS 최대 r
//     // 답은 l+r;
//     // 안 바꾸는 경우?
//     //  바꾸기 전의 최대 R, 바꾼 후 최대도 R일 때

//     ans = 0;
//     for(int i=1; i<= n; i++){
//         l=prefix[i][0];
//         if()
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int n, m, q;
// int arr[1010][1010];
// int prefix[1010][1010];

// int main(){
//     int a, b, c, d;
// // 입력
//     cin >> n >> m >> q;
// // 왼쪽, 위쪽을 0으로 둔다.
//     for(int i = 1; i <=n; i++) {
//         for(int j=1; j<=m; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     // 누적합 2차원 배열 만들기 
//     for(int i = 1; i <=n; i++) {
//         for(int j=1; j<=m; j++) {
//             prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1]+arr[i][j];
//         }
//     } // 과정 한 번 확인해보기

//     // q개의 쿼리
//     while(q--) {

//         cin >> a >> b >> c >> d;
//         // 질문의 인덱스를 하나씩 늘린다.
//         a++;
//         b++;
//         c++;
//         d++;
// // 구간 get을 점 get으로 바꿔서 출력
//         cout << prefix[c][d] - prefix[c][b-1] - prefix[a-1][d] + prefix[a-1][b-1] << endl; 
//     }

//     return 0;
// }

// /*i가 1부터 시작한다고 했을 때, */



// /*직사각형의 서로 다른 수의 개수*/
// // 2차원 구간안의 카운팅 누적합 배열
// // 2차원 누적합에 관한 문제가 아주 많이 나오는 추세!

// for(int i=1; i <= n; i++) {
//     for(int j=1; j<=n; j++) {

// // k는 1 ~ 10
//         for(int k=1; k <=10; k++) {
//             // 이전값 가져오기
//             prefix[i][j][k] = prefix[i][j-1][k] + prefix[i-1][j][k] - prefix[i-1][j-1][k];
//         }
// // 현재 값 추가하기
// // for 문 안에서 if(arr[i][j]==k) prefix[i][j][k]++;
//     prefix[i][j][arr[i][j][k]]++;
//     }
// }



// #include<iostream>
// using namespace std;
// int n;
// int arr[310][310];

// // 구간 안의 카운팅(1~10) 배열을 누적합한다.
// int prefix[310][310][20];


// int main(){

// int q;
// int a,b,c,d;
// int cnt;

//     cin>> n;
//     // 0번은 비워둔다.
//     for(int i=1; i <=n; i++) {
//         for(int j=1; j<=n;j++) cin >> arr[i][j];
//     }
//     // 2차원 구간안의 카운팅 누적합 배열
  
//     for(int i=1; i <=n; i++) {
//         for(int j=1; j<=n;j++) {
//             for(int k = 1; k <= 10; k++) {
//             // 이전 값 가져오기
//                 prefix[i][j][k] = prefix[i][j-1][k] + prefix[i-1][j][k] - prefix[i-1][j-1][k];
//             }
//             // 현재 값 추가하기
//             prefix[i][j][arr[i][j]]++;
//         }
//     }

//     cin >> q;

//     while (q--)
//     {
//         cin >> a >> b>> c >> d;
//         cnt = 0;
//         // 서로 다른 수들의 개수 구하기
//         // 1~10까지의 구간 get(점 get) 값이 존재(!=0)하면 c++
//         for(int i=1; i <=n; i++) {
//             if(prefix[c][d][i]-prefix[c][b-1][i]-prefix[a-1][d][i]+prefix[a-1][b-1][i]!=0) cnt++;
//         }
//         cout << cnt << endl;
//     }
    
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int n, k;
// int arr[100010];

// int main(){
//     int s, e;
//     int cnt;
//     int sum;
    
//     cin >> n >> k;

//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
// // 투 포인터


//     return 0;
// }



// #include<iostream>
// using namespace std;

// int n, k;
// int arr[100010];

// int main(){
//     int s, e;
//     int sum;
//     int mn;

//     cin >> n >> k;

//     for( int i = 0 ; i < n ; i++) cin >> arr[i];

//     s=0;
//     e=0;
//     sum = arr[0];

//     mn = 100000000;

//     while ( e < n ) {
        
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;
// int t; 
// string s[1000];



// int main() {
//   string alfa[] = {"a", "b", "c", "d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","g"};
//   int cnt;
//   bool check;

//     for (int i = 0; i < 26; i++){ 
//         cnt = 0;
//         for (int j = 0; j < 26; j++) {
//             for (int k = 0; k < 26; k++) {
//                 if( j == k ) continue;
//                 if(cnt == i) {
//                     s[i] = alfa[j]+alfa[k];
//                 }
//                 cnt++;
//             }
//         }
//     }
//   //Please Enter Your Code Here
 

//   return 0;
// }


// #include <iostream>
// using namespace std;

// int n, m, q, d, r, x, y;
// int a[110][110];
// int toMove[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

// int main () {
//     int futureX, futureY;
//     cin >> n >> m >> q;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)  {
//             cin >> a[i][j];
//         }
//     }


//     x=0, y=0;


    
//    while (q--)
//    {
//     cin >> d >> r;

//     for (int i = 0; i < r; i++) {
//         futureX = x + toMove[d][0];
//         futureY = y + toMove[d][1];

//         if (futureX < 0 || futureX > n-1) break;
//         if (futureY < 0 || futureY > m-1) break;
//         if (a[futureX][futureY] == -1) break;

//         x += toMove[d][0];
//         y += toMove[d][1];

//     }
//         cout << a[x][y] << endl;
//    }
   

//     return 0;
// }


// /*
// 가장 왼ㅗ 위 칸 (0,0) 가ㅇ 오른쪽 아래 칸 => (n-1, m-1) 
// q변의 질문에 대한 답
// 각 질문이 d, r => 이전 출력 위치를 ( y, x)라고 할 때, 이 지점에서 d 방향으로 r만큼 이동한 위치의 값 출력
// d = 0 => 오른쪽 y++
// d = 1 => 왼쪽 y--
// d = 2 => 아래쪽 x++
// d = 3 => 위쪽 x--
// 이동 과정에서 -1을 만나거나 배열의 범위 밖으로 나가려고 할 경우, 그 이전 자리에서 멈춘다. 
// if( 이동했을 때 좌표 == -1 || (x > m-1 && x < 0 && y > n-1 && x > 0) ) break;

// */



// #include <iostream>
// using namespace std;

// int n, m, q, d, r, x, y;
// int a[110][110];
// int dx[4] = {0, 0, 1, -1};
// int dy[4] = {1, -1, 0, 0};



// int main () {
//     int nx, ny;
//     cin >> n >> m >> q;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)  {
//             cin >> a[i][j];
//         }
//     }


//     x=0, y=0;
    
//     while (q--)
//     {
//         cin >> d >> r;

//         nx = x + dx[d];
//         ny = y + dy[d];

//         if (nx > m-1 || nx < 0 || ny > n-1 || ny < 0) break;
//         if (a[nx][ny] == -1) break;

//         x = nx;
//         y = ny;

//         cout << a[x][y] << endl;
//     }
    

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int r, c, k, dir;
// int a[1010][1010];
// int dx[4] = {0, 1,0,-1};
// int dy[4] = {1, 0,-1,0};
// bool check;

// int main ( ) {
//     int x, y;

//     cin >> r >> c >> k;

//     x = 0, y = 0;
//     dir = 1;
//     for (int i = 1; i <= r*c; i++){
//         x += dx[dir];
//         y += dy[dir];

//         a[x][y] = i;

//         if (x % c == 0 || y % r == 0) dir = (dir + 1) % 4;
//     }

//     for (int i = 1; i < r; i++) {
//         for (int j = 1; j < c; j++) {
//             cout << a[i][j] << ' ';
//         }   
//         cout << endl;
//     }

//     return 0;
// }

// // 0일 때 y++, 1일때 x++, 2일 때 y--, 3일 때 x--




// #include <iostream>
// using namespace std;

// int r, c, k, dir;
// int dx[4] = {0, 1,0,-1};
// int dy[4] = {1, 0,-1,0};
// bool check;

// int main ( ) {
//     int x, y;
//     int nx, ny;

//     cin >> r >> c >> k;

//     x = 1, y = 1;
//     dir = 0;
    
//     for (int i = 1; i <= r*c; i++){
        
        
//         // if (i == k) {
//         //     cout << x << ' ' << y;
//         //     break;
//         // }
//         nx = x + dx[dir];
//         ny = y + dy[dir];
        
//         cout << x << ' ' << y;
        
//         if (nx % r == 0 || ny % c == 0) dir = (dir + 1) % 4;
        
//         x = nx;
//         y = ny;
//     }

//     return 0;
// }

// // 0일 때 y++, 1일때 x++, 2일 때 y--, 3일 때 x--


// /*
//     4. 예제 - 중복된 아이디
// */
// #include <iostream>
// #include <map>
// using namespace std;

// int main () {

//     int n;
//     string s;
//     map<string, bool> visited;
//     string p;
//     bool flag;

//     cin >> n >> s;

//     // 최소 길이는 1부터 (만족하는 i가 최소의 k 값) 
//     for (int i = 1; i <= n; i++){ 
//         flag = true; // 이번 길이 i에서는 된다. 즉, 이번이 답이다 가정
//         // i=1이면 마지막 시작점은 n-1
//         // j를 이동하며 문자열 전체에 길이 i짜리 문자열을 체크한다.
//         for (int j = 0; j < n-i+1; i++) {
//             p = ""; // p는 비워둔다.
//             for(int k = 0; k < i; k++) {
//                 p += s[j + k]; // j는 시작점 k는 길이만큼 한 글자씩 합친다.
//             }
//             if (visited[p]) flag = false; // true인 p가 나왔다면 이번에 정답이 아니다.
//             // visited["처음단어"] = 0 즉, false이다.
//             visited[p] = true; //처음 나오면 true 
//         }

//         if(flag) {
//             cout << i;
//             break;
//         }

//     }

    

//     return 0;
// }




// /*

// */

// #include <iostream>
// #include <map>
// using namespace std;

// int n,k;
// int arr[200010];
// long long prefix[20010]; // 20억 근처이므로 불안하니까 long long 사용!
// map<long long, int> cnt; // O(log N)

// int main () {

//     long long ans;

//     cin >> n >> k;

//     for (int i = 1; i <= n; i++) cin >> arr[i];

//     for (int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + arr[i];

//     ans = 0;

//     for (int i = 1; i <= n; i++) {
//         ans += cnt[prefix[i]-k];
//         cnt[prefix[i]]++;
//     }

//     cout << ans;

// }


// void recur (int cur, int cnt) {
//     if(cur == m) { // 재귀 리턴 조건
//         if(cnt == n) { // 출력 조건
//             for (int i = 0; i < n; i++) {
//                 cout << arr[i] << ' ';
//             }
//             cout << endl;
//         }

//         return;
//     }

//     arr[cnt] = cur;
//     recur(cur + 1, cnt + 1);

//     recur(cur + 1, cnt);
// }

// int main () {

//     recur (0, 0);
// }

// /*
// <매개 변수>
// cur : 몇을 쓸지 말지 결정
// cnt : 1이 지금까지 몇 개인지 넘기기

// <기저 조건>
// cur == m : m이면 리턴
// cnt == n : 1이 n개이면 출력
// */

// #include <iostream>
// using namespace std;

// int n, m;
// int arr[50];

// // void recur (int cur, int start) {
// //     if(cur == m) { // 재귀 리턴 조건
// //         if(cnt == n) { // 출력 조건
// //             for (int i = 0; i < n; i++) {
// //                 cout << arr[i] << ' ';
// //             }
// //             cout << endl;
// //         }

// //         return;
// //     }

// //     arr[cnt] = cur;
// //     recur(cur + 1, cnt + 1);
// //     recur(cur + 1, cnt);
// // }


// int main () {
    
    
//     int mn = 1000000000;
//     int idx = 0;
    
//     for (int i = 0; i < 9; i++) {
//         if( mn > arr[i]) {
//             mn = arr[i];
//             idx = i;
//         }
//     }
    
//     arr[idx] = 1000000000;

//     mn = 1000000000;
//     int idx2 = 0;

//     for (int i = 0; i < 9; i++) {
//         if(mn > arr[i]) {
//             mn = arr[i];
//             idx2 = i; 
//         }
//     }
    
    
//     return 0;




// }




// #include <iostream>

// using namespace std;

// int n; //학생 수
// int arr[1010][5]; // 해당 학생이 몇 반이었는지 담는 배열
// int f[1010] = {0}; // 친구 수 세는 곳

// bool check[1010][1010]; // 같은 반이 된 적이 있는지 담는 배열

// int main () {
//     int max_f, idx;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < 5; j++) cin >> arr[i][j];
//     }

//     for (int i = 0; i < 5; i++) { // 학년 별
//         for (int j = 1; j <= n; j++) { // 비교 기준 학생
//             for (int k = 1; k <= n; k++) { // 비교 대상 학생
//                 if(j == k) continue;

//                 if(arr[j][i] == arr[k][i]) check[j][k] = true;

//                 cout << "arr[j][i] : " << arr[j][i] << " arr[k][i]" << arr[k][i] << endl;
                
//                 else check[j][k] = false;
//             }
//         }
//     }

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (check[i][j]) f[i]++;
//         }
//     }

//     max_f = -1;
//     idx = -1;


//     return 0;
// }

// /*
//         !같은 반이었던 사람이 가장 많은 학생!

//         한 학생이 한 학년에서 다른 학생들과 같은 반이 된 적이 있는가 => 3중 for문...?


// */



// #include <iostream>
// #include <map>

// using namespace std;
// int n, k;
// string s, p;
// bool flag;
// map<string, bool> visited;

// int main () {
//     cin >> n >> s;

//     // 길이
//     for (int i = 1; i <= n; i++) {
        
//         flag = true;
        
//         for (int j = 0; j < n-i+1; j++) { 
//             p = ""; // 문자열 초기화
//         // 체크할 부분 문자열의 시작점, 탈출 조건 : n-i+1 만약 길이가 2인 문자열이면 n-2 가 마지막 시작점
//             for (int k = 0; k < i; k++) {
//                 p += s[j+k];  // 시작점부터 i개의 char 붙이기 -> 원하는 부분 문자열 만들어주는 반복문
//             }
//             // 만약 visited[p]가 이미 true 일 경우, 중복되는 문자열이 있는 것이기 때문에 정답이 될 수 없음!
//             if(visited[p]) flag = false;
//             visited[p] = true;
//         }

//         if (flag) {
//             cout << i;
//             break;
//         }
//     }


//     return 0;
// }



// #include <iostream>
// #include <map>

// using namespace std;

// int n, k, ans;
// int a[200100];
// long long prefix[200100];
// map<long long, int> cnt;

// int main () {
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//         prefix[i] = prefix[i-1] + a[i];   
//     }

//     ans = 0;

//     for (int i = 1; i <= n; i++) {
//         ans += cnt[prefix[i]-k];
//         cnt[prefix[i]]++;
//     }

//     return 0;
// }

// /*
//     1 ≤ l ≤ r ≤ N | 배열 내, l부터 r까지의 합이 k가 되는 모든 (l, r) 쌍의 개수 구하기
// */

// // a + b = k;
// // (k - prefix[i]) 인 수를 찾는 거야








// /*
// 지니, 우니, 알랩 => all solve

// 최종 등수 가리기!
// 공 n개씩 뽑기 -> 

// 1명만 뽑았을 때 => 그 사람은 3점을 얻는다.

// 2명만 뽑았을 때, 이 두 명은 1점씩 얻는다.

// 3명 다 뽑았을 때 => 아무도 점수를 얻지 못한다.
// */


// #include <iostream>
// #include <map>

// using namespace std;

// int n;
// string ball[3][1010];
// map<string, int> cnt; 
// int score[3];
// int a[4] = {0, 3, 1, 0};

// int main () {
//     cin >> n;

//     for (int i = 0; i < 3; i++ ) {
//         for (int j = 0; j < n; j++ ) {
//             cin >> ball[i][j];
//             cnt[ball[i][j]]++;
//         }
//     }

//     for (int i = 0; i < 3; i++ ) {
//         for (int j = 0; j < n; j++ ) {
//             score[i]+=a[cnt[ball[i][j]]];
//         }
//     }

//     for (int i = 0; i < 3; i++ ) cout<<score[i]<<' ';


//     return 0;
// }




// #include <iostream>
// #include <map>

// using namespace std;

// int n;
// char alfa[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
// string bio[100100];

// map<char, int> cnt; // 발현색 저장하는 곳


// int main () {
//     char dis;
//     cin >> n;

//     for (int i = 0; i < n; i++) cin >> bio[i];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if( i == j ) continue;
//             dis = bio[i][0] < bio[j][1] ? bio[j][1] : bio[i][0];
//             cnt[dis]++;
//         }
//     }
    
//     cout << cnt.size() << '\n';

//     for (int i = 0; i < 26; i++) if(cnt[alfa[i]] > 0) cout << alfa[i] << ' ';

//     return 0;
// }


// /*
//     과학계의 새로운 생물
//     동그랗고, 좌..우 색이 달라 => 가능한 색 26개 
//     알파벳 대문자로 대응 => 
//     교배 시, 왼쪽 생물의 왼쪽 색이 자식의 왼쪽에 오른쪽 생물의 오른쪽 색이 자식의 오른쪽에
//     알파벳으로 뒤쪽에 있는 색이 발현색 => 발현색 종류의 수와 발현색 

//     합칠 필요는 없고, 발현색을 구해서 map에 저장해놓기

//     => Time limit
// */


#include <iostream>
#include <map>

using namespace std;

int n;
char alfa[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char f[10010];
char b[10010];
string s;

map<char, int> cnt; // 발현색 저장하는 곳
map<char, bool> mother; // 발현색 저장하는 곳


int main () {
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        f[i] = s[0];
        b[i] = s[1];

    }



    return 0;
}

/*

*/



void recur (int line) {
    //  1,2,3번 라인 피라미드 출력
    if (line == n + 1) return;
    // 한줄은 공백 + 별
    // 공백 출력
    for (int i = 0; i < n-line; i++ ) {
        cout << ' ';
    }
    // 별 출력
    for (int i = 0; i < 2 * line - 1; i++ ) {
        cout << '*';
    }
    // 개행
    cout << '\n';

    recur (line + 1);
    // 역피라미드는 역방향 출력
    if (line == n + 1) return; //n일때만 출력 안함
    for (int i = 0; i < n - line; i++ ) {
        cout << ' ';
    }
    for (int i = 0; i < 2 * line - 1; i++ ) {
        cout << '*';
    }
    cout << '\n';
}



#include <iostream>

using namespace std;

int n;

void recur (int line) {
    if (line == n) return;

    for (int i = 0 ; i < n - line; i++) {
        cout << ' ';
    }  // 공백 출력

    for (int i = 0 ; i < 2 * line + 1; i++) {
        cout << '*';
    } // 별 개수 출력
    
    cout << '\n';

    recur (line + 1);

    for (int i = 0 ; i < n - line; i++) {
        cout << ' ';
    }  // 공백 출력

    for (int i = 0 ; i < 2 * line - 1; i++) {
        cout << '*';
    } // 별 개수 출력
    
    cout << '\n';
}

int main() {
    cin >> n;
    recur (0);
    return 0;
}



#include <iostream>

using namespace std;

int n;
// 전역변수 : 다른 함수에서도 접근 가능
// 파라미터 n을 줄여 쓸 수 있다.

void recur (int line) {
    //  1,2,3번 라인 피라미드 출력
    if (line == n + 1) return;
    // 한줄은 공백 + 별
    // 공백 출력
    for (int i = 0; i < n-line; i++ ) {
        cout << ' ';
    }
    // 별 출력
    for (int i = 0; i < 2 * line - 1; i++ ) {
        cout << '*';
    }
    // 개행
    cout << '\n';

    recur (line + 1); // 역피라미드는 역방향 출력
    if (line == n) return; //n일때만 출력 안함

    for (int i = 0; i < n - line; i++ ) {
        cout << ' ';
    }
    for (int i = 0; i < 2 * line - 1; i++ ) {
        cout << '*';
    }
    cout << '\n';
}

int main() {
    cin >> n;
    recur (1);

    return 0;
}



#include <iostream>

using namespace std;

string isPalindrom (string s) {
    string ans = "YES";

    for (int i = 0; i < s.length()/2; i++) {
        if(s[i] != s[s.length() - 1 - i]) ans = "NO";
    }

    return ans;
}

int main () {
    string s;

    cin >> s;

    cout << isPalindrom(s);

    return 0;
}

/*
    만약 길이가 4
    0,3
    1,2

    만약 길이가 5
    0, 4
    1, 3
    2
*/


#include <iostream>

using namespace std;

string st;

// 팰린드롬인지 아닌지 리턴하는 함수
bool is_palin (int s, int e) {
    // 종료 조건 : s = e 혹은 s > e이면 팰린드롬
    if (s >= e) return true;
    // 끝이 오기 전에 양 끝이 다르면 팰린드롬 아님!
    if ( st[s] != st[e] ) return false;
    // 양쪽이 같다면 안쪽도 같은지 확인하러 들어간다.
    is_palin(s+1, e-1);
}

int main ( ) {
    cin >> st;
    // 호출은 어떻게 ? 양 끝은 0과 st.length() - 1
    if(is_palin(0, st.length()-1)) cout << "YES"; 
    else cout << "NO";
    return 0;
}


#include <iostream>

using namespace std;



int main () {

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {

            for (int k = 0; k < 5; k++) cout << i << j << k << '\n';

        }

    }


    return 0;
}


int n, m;
int arr[50];

void recur (int cur) {
    if (cur == n) {
        for (int i = 0 ; i < n; i++) cout << arr[i];
        cout << '\n';
        return;
        
    }

    for (int i = 0; i < m; i++) {
        arr[cur] = i;
        recur(cur+1);
    }
}

int main () {
    cin >> n >> m; // n=3, m = 3 일때
    recur (0);
}








#include <iostream>

using namespace std;

int arr[50];

void recur (int cur, int start) {
    if(cur == n) {
        for (int i = 0; i < n; i++) cout << arr[i];
        cout << '\n';

        return;
    }

    for (int i = start; i < m; i++) {
        arr[cur] = i;
        recur (cur + 1);
    }
}

int n;
int arr[110];
char inequal[110];
bool visited[110];
// 순열코드 => 방문처리
void recur (int cur) {
    if (cur == n + 1) { // 길이는 부등호 개수보다 많은 n+1 출력
    // 조건에 맞는 수열 잘라내기
        for (int i = 0; i < n + 1; i++) {
        /*
            - 0번 부등호는 `arr[0]`,`arr[1]`을 비교
            - 1번 부등호는 `arr[1]`,`arr[2]`를 비교한다.
            - 부등호 방향이 반대이면 리턴
        */
            if (inequal[i]=='<' && arr[i] > arr[i+1]) return;
            if (inequal[i]=='>' && arr[i] < arr[i+1]) return;

        }
        for (int i = 0; i < n + 1; i++) cout << arr[i];
        cout << '\n';

        return;
    }
    // 0부터 9까지 채운다.
    for (int i = 0; i < 10; i++) {
        if(visited[i]) continue;
        arr[cur] = i;
        visited[i] = true;
        recur (cur + 1);
        visited[i] = false;
    }

}



int main () {
    cin >> n;
    // 부등호를 입력 받기
    for (int i = 0; i < n; i++) cin >> inequal[i];

    recur(0);

    return 0;
}




#include <iostream>
using namespace std;

int n;
char inequal[110];
int arr[110];
int arr2[110];
int arr3[110];
bool visited[110];
bool printed;
// 순열코드 => 방문처리
void recur (int cur) {
    if(cur == n+1) {
        for (int i = 0; i<n+1; i++) {
    // 0번 부등호는 arr 0,1을 비교, 1번 부등호는 arr 1,2번 비교
    // 부등호 방향이 반대이면 리턴
            if(inequal[i] == '<' && arr[i] > arr[i+1]) return;
            if(inequal[i] == '>' && arr[i] < arr[i+1]) return;
        }
    // 맨 앞 출력? 한번이라도 출력 (저장)한 적이 없다면 arr3에 저장하고 true
        if (!printed) {
            for (int i = 0; i < n+1; i++) {
                arr3[i] = arr[i];
            }
            printed = true;
        }

        for(int i = 0; i < n + 1; i++) {
            arr2[i] = arr[i];
        }
        return;
    }
// 마지막 출력하기 위해서 계속해서 마지막 값을 출력한다.
    for (int i = 0; i < 10; i++) {
        if(visited[i]) continue;
        arr[cur] = i;
        visited[i] = true;
        recur (cur + 1);
        visited[i] = false;
    }

    return;
}



int main () {
    cin >> n;
    // 부등호를 입력 받기
    for (int i = 0; i < n; i++) cin >> inequal[i];

    recur(0);

    for (int i = 0; i < n+1; i++) cout << arr2[i];
    cout << '\n';
    for (int i = 0; i < n+1; i++) cout << arr3[i];

    return 0;
}













#include <iostream>

using namespace std;
int n, k;
string s;
bool canNotBeK;
map<string, int> m;
map<string, bool> check;

int main() {
  string p;
  cin >> n >> s;
  k = 0;
  //Please Enter Your Code Here
  for (int i = 1; i <= n; i++) { // 개수 정하는 것
    canNotBeK = false;
    for (int j = 0; j <= n-i+1; j++) { // 시작점
        p = "";
        for (int k = j; k < j+i; k++) { // 끝점
            p += s[k];
        }
        if(check[p]) {
            canNotBeK = true;
            break;
        }
        check[p]=true;
    }
    if(canNotBeK) continue;
    else{
        k = i; 
        break;
    }
  }

    cout << k;
  return 0;
}

int main () {


    return 0;
}
