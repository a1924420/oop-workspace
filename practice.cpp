#include <iostream>
#include <string>

using namespace std;

class A{

    int* _age;

    public:

    A(){ _age = new int; }

    void set_age(int age){
        if (age < 0 || age > 100){
            throw std::runtime_error("error");
            *_age = age;
        } 
    }

    ~A(){
        delete _age;
        cout << "A-\n";
    }

};

int main(){

    

    try {
        A a;
       a.set_age(123); 
       throw(0);
    } catch (std::exception const& e) {
        cerr << e.what() << endl;
    } catch (int ecode){
        cerr << "Error " << ecode << endl;
    } catch (...){
        cerr << "Unknown error" << endl;
    }

    cout << "Line 27" << endl;

    return 0;

}