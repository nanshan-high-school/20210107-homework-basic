#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    vector<int> score;

    do{
        cin >> num;
        score.push_back(num);
    } while (num != 0);

    score.pop_back();

    vector<int> score_front(score);
    vector<int> score_back(score);

    sort(score_front.begin(), score_front.end());
    reverse(score_front.begin(), score_front.end());
    /*
    for (auto n : score_front) {
        cout << n << " ";
    }
    cout << endl;
    */
    sort(score_back.begin(), score_back.end());
    /*
    for (auto n : score_back) {
        cout << n << " ";
    }
    cout << endl;
    */

    int all1, all2, all3;
    int half = score.size() / 2;

    for (int i = 0; i < score.size(); i++) {
        all1 += score[i];
    }
    for (int i = 0; i < half; i++) {
        all2 += score_front[i];
    }
    for (int i = 0; i < half; i++) {
        all3 += score_back[i];
    }

    int avg = all1 / score.size();
    int front = all2 / half;
    int back = all3 / half;

    cout << "平均: " << avg << "\n";
    cout << "前半: " << front << "\n";
    cout << "後半: " << back << "\n";
}
