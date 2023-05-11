// 최빈값 구하기
// https://school.programmers.co.kr/learn/courses/30/lessons/120812

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution (vector<int> array) {
    vector<int> arrayOnly(array);
    sort (arrayOnly.begin(), arrayOnly.end());
    arrayOnly.erase (unique (arrayOnly.begin(), arrayOnly.end()), arrayOnly.end());
    
    vector<int> cntArr(array.size(), 0);

    for (int idxOuterCir: array) {

        for (int idxInnerCir: arrayOnly) {
            if(array[idxOuterCir] == arrayOnly[idxInnerCir]) cntArr[idxInnerCir]++;
        }
        
    }

     int max_idx = max_element(cntArr.begin(), cntArr.end()) - cntArr.begin();

    sort(cntArr.begin(), cntArr.end(), greater<int>());
    if (cntArr[0] == cntArr[1]) cout << -1;
    else arrayOnly[max_idx];

}

// unique 함수는 뒤에 중복 값들을 몰아서 보낸 후, ** 첫 번째 쓰레기 값의 주소를 반환**한다.