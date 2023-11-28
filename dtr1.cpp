#include <iostream>


using namespace std;

int sum(int a, int b, int c) {
    return (a - b) + (b - c);
}

int main() {
    int n;
    int a, b, c;
    int min;


    cin >> n;
    if (n > 0) {
        cin >> a >> b >> c;
        min = sum(a, b, c);
    }
    while (--n > 0) {
        cin >> a >> b >> c;
        int d = sum(a, b, c);
        if (d < min) {
            min = d;
        }
    }
    cout << min;
}
