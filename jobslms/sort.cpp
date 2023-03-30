

#include<iostream>
using namespace std;
int main(){

    return 0;
}


/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@3주차@@@@@@@@@@@@@@@@@@@@@@@@@@
*/


#include<iostream>
using namespace std;
/*
    오름차순 정렬 구현
    (1 <= N <= 1000)
    (1 <= A[i] <= 10^9)
*/
int main () {
    int n;
    int arr[1010];
    //배열 입력
    cin >> n;
    for(int i= 0; i < n; i++ ) {
        cin >> arr[i];
    }
    //n 번 진행, -i + n -1번 앞이 크면 교환
    for(int i=0; i< n; i++) {
        for(int j= 0 ; j < -i +n-1 ; j++) {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // 출력
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}
//2. 문제 정렬 1






#include<iostream>
using namespace std;

int main(){
    int n, k; 
    int arr[100010];

    cin >> n >> k;
    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i< k ; i++) {
        for(int j=0; j< -i + n-1 ; j++) {
            if(arr[j] > arr[j+1]) swap(arr[j] , arr[j+1]);
        }
    }

    cout << arr[n-k];
    return 0;
}
//3. k번째 큰 수 찾기





/* 코드구현 - 정렬하기2*/

#include<iostream>

using namespace std;

int n;
int arr[100010];
int temp[100010];

    //합병정렬 재귀합수 만들기

void sort ( int s, int e) {

    int mid = (s+e) / 2;
    int l, r;
    int idx=0;

    if(s >= e) return;
    // 진행할수록 중간으로 모이니까! 
    // 왼쪽 정렬
    sort(s, mid); //1. 왼쪽을 계속 반으로 나눈다. 2. 리턴
    //오른쪽 정렬
    sort(mid+1, e); //3. 오른쪽을 계속 반으로 나눈다. 4. 리턴
    // 5. 좌우 수열을 합친다.

    l = s; // 왼쪽 수열의 첫번째
    r = mid+1; // 오른쪽 수열의 첫번째

//작은 값들 뽑아 정렬하기. 단, 양쪽에 수가 있는 동안
    while(l <= mid && r <= e) {
        if(arr[l]<arr[r]) temp[idx++] = arr[l++];
        else temp[idx++] = arr[r++];
    }

    //오른쪽 수열이 다 뽑히면 왼쪽 수열의 나머지 합치기
    while (l <= mid) temp[idx++] = arr[l++];
    
    //왼쪽 수열이 다 뽑히면 오른쪽 수열의 나머지 합치기
    while (r <= e) temp[idx++] = arr[r++];

    for(int i = 0; i < idx ; i++) {
        arr[s+i] = temp[i];
    }
}




int main(){
    cin >> n;
    for(int i = 0; i<n; i++) cin >> arr[i];

    sort(0, n-1);
    for(int i=0; i < n; i++ ) cout << arr[i] << ' ';
    return 0;
}


/*계수정렬*/



#include<iostream>
#include<algorithm>

using namespace std;

int n;
int arr[500010];
int cnt[1010];

int main(){
    cin >> n;
for(int i =0; i<n;i++) cin >> arr[i];
for(int i =0; i<n;i++) cnt[arr[i]]++;

for(int i=0; i< 1010; i++){
    for(int j=0; j < arr[i]; j++) {
        cout << i << ' ';
    }
}


    return 0;
}


/* 6. 문제 - 숫자 팬그램 */
#include<iostream>
using namespace std;
int cnt[10]; // 0~9 저장


int main(){
    int T;
    int n;
    int x;
    bool counted;

    cin >> T;
    for(int t=1; t<=T; t++){
        for(int i=0; i<10; i++) {cnt[i]=0;}

        cin >> n;
        // i = n, 2*n, 3*n... 될때까지 무한 루프
        for(int i=n;; i+=n) {
            int x = i;
//  x의 일의 자리, 십의 자리 순으로 분해해서 카운트
            while (x>0)
            {
                cnt[x%10] ++;
                x /= 10;
            }
            
            // 0~9가 모두 있는 지 확인하기
            counted = true;
            for(int j = 0; j < 10 ; j++) {
                if(cnt[j]==0) counted = false; //하나라도 카운트가 안되었다면 false
            }
            //모두 카운트 뒤면 출력, 아니면 반복하며 cnt 누적
            if(counted) {
                cout << '#' << t << ' ' << i << '\n';
                break;
            }
        }
    }
    return 0;
}

/*
273 일의 자리 3
27 일의 자리 7
2 일의 자리 2
*/

//





#include<iostream>
using namespace std;
int main(){

    int n, q; // n : 숫자 개수  // q : 질문 개수; 
    int arr[10010];
    int s, e;
    int mid;
    int x;
    bool found;

    cin >> n >> q;
    for(int i=0; i< n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i <q ; i++) {
        cin >> x;

        s=0;
        e = n-1;
        found = false;

        while(s<=e) {
            mid = (s+e)/2;
            //찾으면 출력 후 반복 중단
            if(arr[mid]==x){
                found =true;
                break;
            }
        // 중간값이 타겟보다 작으면 왼쪽 버림
            else if (arr[mid] < x){
                s=mid+1;
            }
        // 중간값이 타겟보다 크다면 오른쪽 버림
            else {
                e = mid - 1;
            }
        }
        if( found ) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}

/* 코드 구현 - lower bound -쿼리 1개 */



#include<iostream>
using namespace std;

int n;
int arr[100010];

int main(){
    int q;
    int x;
    int s,e;
    int mid;
    int ans;
// 정렬된 배열 입력
    cin>> n;

    for(int i =0 ; i < n ; i++) cin >> arr[i];

    cin >> x;
// 탐색 구간
    s = 0;
    e = n-1;


    return 0;
}


/*
나무 자르기
*/



#include<iostream>
using namespace std;

int n, m;
int arr[10000100];
// 2. check(h)함수 "매개 변수" 만들기

bool check(int x) {
	long sum = 0; // 조건이 커질 경우를 대비해서 int 보다 더 큰 자료형인 long
// 만약 그렇지 않을 경우, 중간 과정 overflow를 주의!!
	for(int i=0; i< n; i++) {
		if(arr[i] > x) sum += arr[i]-x;
	}
	return sum >= m;
}


int main(){
    int s, e, mid, ans;
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cout << arr[i];
    }

    //1. 이진 탐색

    ans = 0;
    s=0, e = 1000000000;

    while(s<=e){
        mid = (s+e)/2;
        if(check(mid)){
            ans = mid;
            s=mid+1;
        }
    // 
        else e = mid-1;
    }
    // 최종 ans 출력
    // 최종 ans 출력
    cout << ans;


    return 0;
}



/*구간의 합집합*/



#include<iostream>
using namespace std;

int n;
int arr[10010][2];
long long v; //v번째 값


int main(){
    int s, e;
    int mid;
    int ans;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    cin >> v;

    //이진 탐색
    ans = 0;
    s = 0;
    e = 1000000000;

    while(s<=e) {
        mid = (s+e) / 2;
        //check(h)가 true이면 ans 갱신 저장, 왼쪽 버림
        if(check(mid)) {
            ans=mid;
            e=mid-1;
        }

        else s = mid + 1;
    }

    cout << ans;

    return 0;
}



#include <iostream>
using namespace std;

int n;
int arr[10010][2];
long long v;

bool check (int x) {
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        if(x < arr[i][0]) continue;
        else if(x <= arr[i][1]) {
            sum += x - arr[i][0] + 1;
        }
        else sum += arr[i][1] - arr[i][0] + 1;
    }
    return sum >= v;
}

int main () {
    int s, e;
    int mid;
    int ans;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    cin >> v;
    v++;

    ans = 0;
    s = 0;
    e = 1000000000;
    
    while (s<=e)
    {
        mid = ( s + e ) / 2;
        if(check(mid)) {
            ans = mid;
            e = mid-1;
        }
        else s = mid + 1;
    }
    cout << ans;
}