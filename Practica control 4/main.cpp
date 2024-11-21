#include <iostream>
#include "Array.h"
using namespace std;

int main() {
    Array pointsArray(3); 

    pointsArray[0] = Point(1, 2);
    pointsArray[1] = Point(3, 4);
    pointsArray[2] = Point(5, 6);

    std::cout << pointsArray << std::endl;

    Array otherArray(3);
    otherArray[0] = Point(1, 2);
    otherArray[1] = Point(3, 4);
    otherArray[2] = Point(5, 6);

    if (pointsArray == otherArray) {
        std::cout << "Arrays iguales" << std::endl;
    } else {
        std::cout << "Arrays diferentes" << std::endl;
    }

    return 0;
}
