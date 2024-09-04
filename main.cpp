#include <iostream>
#include <string>
using namespace std;

class A{

    protected:

    int _s;

    public:

    A(int s): _s(s){}
    A(): A(-1){}
    virtual void print(){ cout << "S = " << this-> _s << endl;}

};

class B: public A {

    private:
    
    double _k;

    public:

    B(int s, double k): A(s), _k(k){}
    B():B(0,0){}
    void print(){ cout << "S = " << this-> _s << " K = " << this->_k << endl;}

};

class C: public A {

    private:
    
    string _str;

    public:

    C(int s, string str): A(s), _str(str){}
    C():C(0," "){}
    void print(){ cout << "S = " << this-> _s << " str = " << this->_str << endl;}

};

void test(A* a){
    a->print();
}

int main(){

    A* a[3];
    a[0] = new B();
    a[1] = new C();
    a[2] = new A();

    for (int i = 0; i < 3; i++){
        test(a[i]);
    }

    for (int i = 0; i < 3; i++){
        delete a[i];
    }

    /*A a1(564);
    B b1(500, 0.25346);

    test(&a1);
    test(&b1);*/


    /*A* a1;
    B b1(500, 0.25346);
    a1 = &b1;
    a1->print();*/

    //B b1(500, 0.25346);
    //b1.print();

    return 0;
}