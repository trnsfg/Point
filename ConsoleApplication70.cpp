#include <iostream>

class Point {
private:
    int x;
    int y;
    int z;
public:
    Point(int X, int Y, int Z) : x(X), y(Y), z(Z) {}

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    int getZ(){
        return z;
    }

    void setX(double X) {
        x = X;
    }

    void setY(double Y) {
        y = Y;
    }

    void setZ(double Z) {
        z = Z;
    }

    void print(){
        std::cout << "Point(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    Point p(1, 1, 1);

    p.print();

    p.setX(2);
    p.setY(2);
    p.setZ(2);

    p.print();

}
