
// 중복된 숫자 개수

#include <string>
#include <vector>

using namespace std;
/* 
    원래 std:: 이런 식으로 사용할 함수들을 다 명시해주어야 하는데,
    using namespace std;를 명시해주면 모든 함수들을 그 이름으로 사용하겠다는 의미...?
    그러니까 원래 하나하나 선언해주어야 하는데,
    저 코드 한줄로 이 과정을 생략할 수 있다. 로 받아들임
*/


int solution(vector<int> array, int n) {
    int cnt = 0;
    
    for( int i = 0; i < array.size(); i++)
    {
        if ( array[i] == n ) cnt++;
    }
    
    return cnt;
}