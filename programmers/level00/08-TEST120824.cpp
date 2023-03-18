
// 짝수 홀수 개수
// https://school.programmers.co.kr/learn/courses/30/lessons/120824

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2);
    int cntEven=0;
    for ( int i = 0 ; i < num_list.size( ); i++ )
    {
        if ( num_list[i] % 2 == 0 ) cntEven++;
    }

    answer[0] = cntEven;
    answer[1] = num_list.size() - cntEven;

    return answer;
}


/*

    함수 반환 안해놓고 시간 초과 계속 떠서 당황했다.
    
    1. 벡터 내부를 순회하며 짝수의 개수 세기
    2. 벡터 num_list의 사이즈에서 짝수의 개수를 빼면 홀수 개수가 나올테니,
    3. 크기가 2인 벡터에 값을 담아주면 끝!!

*/