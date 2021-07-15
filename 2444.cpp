#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	int i, k, j;
	for (i = 0; i < input; i++) {
		for (k = i; k < input-1; k++) {
			cout << ' ';
		}
		for (j = 0; j < 2 * i + 1; j++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 1; i < input; i++) {
		for (int k = 0; k < i; k++) {
			cout << ' ';
		}
		for (int j = 2 * (input - i) - 1; j > 0; j--) {
			cout << '*';
		}
		cout << endl;
	}
}
