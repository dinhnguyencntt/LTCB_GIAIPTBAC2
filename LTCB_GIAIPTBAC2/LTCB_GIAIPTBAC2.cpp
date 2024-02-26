#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b, c,x1, x2, delta;
	cout << "giai phuong trinh bac 2\n";
	cout << "nhap a:"; cin >> a;
	cout << "nhap b:"; cin >> b;
	cout << "nhap c:"; cin >> c;
	if (a == 0) {
		if (b == 0) {
			if (c != 0) { cout << "pt vo nghiem"; }
			else { cout << "pt vo so nghiem"; }
		}
		else {
			x1 = x2 = -c / b;
			cout << "pt có nghiem x=" << x1;
		}
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << "pt  vo nghiem";
		}
		else if (delta == 0) {
			x1 = x2 = -b / (2 * a);
			cout << "pt co nghiem kep x1=x2=" << x1;
		}
		else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			cout << "pt co 2 nghiem phan biet\n";
			cout << "x1=" << x1;
			cout << "x2=" << x2;
		}
	} return 0;
}