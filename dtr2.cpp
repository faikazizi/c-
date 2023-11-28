#include <iostream>

using namespace std;

int reverse(int nr) {
    int rev = 0;
    while (nr > 0) {
        rev = rev * 10 + nr % 10;
        nr /= 10;
    }
    return rev;
}

int is_palindrom(int nr) {
    if (nr == reverse(nr)) {
        return nr;
    } else {
        return 0;
    }
}

int findLargest(int nr, int m) {
    int max = 0;
    while (nr <= m) {
        if (is_palindrom(nr)) {
            max = nr;
        }
        nr++;
    }
    return max;
}

int main() {
    int n, m;

    cin >> n >> m;
    int d = findLargest(n, m);

    cout << "Largest palindromic number: " << d;

    return 0;
}
