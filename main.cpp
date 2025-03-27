/*
Gabriel A. Ramos Rivera
Gabterr
801-24-0582
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;

void menu();

// do you need to define each prototype? 
void volumen(double);
void area(double);

void voluemn(double, double);
void area(double, double);

void volumen(double, double, double);
void area(double, double, double);


int main(){
    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras.\n\n";

    char figura;
    cout << "Escoge una de las tres figuras:\n"
    << "\ta. Cilindro\n"
    << "\tb. Esfera\n"
    << "\tc. Prima rectangular\n"
    << "Selección: ";
    cin >> figura;
    

    switch(figura){
        case 'a':
        case 'b':
        case 'c': menu();
        default: cout << "No entró una opción valida.\n";
    }

    return 0;
}

void menu(){
    char calc; 
    cout << "Escoge entre una de las opciones:\n"
    << "\ta. Volumen\n"
    << "\tb. Área de la superficie\n"
    << "Selección: ";
    cin >> calc;

    switch (calc){
    case 'a': //volumen();
        break;
    case 'b': //area();
        break;
    default: cout << "No entró una opción valida.\n";
    }
}
// sphere
void volumen(double radio) { // 4.0/3.0 * pi * (r * r * r)
    
}

void area(double radio){ // 

}
// cylinder
void volumen(double radio, double altura){ // pi * (r * r) * h

}

void area(double radio, double altura){ // 

}
// rectangular prism
void volumen(double ancho, double altura, double largo) { // w * h * l

}

void area(double ancho, double altura, double largo){ //   

}