#include <iostream>
class point {
private:

    int x;
    int y;

    void setX(int b) {
        if (b >= -100 && b <= 100)
            x=b;
        else
            std::cout << "Некоректные координаты X'\n'";
    }


    void setY(int c) {
        if (c >= -100 && c <= 100)
            y=c;
        else
            std::cout << "Некоректные координаты Y'\n'";
    }

    void print() {
        std::cout << x << ';' << y <<  '\n';
    }
};


    int main() {
    point a;

    a.setX(54);

    a.setY(56);

    a.print();

    return 0;
}