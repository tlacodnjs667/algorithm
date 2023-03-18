// 순서쌍의 개수
// https://school.programmers.co.kr/learn/courses/30/lessons/120836


#include <string>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

int solution(int n) {
    int sqrtOfN =  sqrt(n);
    int cnt = 0;
    
    for (int i = 1; i <= sqrtOfN; i++) {
        if (n % i == 0) cnt++;
    }
    

    if (sqrtOfN * sqrtOfN == n) return cnt * 2 - 1;
    else return cnt * 2;
}


/*
    int sqrtOfN =  sqrt(n);
    우항이 double로 나와도 sqrtOfN은 int 데이터 타입으로 우항이 int로 형 변환되어 초기화 됨

*/