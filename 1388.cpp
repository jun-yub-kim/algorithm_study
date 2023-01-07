#include <iostream>
using namespace std;
int main() {
	int width, height;
	cin >> height >> width;
	char** arr = new char* [height];
	for (int i = 0; i < height; i++) {
		arr[i] = new char[width];
	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cin >> arr[i][j];
		}
	}


	int count = 0;


	for (int i = 0; i < height - 1; i++) {
		for (int j = 1; j < width; j++) {
			if (arr[i][j] == '-') {
				if (arr[i][j - 1] == '-') {
					arr[i][j - 1] = '0';
					count++;
				}
			}
			else {
				if (arr[i][j] == arr[i + 1][j]) {
					arr[i][j] = '0';
					count++;
				}
			}
		}
	}

	for (int i = 1; i < height; i++) {
		if (arr[i][0] == '|' && arr[i - 1][0] == '|') {
			arr[i - 1][0] = '0';
			count++;
		}
	}

	for (int i = 1; i < width; i++) {
		if (arr[height - 1][i] == '-' && arr[height - 1][i - 1] == '-') {
			arr[height - 1][i - 1] = '0';
			count++;
		}
	}

	/*cout << endl << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}*/
	cout << width * height - count;

}