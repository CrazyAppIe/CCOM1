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

int main() {
    
    int contador = 0;
    long num = 2;
    
    int primoObjetivo{10001};
    long primo_final;

    while (contador < primoObjetivo) {
        if (primo(num)) {
            contador++;
            primo_final = num;
        }
        num++;
    }

    cout << "El primo 10001 es: " << primo_final << endl;

}