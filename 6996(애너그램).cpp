#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int input;
    cin >> input;
    for (int i = 0; i < input; i++) {
        string a, b;
        cin >> a >> b;
        char arr_a[101], arr_b[101];
        strcpy(arr_a, a.c_str());
        strcpy(arr_b, b.c_str());
        int size_a = a.size();
        int size_b = b.size();
        int answer = 0;
        int count = 0;

        if (size_a == size_b) {
            for (int j = 0; j < size_a; j++) {
                for (int k = 0; k < size_a; k++) {
                    if (arr_a[j] == arr_b[k]) {
                        arr_b[k] = '0';
                        count++;
                        k = size_a;
                    }
                }
            }

        }

        if (count == size_a) {
            cout << a << " & " << b << " are anagrams." << endl;
        }
        else {
            cout << a << " & " << b << " are NOT anagrams." << endl;
        }
    }
}
