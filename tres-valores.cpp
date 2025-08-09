/*Se solicitan  tres valores, 
si todos los números son iguales se debe imprimir la suma 
del primero con el segundo y a este resultado se lo multiplica por el tercero.*/

#include <iostream>
#include <Windows.h>

using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);
    int suma, num1, num2, num3;
    suma = 0;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    if(num1 == num2 && num2 == num3){
        suma = num1 + num2;
        num3 *= suma;
        
        cout << "\nLa suma de los dos primeros valores: " << suma; 
        cout << "\nLa multiplicación del resultado de la suma es: " << num3;

    }
    else {
        cout << "Los números no son iguales";
    }

}
