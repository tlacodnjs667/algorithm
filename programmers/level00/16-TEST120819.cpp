// 아이스 아메리카노
// https://school.programmers.co.kr/learn/courses/30/lessons/120819

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> result;
    
    result.push_back(money / 5500);
    result.push_back(money % 5500);
    return result;
}


/*
  크기 0의 벡터 만들기
  push_back 함수 사용해서 잔수와 나머지 넣기
  + 벡터 만들면서 할당하는 방법 찾기

==> 
#include <vector>

using namespace std;

vector<int> solution(int money) {
    return vector<int> {money / 5500, money % 5500};
}
*/
