#include <iostream>
using namespace std;

int main() {
	cout << "2021305082 최재륜\n";

	int gugudan[9][9];

	for (int i = 0; i < 9; i++)	{
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 1) * (j + 1);
		}
	}
	int n1, n2;
	cout << "시작단과 끝단 입력>>";
	cin >> n1 >> n2;

	for (int i = 1; i <= 9; i++) {
		for (int j = n1; j <= n2; j++) {
			cout << j << "X" << i << "=" << gugudan[i-1][j-1] << "\t";
		}
		cout << "\n";
	}
	return 0;
}
