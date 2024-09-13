#include <iostream>
using namespace std;

int main(){
    int fin = 1000000;
    int suma{0}; 
        for (int i = 1; i < fin; i++){
            int numero = i;
            if (i % 3 == 0 || i % 5 == 0){
                suma += i;
            }
    }
    cout << suma;
}