
// 중앙값 구하기
// https://school.programmers.co.kr/learn/courses/30/lessons/120811

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    sort(array.begin(), array.end(), greater<int>());
    return array[array.size()/2];

}
