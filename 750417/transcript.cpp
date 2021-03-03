#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int input;
    vector<int> scores;
    
    do{
        cin >> input;
        scores.push_back(input);
    } while (input != 0);
    
    scores.pop_back();
    sort(scores.begin(), scores.end());

    int totalfront = 0;
    for (int i = 0; i < scores.size() / 2; i++) {
        totalfront += scores[i];
    }
    
    int totalend = 0;
    for (int i = scores.size() / 2; i < scores.size(); i ++) {
        totalend += scores[i];
    }

    int total = 0;
    for (int i = 0; i < scores.size(); i++) {
        total += scores[i];
    }

    cout << "平均" << total / scores.size() << endl;
    cout << "前半" << totalfront / (scores.size() / 2) << endl;
    cout << "後半" << totalend / (scores.size() / 2);
}
