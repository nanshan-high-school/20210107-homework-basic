#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> score;
    int input;
    do {
        cin >> input;
        score.push_back(input);
    } while (input != 0);
    sort(score.begin(), score.end());
    reverse(score.begin(), score.end());
    int sum = 0;
    for (int i = 0; i < score.size(); i++) {
        cout << score[i] << " "; 
        sum += score[i];
    }
    cout << endl;
    score.pop_back ();
    cout << "平均:" << sum / score.size() << endl;
    sum = 0;
    int half = score.size() / 2;
    for (int i = 0; i < half; i++) {
        sum += score[i];
    }
    cout << "前半:" << sum / half << endl;
    sum = 0;
    for (int i = 0; i < half; i++) {
        sum += score[half + i];
    }
    cout << "後半:" << sum / half << endl;
}
