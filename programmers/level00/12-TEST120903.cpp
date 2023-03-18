


#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {

    int result = 0;
    vector<string> longer(s1.size() > s2.size() ? s1 : s2);
    vector<string> shorter(s1.size() < s2.size() ? s1 : s2);

    for (int i = 0; i < shorter.size(); i++) {
        for (int j = 0; j < longer.size(); j++) {
            if (i < j && shorter[i] == longer[j]) result++;
        }
    }
    
    return result;
}