#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> serial = { "5B", "13", "49", "77", "13", "5E", "7D", "13" };
vector<int> key = { 0x10, 0x20, 0x30 };

int main()
{
	for (auto i = 0, j = 0; j < serial.size(); i++, j++)
	{
		if (i >= 3)
			i = 0;
		cout << char(stoi(serial[j], 0, 16) ^ key[i]);
	}
}