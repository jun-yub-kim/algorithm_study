#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int b = a - 1;
	for (int i = 0; i < a; i++) {
			for (int k = 0; k < i; k++) {
				cout << " ";
			}


			for (int k = 0; k < (2 * (a - i)) - 1; k++) {
				cout << "*";
			}
		cout << endl;
	}
	for (int i = 0; i < b; i++) {
		for (int k = 0; k < a - i - 2; k++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * (i + 1) + 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
