#include <iostream>
using namespace std;

int main() {
	int a;
	int w;
	cin >> a;
	if (a == 1) {
		cout << "*";
	}
	else {
		for (int i = 0; i < 2 * a; i++) {
			if (i % 2 == 0) {
				for (int k = 0; k < a; k++) {
					if (k % 2 == 0) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
			}
			else {
				for (int k = 0; k < a; k++) {
					if (k % 2 == 0) {
						cout << " ";
					}
					else {
						cout << "*";
					}
				}
			}
			cout << endl;
		}
	}

}
