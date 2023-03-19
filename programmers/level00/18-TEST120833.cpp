
// 배열자르기
// https://school.programmers.co.kr/learn/courses/30/lessons/120833

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> result;
    for(int i=num1; i <= num2; i++){
        result.push_back(numbers[i]);
    }
    
    return result;
}


/*

    #include <string>
    #include <vector>

    using namespace std;

    vector<int> solution(vector<int> numbers, int num1, int num2) {
        vector<int> answer(numbers.begin()+num1,numbers.begin()+num2+1);
        return answer;
    }

    node 처럼 백터가 슬라이싱 되는지 먼저 찾아봤으나, slice 라는 함수 자체가 없어서 우선적으로 떠올릴 수 있는 반복문을 이용하여 정답 도출,
    이후 다른 사람 코드에서 새로운 벡터를 생성하면서 복사할 수 있는 방법을 찾았다.
    역시 다른 사람 코드 보는 것도 좋은 방법
    
*/
