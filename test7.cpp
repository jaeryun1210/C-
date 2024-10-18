#include <iostream>
using namespace std;

void ReadArray(double a[], int size);
double MaxValue(double a[], int size);
double MinValue(double a[], int size);
void PrintArray(double a[], int size);

int main() {
	cout << "2021305082 최재륜" << endl;

	double a[5];
	ReadArray(a, 5);

	double max, min;
	max = MaxValue(a, 5);
	min = MinValue(a, 5);

	PrintArray(a, 5);

	cout << "제일 큰 수 = " << max << endl;
	cout << "제일 작은 수 = " << min << endl;
}
void ReadArray(double a[], int size) {
	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < size; i++)
		cin >> a[i];
}
double MaxValue(double a[], int size) {
	double max = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
double MinValue(double a[], int size) {
	double min = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
void PrintArray(double a[], int size) {
	cout << "배열 : ";
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}
