#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    return n % 7 ? n / 7 + 1 : n / 7;
}

        
    /*
        1 ~ 7명 : 1판
        8 ~ 14명 : 2판
        15 ~ 21명 : 3판
        
    */
