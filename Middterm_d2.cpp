#include <iostream>

using namespace std;

int main() {
    int n;

    while(cin >> n) {
        while (n > 0) {
            int last = n % 10;
            int second_last = n % 100 / 10;
            int prod = last + second_last;

            n = n / 100;
            if (prod > 9) {
                n = n * 100 + prod;
            } else {
                n = n * 10 + prod;
            }
            cout << n << endl;
            if (n < 10) {
                break;
            }
        }
    }
}
