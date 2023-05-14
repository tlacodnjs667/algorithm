#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int minI, maxI;
    int wid, hei;
    wid = hei = -1;

    for (int i = 0; i < sizes.size(); i++) {
      minI = sizes[i][0] >sizes[i][1] ? sizes[i][1] : sizes[i][0]; // hei
      maxI = sizes[i][0] >sizes[i][1] ? sizes[i][0] : sizes[i][1]; // wid
      
      hei = hei < minI ? minI : hei; 
      wid = wid < maxI ? maxI : wid; 
    }

    return hei * wid;
}