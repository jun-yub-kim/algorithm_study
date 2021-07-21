#include <iostream>
using namespace std;

int main() {
    int arr_w[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr_w[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr_w[i] < arr_w[j]) {
                int tmp = arr_w[i];
                arr_w[i] = arr_w[j];
                arr_w[j] = tmp;
            }
        }
    }

    int w = arr_w[0] + arr_w[1] + arr_w[2];

    int arr_k[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr_k[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr_k[i] < arr_k[j]) {
                int tmp = arr_k[i];
                arr_k[i] = arr_k[j];
                arr_k[j] = tmp;
            }
        }
    }

    int  k = arr_k[0] + arr_k[1] + arr_k[2];

    cout << w << ' ' << k;
}
