#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int inputnum;
    float avegfront, avegback;
    while(cin >> inputnum) {
        if(inputnum != 0) {
            vec.push_back(inputnum);
            inputnum = 0;
        }else {
            sort(vec.begin(), vec.end());
            for(int n = 0; n < vec.size(); n++) {
                if(n < (vec.size() / 2) - 1) {
                    avegfront = avegfront + vec.at(n);
                }else if(n == (vec.size() / 2) - 1) {
                    avegfront = avegfront + vec.at(n);
                    cout << "前半:" << avegfront / (vec.size()/2) << endl;
                }else if(n == vec.size() - 1) {
                    avegback = avegback + vec.at(n);
                    cout << "後半:" << avegback / (vec.size()/2) << endl;
                }else {
                    avegback = avegback + vec.at(n);
                }
            }
        cout << "平均:" << (avegback + avegfront) / vec.size() << endl;
        }
    }
}
