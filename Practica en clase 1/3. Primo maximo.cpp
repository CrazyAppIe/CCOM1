#include <iostream>
using namespace std;

bool primo(long long num) {
    
    if (num <= 1) {
        return false;
    }
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

long long primoMaximo(long long n) {
    while (!primo(n)) {
        n--;
    }
    return n;
}


int main() {
    long long numero = 600851475143;

    long long maxPrimo = primoMaximo(numero);

    cout << "El primo maximo es: " << maxPrimo << endl;
    
}