#include <iostream>
using namespace std;

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << arr[0] * arr[2];
}
