#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {

    private:

        int x, y;

    public:

        Point(int x = 0, int y = 0) {
            this-> x = x;
            this-> y = y;
        }

        int getX() const {return x; }
        int getY() const {return y; }

        void setX(int x) {this->x = x; }
        void setY(int y) {this->y = y; } 

        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }


        bool operator==(const Point& other){
            if ((this->x == other.x) && (this->y == other.y)){
                return true;
            }
            return false;
        }

        bool operator!=(const Point other){
            return !(*this == other);
        }
        
        
        
        Point& operator=(const Point& other) {
        if (this == &other) {
            return *this;
        }

        this->x = other.x;
        this->y = other.y;

        return *this;
}

};

#endif