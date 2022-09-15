#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> base;
    vector <int> subase;
    vector <vector<int>> request;
    int k, fragmento;
    base.push_back(1);
    base.push_back(2);
    base.push_back(3);
    base.push_back(4);
    base.push_back(5);
    base.push_back(6);
    base.push_back(7);
    base.push_back(8);
    base.push_back(9);
    base.push_back(10);
    do {
        cout << "ingrese el valor por el que desea dividi el vector:\n";
        cin >> k;
        if (k > base.size()) {
            cout << "el numero es muy grande, intentelo de nuevo.";
        }
    } while (k > base.size());
    fragmento = base.size() / k;
    while (base.size() > 0) {
        subase.push_back(base[0]);
        base.erase(base.begin());
        if ((subase.size() == fragmento && base.size() >= fragmento) || base.size() == 0) {
            request.push_back(subase);
            subase.clear();
        }
    }
    cout << " respuesta: [";
    for (size_t i = 0; i < request.size(); i++) {
        cout << " [ ";
        subase = request[i];
        for (size_t j = 0; j < subase.size(); j++)
        {
            cout << " " << subase[j] << " ";
        }
        cout << " ] ";
    }
    cout << " ] ";
    return 0;
}