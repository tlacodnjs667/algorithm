// 문자 반복 출력하기
// https://school.programmers.co.kr/learn/courses/30/lessons/120825


#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution( string my_string, int n)
{
    string result = "";

    for(int i = 0 ; i < my_string.length();  i++){
        for(int j = 0 ; j < n; j++){
        result.push_back(my_string[i]);
        }
    };

    return result;
}

/*

    내가 생각한 생각의 흐름
    1. 각 문자를 n 번 반복해서 result라는 변수에 붙임.
    2. 붙일 때, 노드처럼 단순히 +연산자를 사용해서 붙일 수 있지 않을까 생각을 했음
    3. 그런데 불가 => 왜 안되지! 라는 생각으로 string의 append 함수도 써보고 열심히 다른 방법들을 간구해봄,,,
    4. 그래도 불가능했고, 에러 메세지에서 char 관련 에러가 나는 것을 보고 append나 string에서 +연산자에 대해 찾아봄
    
    => 이번 문제를 풀 때 겪은 문제의 원인은 **데이터 타입 이었음!
    1. '문자'와 "문자열"의 데이터 타입에 대한 완벽 인지 X
    2. my_string은 "문자열"이지만, my_string의 한 요소는 '문자'인데, 이걸 생각하지 못한듯.
    그래서 위 두 가지 생각을 기본 골자로, [c++ 문자열에 문자 더하기]를 중심으로 구글링하니 어렵지 않게 해결 방법을 찾을 수 있었다.

*/

/*
    #include <string>
    #include <vector>

    using namespace std;

    string solution(string my_string, int n) {
        string answer = "";
        for(const auto v : my_string)
        {
            answer += string(n,v);
        }
        return answer;
    }
    

*/

/*

    #include <bits/stdc++.h>

    using namespace std;

    string solution(string my_string, int n) {
        return accumulate(my_string.begin(), my_string.end(), string(), [n](string& acc, char c){
            for (int i = 0 ; i < n ; i++) acc.push_back(c);
            return acc;
        });
    }

*/