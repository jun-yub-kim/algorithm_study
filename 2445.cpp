#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}
		for (int k = i; k < input - 1; k++) {
			cout << ' ';
		}
		for (int k = i; k < input - 1; k++) {
			cout << ' ';
		}
		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}
		cout << endl;
	}
	

	for (int i = 1; i < input; i++) {
		for (int j = i; j < input; j++) {
			cout << '*';
		}
		for (int k = 0; k < i; k++) {
			cout << ' ';
		}
		for (int k = 0; k < i; k++) {
			cout << ' ';
		}
		for (int j = i; j < input; j++) {
			cout << '*';
		}
		cout << endl;
	}
}
