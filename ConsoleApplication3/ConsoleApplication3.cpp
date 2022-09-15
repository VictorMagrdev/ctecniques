#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> num;
    num.insert(num.begin(),7);
    num.insert(num.begin()+1,8);
    num.insert(num.begin()+2,13);
    num.insert(num.begin()+3,15);
    num.insert(num.begin()+4,25);
    int y = num.size();
    int x= 0;
    for (int i = 1; i < y; i++) {
        if (i % 2 == 0) {
            int x = num[i];
            num.erase(num.begin() + i);
            num.insert(num.begin(), x);  
        }
        else {
            int x = num[i];
            num.erase(num.begin() + i);
            num.push_back(x);
        }
    }
    for (int j = 0; j < y; j++) {
        cout << num[j] << endl;
    }
    return 0;
}

