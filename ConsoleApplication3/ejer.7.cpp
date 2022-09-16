#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> guild;
	for (size_t i = 1; i < 10; i++)
	{
		guild.push_back(i);
	}
	int indicefinal, indiceinicial, x;
	cout << "digite el indice inicial: ";
	cin >> indiceinicial;
	cout << "digite el indice final: ";
	cin >> indicefinal;

	for (int i = indiceinicial; i <= indicefinal; i++)
	{
		x = guild[i];
		guild.insert(guild.begin() + indicefinal + 1, x);
	}
	for (size_t i = indiceinicial; i <= indicefinal; i++)
	{
		guild.erase(guild.begin() + i);
	}
	for (size_t i = 0; i < guild.size(); i++)
	{
		cout << guild[i];
	}
	return 0;
}
