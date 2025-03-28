/*
Gabriel A. Ramos Rivera
Gabterr
801-24-0582
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265359;

void menu_esfera();
inline void volumen(double);
inline void area(double);

void menu_cilindro();
inline void volumen(double, double);
inline void area(double, double);

void menu_prisma();
inline void volumen(double, double, double);
inline void area(double, double, double);

int main(){
    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras.\n\n";

    char figura;
    cout << "Escoge una de las tres figuras:\n"
    << "\ta. Esfera\n"
    << "\tb. Cilindro\n"
    << "\tc. Prima rectangular\n"
    << "Selección: ";
    cin >> figura;

    switch(figura){
        case 'a': menu_esfera();
            break;
        case 'b': menu_cilindro();
            break;
        case 'c': menu_prisma();
        default: cout << "No entró una opción valida.\n";
    }

    return 0;
}

void menu_esfera(){
    char calculo; 
    cout << "\nEscoge entre una de las opciones:\n"
    << "\ta. Volumen\n"
    << "\tb. Área de la superficie\n"
    << "Selección: ";
    cin >> calculo;

    double radio; 
        cout << "\nEntre el radio. Debe ser un número positivo: ";
        cin >> radio;
        if (radio < 0){
            cout << "No entro un número positivo.\nEntre un número positivo: ";
            cin >> radio;
        }   

    switch (calculo){
    case 'a': 
        volumen(radio);
        break;
    case 'b': 
        area(radio);
        break;
    default: cout << "No entró una opción valida.\n";
    }
}
void volumen(double radio) {
    double result = (4.0 / 3.0) * PI * (radio * radio * radio);
    cout << "El volumen de la esfera es: " << setprecision(2) << fixed << result << endl;
}
void area(double radio){
    double result = 4 * PI * (radio * radio); 
    cout << "El área de la superficie de la esfera es: " << setprecision(2) << fixed << result << endl;
}

void menu_cilindro(){
    char calc; 
    cout << "\nEscoge entre una de las opciones:\n"
    << "\ta. Volumen\n"
    << "\tb. Área de la superficie\n"
    << "Selección: ";
    cin >> calc;

    double radio, altura; 
        cout << "\nEntre el radio y la altura. Debe ser un número positivo: ";
        cin >> radio >> altura;
        if (radio < 0 || altura < 0){
            cout << "No entro un número positivo.\nEntre un número positivo: ";
            cin >> radio >> altura;
        }   

    switch (calc){
    case 'a': 
        volumen(radio, altura);
        break;
    case 'b': 
        area(radio, altura); 
        break;
    default: cout << "No entró una opción valida.\n";
    }
}
void volumen(double radio, double altura){
    double result = PI * (radio * radio) * altura;
    cout << "El voluemn del cilindro es: " << setprecision(2) << fixed << result << endl;
}
void area(double radio, double altura){
    double result = 2 * PI * radio * altura + 2 * PI * (radio * radio);
    cout << "El área de la superficie del cilindro es: " << setprecision(2) << fixed << result << endl;
}

void menu_prisma(){
    char calc; 
    cout << "\nEscoge entre una de las opciones:\n"
    << "\ta. Volumen\n"
    << "\tb. Área de la superficie\n"
    << "Selección: ";
    cin >> calc;

    double ancho, largo, altura; 
        cout << "\nEntre el radio y la altura. Debe ser un número positivo: ";
        cin >> ancho >> largo >> altura;
        if (ancho < 0 || largo < 0 || altura < 0){
            cout << "No entro un número positivo.\nEntre un número positivo: ";
            cin >> ancho >> largo, altura;
        }   

    switch (calc){
    case 'a': volumen(ancho, largo, altura);
        break;
    case 'b': area(ancho, largo, altura);
        break;
    default: cout << "No entró una opción valida.\n";
    }
}
void volumen(double ancho, double largo, double altura) {
    double result = ancho * largo * altura;
    cout << "El voluemn del prisma rectangular es: " << setprecision(2) << fixed << result << endl;
}
void area(double ancho, double largo, double altura){
    double result = 2 * (ancho * largo + altura * largo + altura * ancho);
    cout << "El área de la superficie del prisma rectangular es: " << setprecision(2) << fixed << result << endl;
}