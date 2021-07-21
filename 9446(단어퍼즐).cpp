#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string a, b;
    int case_counter = 0;
    while (1) {
        int count = 0;
        cin >> a >> b;
        if (a == "END" && b == "END") {
            break;
        }
        case_counter++;
        char arr_a[1010];
        char arr_b[1010];
        strcpy(arr_a, a.c_str());
        strcpy(arr_b, b.c_str());

        if (a.size() == b.size()) {
            for (int i = 0; i < a.size(); i++) {
                for (int j = 0; j < a.size(); j++) {
                    if (arr_a[i] == arr_b[j]) {
                        count++;
                        arr_b[j] = '0';
                        j = a.size();
                    }
                }
            }
        }

        string answer;

        if (count == a.size()) {
            answer = "same";
        }
        else {
            answer = "different";
        }


        cout << "Case " << case_counter << ": " << answer << endl;
    }
}
