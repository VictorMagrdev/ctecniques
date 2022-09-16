#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> numb;
    vector <int> response;
    numb.push_back(6);
    numb.push_back(4);
    numb.push_back(2);
    numb.push_back(1);
    numb.push_back(3);
    numb.push_back(5);
    numb.push_back(7);
    for (size_t i = 0; i < numb.size(); i++)
    {
        if(numb[i] % 2 == 0) {
            response.insert(response.begin(), numb[i]);
        }
        if (numb[i] % 2 != 0) {
            response.push_back(numb[i]);
        }
    }
    for (size_t i = 0; i < response.size(); i++)
    {
        cout << response[i]<<endl;
    }
    return 0;
}

