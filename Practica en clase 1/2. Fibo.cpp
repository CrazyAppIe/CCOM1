// 0 1 1 2 3 5 8 13 21 34
// inicio var  |  a = 1  ,  b = 0  , c = 1
// iteracion 1 | (2) a = c{1}, (1) b = a{1}, (3) c = 2
// iteracion 2 | a = c{2}, b = a{1}, c = 3
// iteracion 3 | a = c{3}, b = a{2}, c = 5

// suma de los pares en un total

#include <iostream>
using namespace std;

int main (){

  int a{0};
  int b{1};
  int c;

  int fin{50};
  int long long suma{0};
  
  for (int i = 1; i <= fin; i++){
    
    c = a + b;
    b = a;
    a = c;
    
    if (c % 2 == 0){
      suma += c;
    }
    if (suma > 4000000){
      break;
    }
  }
  
  cout << "La suma de los pares (hasta el 4,000,000) es: " << suma << endl;
}
