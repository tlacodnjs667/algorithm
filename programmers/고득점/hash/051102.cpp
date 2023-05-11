/**
 * https://school.programmers.co.kr/learn/courses/30/lessons/42578?language=cpp
 * 
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
  int answer = 1;
    int toDiv;
  map<string, int> m;

  for (int i = 0; i < clothes.size(); i++) {
    if (m[clothes[i][1]]) {
      m[clothes[i][1]] += 1;
      continue;
    };
     m[clothes[i][1]] = 1; 
  }
    int sz = m.size();
  for (auto iter = m.begin(); iter != m.end(); iter++) {
    answer *= (iter->second + 1);
      toDiv *= sz--;
 }

  return answer - 1;
}