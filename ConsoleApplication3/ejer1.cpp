#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector <int> num;
    vector <int> snum;
    num.push_back(1);
    num.push_back(4);
    snum.push_back(1);
    snum.push_back(2);
    snum.push_back(3);
    snum.push_back(4);
    for (int i = 0; i < snum.size(); i++) {
        num.push_back(snum[i]);
    }
    int y = num.size();
    int vector[5];
    int aux = 0;
    for (int j = 0; j < y - 1; j++) {
        if (num[j] > num[j + 1]) {
            aux = num[j];
            num[j] = num[j + 1];
            num[j + 1] = aux;
        }
    }
    for (int j = 0; j < y; j++) {
        cout << num[j];
    }
    return 0;
}