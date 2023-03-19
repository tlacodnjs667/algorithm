#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <numeric>
#include <iostream>

using namespace std;

int solution(int n) {

    return lcm(n, 6) / 6;
}

/*
    1명 1판 6조각씩
    2명 1판 3조각씩
    3명 1판 2조각씩
    4명 2판 3조각씩
    .....
    
    => 명수와 6의 최소공배수 / 6 = 필요한 총 판수
    
*/
