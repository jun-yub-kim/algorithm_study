#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		if (i == input - 1) {
		for (int j = 0; j < 2 * input - 1; j ++)
			cout << '*';
		}
		else {
			for (int j = i; j < input - 1; j++) {
				cout << ' ';
			}
			cout << '*';

			for (int j = 1; j < 2 * i; j++) {
				cout << ' ';
			}
			if (i != 0) {
				cout << '*';
			}
			cout << endl;
		}
	}
}
