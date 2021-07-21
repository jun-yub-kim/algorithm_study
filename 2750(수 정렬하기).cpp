#include <iostream>
using namespace std;

int main() {
    int arr[1010];
    int number;
    cin >> number;
    for (int i = 0; i < number; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < number; i++) {
        for (int j = i + 1; j < number; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < number; i++) {
        cout << arr[i] << endl;
    }
}
