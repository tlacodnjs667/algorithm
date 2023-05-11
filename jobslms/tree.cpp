#include <iostream>

using namespace std;

int main () {


    return 0;
}

/*트리 #1*/
/*
예제 - 트리의 높이
노드 개수 n과 루트 노드의 번호 r이 주어질 때,
*/








/*부모 노드 구하기*/

#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v[110];
int par[110]; // ㅜ모드 배ㄹ 
// 트리ㄴ DFS처럼

void dfs (int cur, int prev) {
    par[cur] = prev;
    for (int i = 0; i < v[cur].size(); i++) {
        if(v[cur][i] == prev) continue;

        dfs(v[cur][i], cur);
    }
    
}

int main () {
    int r, a, b;

    cin >> n >> r;

    for (int i = 0; i < n - 1; i++) { // 트리 문제 : 간선의 수는 항상 (노드 갯수 - 1)
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    } //여기까지 일반트리

    dfs(0, -1);

    for (int i = 0; i < n; i++) cout << i << ' ' << par[i] << '\n';

    return 0;
}

/*서브 트리 구하기 코드*/

#include <iostream>

using namespace std;

int n;
vector<int> v[110];
int sz[110];
 
void dfs (int cur, int prev) {
        sz[cur] = 1;
        for (int i = 0; i < v[cur].size(); i++) {
            if (v[cur][i] == prev) continue;

            dfs(v[cur][i], cur);
            sz[cur]+= sz[v[cur][i]];
        }

}

int main () {
    int r, a, b;

    cin >> n >> r;

    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(0, -1);

    for (int i = 0; i < n; i++) {
        cout << i << ' ' << sz[i] << '\n';
    }

    return 0;
}



/*
    만능코드
*/
#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v[110];
int par[110];
int depth[110];
int sz[110];

void dfs (int cur, int prev) {
    sz[cur] = 1;

    for (int i = 0; i < v[cur].size(); i++) {
        if (v[cur][i] == prev) continue;

        par[v[cur][i]] = cur;
        depth[v[cur][i]] = depth[cur]+1;
        dfs(v[cur][i], cur);
        sz[cur] += sz[v[cur][i]];
    }
}

int main () {
    int r, a, b;

    cin >> n >> r;

    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(0, -1); // dfs(r,-1); 

    for (int i = 0; i < n; i++) cout << i << ' ' << par[i] << '\n';

    return 0;
}

/*
    C 단계를 들어가볼까요! -> 다에스트라 알고리즘!
    CH20. 우선순위 큐 (최적화!) 특정 포인트 추가되었을 때 최단거리를 찾는다
    가중치가 들어간 경우, BFS가 아니라 다에스트라 사용하기
*/
