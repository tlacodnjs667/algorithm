
// 문자열 뒤집기

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    reverse(num_list.begin(), num_list.end());
    return num_list;
}

/*
    reverse 함수가 포함되어 있는 헤더 파일 : **algorithm

    NODE는 메소드들이 있다면, C++은 그 모든 함수를 
    이 num_list.begin()과 num_list.end()가 iterator pointer를 반환하는 함수라고 하는데,
    아직 reverse 함수에서만 사용했지만 매우 재미있고 유용한 친구인 듯...
    pointer가 주소값이라는 것은 알겠으나, 
    iterator pointer는 명확한 개념을 이해하지 못한 것 같다.

    암튼 reverse 함수 너무 좋음.

*/