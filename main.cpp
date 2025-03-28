/*
Gabriel A. Ramos Rivera
Gabterr
801-24-0582
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265359; // pi constant for formulas  

// prorotypes for sphere menu, volume, area
void menu_esfera();
inline void volumen(double);
inline void area(double);
// prototype for cylinder menu, volume, area
void menu_cilindro();
inline void volumen(double, double);
inline void area(double, double);
// prototype for rectangular prism menu, volume, area
void menu_prisma_rect();
inline void volumen(double, double, double);
inline void area(double, double, double);

int main(){
    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras.\n\n"; // purpose 

    // menu to choose a shape 
    char figura;
    cout << "Escoge una de las tres figuras:\n"
    << "\ta. Esfera\n"
    << "\tb. Cilindro\n"
    << "\tc. Prima rectangular\n"
    << "Selección: ";
    cin >> figura;

    switch(figura){
        case 'a': menu_esfera(); // option a: opens sphere menu
            break;
        case 'b': menu_cilindro(); // option b: opens cylinder menu
            break;
        case 'c': menu_prisma_rect(); // option c: opens rectangular pism menu 
        default: cout << "No entró una opción valida.\n"; // input validation 
    }

    return 0;
}

void menu_esfera(){
    // menu to choose calculation
    char calculos; 
    cout << "\nEscoge entre una de las opciones:\n"
    << "\ta. Volumen\n"
    << "\tb. Área de la superficie\n"
    << "Selección: ";
    cin >> calculos;

    // get radius
    double radio; 
        cout << "\nEntre el radio. Debe ser un número positivo: ";
        cin >> radio;
    // input validation 
    for (int i = 0; radio < 0; i++){  
        cout << "No entro un número positivo.\nEntre un número positivo: ";
        cin >> radio;
    }   

    switch (calculos){
    case 'a': // option a: calculate volume 
        volumen(radio);
        break;
    case 'b': // option b: calculate area 
        area(radio);
        break;
    default: // input validation for menu
        cout << "No entró una opción valida.\n";
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
    // menu to choose calculation 
    char calculos; 
    cout << "\nEscoge entre una de las opciones:\n"
    << "\ta. Volumen\n"
    << "\tb. Área de la superficie\n"
    << "Selección: ";
    cin >> calculos;
    
    // get radius, height
    double radio, altura; 
        cout << "\nEntre el radio y la altura. Deben ser números positivos: ";
        cin >> radio >> altura;
    // input validation 
    for (int i = 0; radio < 0 || altura < 0; i++){
        cout << "No entro por lo menos un número positivo.\nEntre números positivos: ";
        cin >> radio >> altura;
    }     

    switch (calculos){
    case 'a': // option a: calculates volume
        volumen(radio, altura);
        break;
    case 'b': // option b: calculates area
        area(radio, altura); 
        break; 
    default: // input validation for menu
        cout << "No entró una opción valida.\n";
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

void menu_prisma_rect(){
    // menu to choose calculation 
    char calculos; 
    cout << "\nEscoge entre una de las opciones:\n"
    << "\ta. Volumen\n"
    << "\tb. Área de la superficie\n"
    << "Selección: ";
    cin >> calculos;

    // get width, length, height
    double ancho, largo, altura; 
        cout << "\nEntre el ancho, largo y altura. Deben ser números positivos: ";
        cin >> ancho >> largo >> altura;
    // input validation
    for (int i = 0; ancho < 0 || largo < 0 || altura < 0; i++){
        cout << "No entro por lo menos un número positivo.\nEntre números positivos: ";
        cin >> ancho >> largo >> altura;
    }   

    switch (calculos){
    case 'a': // option a: calculate volume
        volumen(ancho, largo, altura);
        break;
    case 'b': // option b: calculate area
        area(ancho, largo, altura);
        break;
    default: // input validation for menu
        cout << "No entró una opción valida.\n";
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