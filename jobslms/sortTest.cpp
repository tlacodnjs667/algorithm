#include <iostream>

using namespace std;

int n;
int arr[100010];
int temp[100010];

void sort(int s, int e) {
  int mid = (s+e) / 2; // 시작점과 끝점의 중간값
  int l, r;
  int idx = 0;

  if(s >= e) return; // 시작점이 끝점보다 작아야만 성립되기 때문

  sort(s, mid); // 1. 왼쪽을 계속 반으로 나누고, 리턴
  sort(mid, e); // 2. 오른쪽을 계속 반으로 나누고, 리턴
  //5 좌우 수열을 합친다.

  l=s; // 왼쪽 수열의 첫번째
  r=mid+1; // 오른쪽 수열의 첫번째
  
  // 작은 값들 뽑아 정렬하기, 단, 양쪽에 수가 있는 동안
  while(l <= mid && r <= e) {
    if(arr[l] < arr[r]) temp[idx++] = arr[l++];
    else temp[idx++] = arr[r++];
  }
  // 오른쪽 수열이 다 뽑히면 왼쪽 수열의 나머지를 합치기
  while (l <= mid) temp[idx++] = arr[l++];
  // 왼쪽 수열이 다 뽑히면 오른쪽 수열의 나머지를 합치기
  while (mid <= r) temp[idx++] = arr[l++];


  // 정렬된 수열이 모두 뽑히면 arr에 덮어 쓴다.

  for(int i=0; i<idx; i++) {
    arr[s+i] = temp[i];
  }

}

int main () {
  cin >> n;
  for(int i=0; i<n; i++)   cin>> arr[i];

  sort(0, n-1);

  for(int i =0; i<n; i++) cout << arr[i] <<' ';
  
  return 0;
}