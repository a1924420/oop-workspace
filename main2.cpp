#include <iostream>
using namespace std;

struct Point{
    double x;
    double y;
};

class Shape{

    protected:

    Point _centre;

    public:

    Shape(double x, double y){
        _centre.x = x;
        _centre.y = y;
    }

    Shape():Shape(0,0){}

    virtual double get_area() = 0;
};

class Square: public Shape{

    private:
    double _side;

    public:
    Square(double x, double y, double side):Shape(x,y),_side(side){}

    Square():Shape(), _side(0){}

    double get_area(){return _side * _side;}

};

class Circle: public Shape{

    private:
    double _r;

    public:
    Circle(double x, double y, double r):Shape(x,x),_r(r){}

    Circle():Shape(), _r(0){}

    double get_area(){return _r * _r * 3.14;}

};

void test(Shape* s){
    cout << "The area is: " << s->get_area() << endl;
}

int main(){

    Shape* sq = new Square(10,10,5);
    Shape* cr = new Circle(1,10,3.2);

    test(sq);
    test(cr);

    return 0;
}