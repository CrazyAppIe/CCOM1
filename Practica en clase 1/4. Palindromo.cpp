#include <iostream>
#include <string>
using namespace std;

bool capicua(int long n){

    int long num_original{n};
    string num_original_txt{to_string(n)};
    string num_reverso;
    int num_largo = num_original_txt.length();
    
    int num_final;

    for (int i = 1; i <= num_largo; i++){
        num_final = num_original % 10;
        num_reverso += to_string(num_final);
        num_original /= 10;
    }
    
    num_original = stoi(num_reverso);
    return num_original == n;
}

int main() {
    int primer_numero = 1;
    int segundo_numero = 1;
    long multiplicacion_capicua = 1;
    
    for (int i = 100; i <= 999; i++){
        for (int j = i; j <= 999; j++){
            long multiplicacion = i * j;
            if (capicua(multiplicacion)){
                primer_numero = i;
                segundo_numero = j;
                multiplicacion_capicua = multiplicacion;
            }
        }
    }

    cout << "El primer numero es: " << primer_numero << endl;
    cout << "El segundo numero es: " << segundo_numero << endl;
    cout << "La multiplicacion es: " << multiplicacion_capicua << endl;
    
    return 0;

}