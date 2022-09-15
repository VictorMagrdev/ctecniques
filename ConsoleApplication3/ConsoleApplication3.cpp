#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> num;
    num.push_back(7);
    num.push_back(8);
    num.push_back(13);
    num.push_back(15);
    num.push_back(25);
    int y = num.size();
    for (int i = 1; i < y; i++) {
        cout << "cuando es el valor de i: " << i << endl;
        cout << "el valor de esa posicion es: " << num[i] << endl;
        if (i % 2 == 0) {
            num.insert(num.begin(), num[i]);
        }
        else {
            num.push_back(num[i]);
        }
    }
    for (int j = 0; j < y; j++) {
        cout << num[j] << endl;
    }
    return 0;
}

