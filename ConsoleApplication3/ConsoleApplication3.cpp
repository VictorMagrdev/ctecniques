#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    vector <int> response;
    cout << "digite un numero: ";
    cin >> x;

    for (int i = 1; i <= x+1; i++)
    {
        if(i % 2 == 0) {
            response.insert(response.begin(), i);
        }
        if (i % 2 != 0) {
            response.push_back(i);
        }
    }
    for (int i = 0; i < response.size(); i++)
    {
        cout << response[i];
    }
    return 0;
}

