#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	for (int i = 1; i < input + 1; i++) {
		for (int j = 1; j < input + 1; j++) {
			if ((i % 2) == 1) {
				cout << '*' << ' ';
			}
			else {
				cout << ' ' << '*';
			}
		}
		cout << endl;
	}
}
