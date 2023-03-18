
//특정문자 제거하기

#include <string>
#include <vector>
#include <regex>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";

    return regex_replace(my_string, regex(letter), "");
}

/*
    replace 함수는 원본 데이터 자체를 변형시키지만,
    regex_replace는 변형 데이터를 결과로써 반환하는 특징

    regex_replace는 regex 라이브러리를 불러와서 사용할 수 있다.
*/