#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector <int> num;
    vector <int> org;
    num.push_back(1);
    num.push_back(4);
    num.push_back(3);
    num.push_back(2);
    num.push_back(5);
    num.push_back(-5);
    num.push_back(0);
    num.push_back(-7);
    num.push_back(9);
    org.insert(org.begin(), num[3]);
    for (int i = 0; i < num.size(); i++) {
        if (2 == num[i]) {
            continue;
        }
        if (num[i] < 2) {
            org.insert(org.begin(), num[i]);
        }
        if (num[i] > 2) {
            org.push_back(num[i]);
        }
    }
    for (int j = 0; j < org.size(); j++) {
        cout << org[j];
    }
    return 0;
}