#include <iostream>
#include <string>

class A{
    protected:
    int a;
    public:
    void set_a(int a){
        this->a = a;
    }
    int get_a() const{
        return a;
    }

};

class B : public A {
    private:
        double x;
    public:
    void set_x(double a_x){ x = a_x;}
    void set_a(int new_a){
        if(new_a < 0){
            set_a(0);
        }else{
            A::set_a(new_a);
        }
    }
    double foo(){
        return x * this->get_a();
    }
};

int main(){

    A a;
    B b;

    a.set_a(-50);
    b.set_a(-50);
    std::cout << b.get_a() << std::endl;

    //b.set_a(10); 
    //b.set_x(0.2); 

    //std::cout << b.foo() << std::endl;

    return 0;

}