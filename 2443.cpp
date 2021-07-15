#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		for (int k = 0; k < i; k ++) {
			cout << ' ';
		}
		for (int j = 2*(input - i) - 1; j > 0; j--) {
			cout << '*';
		}
		cout << endl;
	}
}
