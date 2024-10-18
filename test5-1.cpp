#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "2021305082 최재륜\n";
	
	string str;
	cout << "문자열 입력>>";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < i+1; j++)
			cout << str[j];
		cout << "\n";
	}
	return 0;
}
