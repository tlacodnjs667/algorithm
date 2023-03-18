
// 배열 원소의 길이

#include <iostream>
#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<string> strlist) {
    
    vector<int> ans(strlist.size());
    
    for ( int i = 0; i < strlist.size(); i++ )
    {
        ans[i] = strlist[i].length();
    }
    
    return ans;
}

/*
    strlist
    -> strlist.size() : 벡터의 원소 개수 반환
    -> str.length() : string의 길이 반환

    node랑 다르게 길이 구하는 것을 메소드로 사용한다는 것이 익숙하지 않아 문제를 푸는데 어려움을 겪음.
    하지만 이제는 까먹지 못할 듯...
    너무 재밌다
*/
