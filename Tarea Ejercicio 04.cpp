#include <iostream>
#include <cmath>
using namespace std;

class rectangulo{
    public:
        int largo;
        int ancho;
};

int main(){
    rectangulo rectangulo_test;
    rectangulo_test.ancho=4;
    rectangulo_test.largo=5;
    int y;
    int area;
    int perimetro;
    y=2;
    area=rectangulo_test.ancho * rectangulo_test.largo;
    perimetro= y*(rectangulo_test.ancho+rectangulo_test.largo);
    cout << "el area es :" << area;
    cout << " el perimetro es :" << perimetro;
    cout << "inserte un nuevo valor al ancho: ";
    cin >> rectangulo_test.ancho;
    cout << "inserte un nuevo valor al largo: ";
    cin >> rectangulo_test.largo;
    area=rectangulo_test.ancho * rectangulo_test.largo;
    perimetro= y*(rectangulo_test.ancho+rectangulo_test.largo);
    cout << "el area es :" << area;
    cout << " el perimetro es :" << perimetro;
    return 0;
}