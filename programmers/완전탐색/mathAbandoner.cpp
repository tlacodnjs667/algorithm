#include <string>
#include <vector>

using namespace std;

int fir[5] = {1,2,3,4,5};
int sec[8] = {2,1,2,3,2,4,2,5};
int thir[10] = {3,3,1,1,2,2,4,4,5,5};

int check[3] = {0,};


vector<int> solution(vector<int> answers) {
  vector<int> answer;
  for (int i = 0; i < answers.size(); i++) {
    if (fir[i % 5] == answers[i]) check[0]++;
    if (sec[i % 8] == answers[i]) check[1]++;
    if (thir[i % 10] == answers[i]) check[2]++;
  };

  int mx = max(check[0], max(check[1], check[2]));

  for (int i = 0; i < 3; i++) {
    if (check[i] == mx) answer.push_back(i+1);
  }
  return answer;
}