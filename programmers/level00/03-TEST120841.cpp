
// 피자 나눠 먹기 (3)

#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    if (n % slice == 0) return n/slice;
    else return ( n / slice ) + 1;
}

/*
    범위를 구하는 것이 중요

    만약 입출력 예의 
        slice : 7,
        n : 10
    이 주어진 경우를 우선 slice만을 이용하여 최소 시켜야 할 피자 개수를 구해보자.
    
    1,2,3, ..., 6, 7 명 : 1판
    8,9,10,...,13, 14 명 : 2판
    15 ~ 21 명 : 3판
    22 ~ 28 명 : 4판
    29 ~ 35 명 : 5판

    slice로 명수를 나누었을 때, 나오는 범우
    범위 ||  몫 : (n-1), 나머지 : (1~6)
            몫 : (n), 나머지 : (0)

    1. 나머지를 기준으로 분기를 나누어야 하고
    2. 나머지가 1 이상일 경우, 몫에 1을 더해주어야 시켜야할 최소판을 구할 수 있음.
*/