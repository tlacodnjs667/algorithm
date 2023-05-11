// Collatz 콜라츠 
// https://programmers.co.kr/skill_checks/472387

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, short cnt = 0) {
    
    while ( num != 1 && cnt < 499 ) {
        if ( num % 2 == 0 && num != 1 && cnt++ < 499) num = num / 2; 
        if ( num % 2 == 1 && num != 1 && cnt++ < 499) num = num * 3 + 1;
    }
    if( cnt > 499) return -1;
    return cnt;
}