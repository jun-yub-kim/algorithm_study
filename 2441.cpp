#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	int a = 0, b = 0, c = 0;
	int line = 0;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int k = i; k < input; k++) {
			cout << '*';
		}
		cout << endl;
	}
}
