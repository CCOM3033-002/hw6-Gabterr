
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265359; 

void menu_esfera();
inline void volumen(double);
inline void area(double);

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
    double radio; 
        cout << "\nEntre el radio. Debe ser un número positivo: ";
        cin >> radio;
        for (int i = 0; radio < 0; i++){
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