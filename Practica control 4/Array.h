#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
#include "Point.h" 

class Array {
    
    friend std::ostream& operator<<(std::ostream&, const Array&);

    public:
        explicit Array(int arraySize = 10) 
            : size(arraySize > 0 ? static_cast<size_t>(arraySize) : 
                throw std::invalid_argument("El tamaño debe ser mayor a 0")), 
              ptr(new Point[size]) {}

        Array(const Array& arrayToCopy)
            : size(arrayToCopy.size), ptr(new Point[size]) {
            for (size_t i = 0; i < size; ++i) {
                ptr[i] = arrayToCopy.ptr[i];
            }
        }

        ~Array() {
            delete[] ptr;
        }

        size_t getSize() const {
            return size;
        }

        // Sobrecarga del operador de asignación =
        Array& operator=(const Array& right) {
            if (this != &right) {
                if (size != right.size) {
                    delete[] ptr;
                    size = right.size;
                    ptr = new Point[size];
                }
                for (size_t i = 0; i < size; ++i) {
                    ptr[i] = right.ptr[i];
                }
            }
            return *this;
        }

        // Sobrecarga del operador ==
        bool operator==(const Array& right) const {
            if (size != right.size) {
                return false;
            }
            for (size_t i = 0; i < size; ++i) {
                if (!(ptr[i] == right.ptr[i])) {
                    return false;
                }
            }
            return true;
        }

        // Sobrecarga del operador !=
        bool operator!=(const Array& right) const {
            return !(*this == right);
        }


        // Sobrecarga del operador '[]' (escritura)
        Point& operator[](int subscript) {
            if (subscript < 0 || subscript >= static_cast<int>(size)) {
                throw std::out_of_range("Subscript out of range");
            }
            return ptr[subscript];
        }

        // Sobrecarga del operador '[]' (lectura)
        const Point& operator[](int subscript) const {
            if (subscript < 0 || subscript >= static_cast<int>(size)) {
                throw std::out_of_range("Subscript out of range");
            }
            return ptr[subscript];
        }

    private:
        size_t size;
        Point* ptr;
};

std::ostream& operator<<(std::ostream& output, const Array& array) {
    output << "[ ";
    for (size_t i = 0; i < array.size; ++i) {
        output << "(" << array.ptr[i].getX() << ", " << array.ptr[i].getY() << ") ";
    }
    output << "]";
    return output;
}
#endif
