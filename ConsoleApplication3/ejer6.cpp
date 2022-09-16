#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <vector<int>> response;
	vector <int> remp;
	vector <int> request;
	for (size_t j = 1; j < 5; j++)
	{
		remp.push_back(j);
	}
	for (size_t i = 0; i < 4; i++)
	{
		response.push_back(remp);
	}
	for (size_t i = 0; i < response.size(); i++)
	{
		cout << "[";
		for (size_t j = 0; j < response.size(); j++)
		{
			cout << response[i][j];
		}
		cout << "]";
	}
	for (size_t i = 0; i < response.size(); i++)
	{

		for (size_t j = 0; j < response.size(); j++)
		{
			request.push_back(response[i][j]);
		}

	}
	int aux = 0;
	for (size_t i = 0; i < request.size(); i++)
	{
		for (int j = 0; j < request.size() - 1; j++) {
			if (request[j] > request[j + 1]) {
				aux = request[j];
				request[j] = request[j + 1];
				request[j + 1] = aux;
			}
		}
	}

	for (size_t i = 0; i < request.size(); i++)
	{
		cout << request[i];
	}

	return 0;
}
