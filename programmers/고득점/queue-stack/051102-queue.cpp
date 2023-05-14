/*
https://school.programmers.co.kr/learn/courses/30/lessons/12909?language=cpp
*/

#include <iostream>
#include<string>
#include<stack>

using namespace std;

bool solution(string s)
{
  stack<char> st;
  bool answer = true;
  
  for (auto i = s.begin(); i < s.end(); i++) {
    if (st.top()=='(' && *i == ')') {
      st.pop();
      continue;
    }
    st.push(*i);
  }
  
  return st.empty();
}


/*
  정답을 도출하는 흐름 자체는 틀리지 않았으나, 
  아마 반복문 내에서 접근 불가능한 정보에 접근을 시도했었던 것 같다.
  반복해서 1/3 정도의 테스트 케이스에 
    `실패 (signal: segmentation fault (core dumped))` 에러가 남
*/

#include <iostream>
#include<string>
#include<stack>

using namespace std;

bool solution(string s)
{
  stack<char> st;
  bool answer = true;
  
  for (char c : s) {
    if (c == '(') {
      st.push(c);
    } else if (c == ')') {
      if (st.empty()) return false;
      else if (st.top() == '(') st.pop();
    }
  }
  
  return st.empty();

}

/* 재작성한 코드 */