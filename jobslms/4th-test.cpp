#include <iostream>
#include <stack>

using namespace std;

int n;
int a[100010],r[100010],l[100010];
stack<int> idx;

int main () {
    int mx, area;
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> a[i];

    // 왼쪽에서 작아지는 지점 찾기

    idx.push(0);
    a[0] = -1;

    for (int i = 1; i <= n; i++) {
        if(a[idx.top()] >= a[i]) idx.pop();
        l[i] = idx.top();
        idx.push(i);
    } 
    
    // 스택 비우기
    while (!idx.empty()) idx.pop();
    
    idx.push(n+1);
    a[n+1] = -1;

    // 오른쪽에서 낮아지는 구간 찾기
    for (int i = n; i > 0; i--) {
        if (a[idx.top()] >= a[i]) idx.pop();
        r[i] = idx.top();
        idx.push(i);
    }
    mx = 0;
    for (int i = 1; i <= n; i++) {
        area = a[i] * (r[i] - l[i] - 1);
        if(mx < area) mx = area;
    }

    cout << mx;
    return 0;
}








/*공묶음 내  코드 ㅠ*/

#include <iostream>
#include <algorithm>

using namespace std;

int n, k;
int arr[10010];
int dp[10010];

int main() {
  
  cin >> n >> k;
  
  for (int i = 1; i <= n; i++) cin >> arr[i];
  sort(arr, arr+n);
  dp[1] = 1;
  
  for (int i = 2; i <= n; i++) {
    
    for (int j = 1; j < i; j++) {
      
      if (arr[j] == 0) continue;
      
      if (arr[i] - arr[j] > k) {
        dp[i] = dp[i-1];
        arr[i] = arr[j] = 0;
        break;
      } 
    }
    
    if(dp[i] == 0) dp[i] = dp[i-1] + 1;
  }
  cout << dp[n];

  return 0;
}