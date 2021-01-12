#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> score;
    int i;

    do {
        cin >> i;
        score.push_back(i);
    } while (i != 0);

    score.pop_back();
    sort(score.begin(),score.end());

    int grade = 0;
    int goodgrade = 0;
    int badgrade = 0;

    for (int i = 0; i < score.size(); i++) {
        grade += score[i];
    }

    for (int i = score.size() / 2; i < score.size(); i++) {
        goodgrade += score[i];
    }

    for (int i = 0; i < score.size() / 2; i++) {
        badgrade += score[i];
    }
    
    grade /= score.size();
    goodgrade /= (score.size() / 2);
    badgrade /= (score.size() / 2);

    cout << "平均：" << grade << "\n";
    cout << "前半：" << goodgrade << "\n";
    cout << "後半：" << badgrade << "\n";
    
}
