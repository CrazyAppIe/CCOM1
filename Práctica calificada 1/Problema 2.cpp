#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        cout << i;
        if (i + 2 <= n) {
            cout << ",";
        }
    }

    return 0;
}
