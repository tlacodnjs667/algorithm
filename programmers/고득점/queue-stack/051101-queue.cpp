/*
https://school.programmers.co.kr/learn/courses/30/lessons/12906?language=cpp
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution (vector<int> arr) {
  vector<int> answer;
  queue<int> q;

  q.push(arr[0]);

  for (int i = 1; i < arr.size(); i++) {
    if(q.front() != arr[i]) {
      answer.push_back(q.front());
      q.pop();

      q.push(arr[i]);
    };
  }
  answer.push_back(q.front());

  return answer;
}


/*
  다른 사람의 풀이//
  정확도와 효율성이 같음. 
  채원, 코드의 길이와 
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{

    arr.erase(unique(arr.begin(), arr.end()),arr.end());

    vector<int> answer = arr;
    return answer;
}


/*
벡터의 erase 함수와 unique 함수 공부하기
*/