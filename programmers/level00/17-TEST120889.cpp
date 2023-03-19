// 삼각형의 완성조건 (1)
// https://school.programmers.co.kr/learn/courses/30/lessons/120889

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end(), greater<int>());
    return sides[0] < sides[1] + sides[2] ? 1 : 2;
}



/* 가장 긴 변의 길이는 다른 두 변의 길이의 합보다 작아야 합니다. */
/*
  algorithm 라이브러리의 SORT 함수를 이용해서 내림차순으로 정리한 후,
  최댓값이 나머지 두 값의 합보다 작은 지를 체크하여 참이면 1, 거짓이면 2 반환
*/

