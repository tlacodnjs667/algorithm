
// 최댓값 만들기 (1)

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution ( vector<int> numbers) 
{
    sort(numbers.begin(), numbers.end(), greater<int>());

    return numbers[0] * numbers[1];
}

/*
    CPP에 조금씩 익숙해져 가는 나...
    그렇지만 아직 어려운 문제를 풀지 못한다는 점이 정말^.^
    쉬운 문제들이라서 빠르게 풀어가는 걸 알기에... 분발하자...
*/







// 아래처럼 문제를 풀었을 때, ' signal: aborted (core dumped) '

// int solution(vector<int> numbers) {
//     int arr_len = numbers.size();
//     int idx = 0;
//     vector<int> answer( arr_len * ( arr_len - 1) / 2);

//     for( int i = 0; i < arr_len; i++) 
//     {
//         for ( int j=0; j < arr_len; j++) 
//         {
//             if( i == j ) continue;
//             else 
//             {
//                 answer[idx++] = numbers[i] * numbers[j];
//             }
//         }
//     }

//     int mx = -1;

//     for ( int i = 0; i < answer.size(); i++) 
//     {
//         if ( answer[i] > mx) mx = answer[i];
//     }

//     return mx;
// }