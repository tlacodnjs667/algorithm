/*
https://school.programmers.co.kr/learn/courses/30/lessons/42577?language=cpp
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ans, flag;

bool solution(vector<string> phone_book) {
    ans = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for (int i = 0; i < phone_book.size(); i++) {
        flag = true;
        
        for (int j = 0; j < phone_book[i].size()-1; j++) {
            if (phone_book[i][j] != phone_book[i+1][j]) {
                flag = false;
                break;
            }
        }
        if (flag)  return false;
    }

    return true;
}



/**
 * 다른 사람의 풀이 
 * String.substr(0, n); 
*/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool solution(vector<string> phoneBook) {
    bool answer = true;

    sort(phoneBook.begin(), phoneBook.end());

    for ( int i = 0 ; i < phoneBook.size() - 1 ; i++ )
    {
        if ( phoneBook[i] == phoneBook[i+1].substr(0, phoneBook[i].size()) )
        {
            answer = false;
            break;
        }
    }

    return answer;
}
/**
 * 다른 사람의 풀이 
 * 
*/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    unordered_map<string, int> hash_map;
    for(int i = 0; i < phone_book.size(); i++)
        hash_map[phone_book[i]] = 1;

    for(int i = 0; i < phone_book.size(); i++) {
        string phone_number = "";
        for(int j = 0; j < phone_book[i].size(); j++) {
            phone_number += phone_book[i][j];
            if(hash_map[phone_number] && phone_number != phone_book[i])
                answer = false;
        }
    }

    return answer;
}