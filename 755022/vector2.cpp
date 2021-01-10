#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int input = 1;
    vector <int> vec1;
    
    while (input != 0) {
        cin >> input;
        vec1.push_back(input);
    }

    sort(vec1.begin(), vec1.end());
    vector<int> vec2(vec1.begin() + 1, vec1.end());

    int half = vec2.size() / 2;
    int all = 0, first = 0, last = 0;
    for (int i = 0; i < vec2.size(); i++) {
        all += vec2[i];        
    }
    for (int i = 0; i < half; i++) {
        last += vec2[i];        
    }
    for (int i = vec2.size() - 1; i > half - 1; i--) {
        first += vec2[i];        
    }

    cout << "平均 : " << all / (half * 2) << "\n";
    cout << "前段 : " << first / half << "\n";
    cout << "後段 : " << last / half << "\n";
}
