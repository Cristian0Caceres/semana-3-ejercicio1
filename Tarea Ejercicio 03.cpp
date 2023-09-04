#include <iostream>
#include <cmath>
using namespace std;

class circulo{
    public:
        int radio;
};

int main(){
    circulo circulo_test;
    circulo_test.radio=6;
    int y;
    float pi;
    float area;
    float perimetro;
    pi=3.14;
    y=2;
    area=pi * (circulo_test.radio * circulo_test.radio);
    perimetro= (y*pi)* circulo_test.radio;
    cout << "el area es :" << area;
    cout << " el perimetro es :" << perimetro;
    cout << "inserte un nuevo valor al radio: ";
    cin >> circulo_test.radio;
    area=pi * (circulo_test.radio * circulo_test.radio);
    perimetro= (y*pi)* circulo_test.radio;
    cout << "el area es :" << area;
    cout << " el perimetro es :" << perimetro;
    return 0;
}