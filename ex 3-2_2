#include <iostream>
using namespace std;

// 3-2 최종
class Rectangle {
private:
	int width, height;
public:
	void setWidth(int w);
	void setHeight(int h);
	double getArea();
};
void Rectangle::setWidth(int w) {
	width = w;
}

void Rectangle::setHeight(int h) {
	height = h;
}

double Rectangle::getArea() {
	return width * height;
}

int main() {
	cout << "2021305082 최재륜\n";

	int w, h;
	Rectangle rect;

	cout << "사각형의 너비를 입력하세요>>";
	cin >> w;
	cout << "사각형의 높이를 입력하세요>>";
	cin >> h;

	rect.setWidth(w);
	rect.setHeight(h);
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
