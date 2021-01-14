#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {  
    int n, total = 0, Q = 0, f = 0, b = 0;  
    vector<int> score;
    cin >> n;
    while (n != 0) {
        score.push_back(n);
        cin >> n;
    }

    sort(score.begin(), score.end());
    for(auto n : score) { // all
        total += n;
        Q += 1;
    }
    
    vector<int> F(begin(score) + Q / 2, end(score));
    for(auto n : F) { // 前
        f += n;
    }

    vector<int> B(begin(score), end(score) - Q / 2);
    for(auto n : B) { // 後
        b += n;
    }

    cout << "平均：" << total / Q  << "\n";
    cout << "前半：" << f / (Q / 2)<< "\n";
    cout << "後半：" << b / (Q / 2)<< "\n";

    
    // for(auto n : score) { 
    //     cout << n << " ";
    // }
    // cout << endl;
    // for(auto n : B) { 
    //     cout << n << " ";
    // }
    // cout << endl;
    // for(auto n : F) { 
    //     cout << n << " ";
    // }
}
