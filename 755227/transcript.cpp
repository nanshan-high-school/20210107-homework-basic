#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> score;

    int i = -1;

    do {
        cin >> i;
        score.push_back(i);
    } while (i != 0);

    sort(score.begin(), score.end());
    reverse(score.begin(), score.end());

    

    int howmany = score.size() - 1;
    int all = 0;

    for(int j = 0; j < howmany; j++) {
        all = all + score[j];
    }

    int front = 0;
    int back = 0;

    for (int j = 0; j < howmany / 2; j++) {
        front = front + score[j]; 
    }

    for (int j = howmany / 2; j < howmany; j++) {
        back = back + score[j]; 
    }

    cout << "平均" << all / howmany << endl;
    cout << "前半" << front / (howmany / 2) << endl;
    cout << "後半" << back / (howmany / 2) << endl;
}