#include <iostream>

class Shape{

    protected:

    int p;
    int a;

    public:

    virtual void calculatePerimeter() = 0;
    virtual void calculateArea() = 0;

    int getPerimeter();
    int getArea();

};

int Shape::getPerimeter(){
    return p;
}

int Shape::getArea(){
    return a;
}

class Circle: public Shape{

    private:

    int r;

    public:

    Circle(): r(0){}

    Circle(int r): r(r){}

    void calculatePerimeter();

    void calculateArea();    

};

void Circle::calculatePerimeter(){
    p = 2 * 3.14 * r;
}

void Circle::calculateArea(){
    a = 3.14 * r * r;
}

class Rectangle: public Shape{

    private:

    int l;
    int w;

    public:

    Rectangle(): l(0), w(0){}

    Rectangle(int l, int w): l(l), w(w){}

    void calculatePerimeter();

    void calculateArea();     

};

void Rectangle::calculatePerimeter(){
    p = 2 * l + 2 * w;
}

void Rectangle::calculateArea(){
    a = l * w;
}

int main(){

    int n;

    std::cout << "Enter radius: ";
    std::cin >> n;
      
    Circle c(n);

    c.calculatePerimeter();
    c.calculateArea();

    std::cout << "Circle Perimeter: " << c.getPerimeter() << std::endl;

    std::cout << "Circle Area: " << c.getArea() << std::endl;

    Rectangle r(3,4);

    r.calculatePerimeter();
    r.calculateArea();  
    
    std::cout << "Rectangle Perimeter: " << r.getPerimeter() << std::endl;

    std::cout << "Rectangle Area: " << r.getArea() << std::endl;  

    return 0;
    
}
