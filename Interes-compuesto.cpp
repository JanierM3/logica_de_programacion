/*Algoritmo que permita calcular el interes compuesto*/

#include <iostream>
#include <conio.h>
#include <clocale>
#include <math.h>

using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");

    // Variables
    float capitalInicial = 0;
    float tasaDeInteres = 0;
    int tiempoAnos = 0;
    float resultado = 0;
    int frecuencia = 0;
    int n = 1;

    // Validaciones
    while (capitalInicial <= 0)
    {
        cout << "Ingrese el capital inicial \n";
        cin >> capitalInicial;
    }
    while (tiempoAnos <= 0)
    {
        cout << "Ingrese el tiempo en años \n";
        cin >> tiempoAnos;
    }

    while (tasaDeInteres <= 0)
    {
        cout << "Ingrese la tasa de interes anual\n";
        cin >> tasaDeInteres;
    }

    cout << "Seleccione la frecuencia de capitalizacion(debe selecionar la opción en numeros): \n";
    cout << "1.(Dairio)\n";
    cout << "2.(Semanal)\n";
    cout << "3.(Mensual)\n";
    cout << "4.(Trimestral)\n";
    cout << "5.(Semestral)\n";
    cout << "6.(Anual)\n";
    cin >> frecuencia;

    switch (frecuencia)
    {
    case 1:
        cout << "Diario" << endl;
        n = 365;
        break;

    case 2: 
        cout << "Semanal" << endl;
        n = 52;
        break;

    case 3:
        cout << "Mensual" << endl;
        n = 12;
        break;

    case 4:
        cout << "Trimestral" << endl;
        n = 4; 
        break;

    case 5:
        cout << "Semestral" << endl;
        n = 2;
        break;

    case 6:
        cout << "Anual" << endl;
        n = 1;
        break;

    default:
        cout << "Frecuencia no valida" << endl;
        break;
    }

    // Calcular el interes compuesto usando la frecuencia
    resultado = capitalInicial * pow(1 +( tasaDeInteres / 100) / n, n * tiempoAnos); 

    cout << "El dinero generado al final de la inversion es de: $" << resultado << endl;

    getch();
    return 0;
}

/*Bueno esto es de un video que estaba viendo lo agregado fui yo*/