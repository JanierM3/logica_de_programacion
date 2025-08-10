/*Se debe desarrollar un algoritmo que dado un operario se conoce su sueldo y los años de antigüedad en la empresa. 
Debe  leer los datos de entrada y mostrar:

 Si el sueldo es inferior a 2.500.000 y su antigüedad es igual o superior a 7 años, otorgarle un aumento del 10 %, mostrar el sueldo a pagar.
Si el sueldo es inferior a 2.500.000 pero su antigüedad es menor a 7 años, otorgarle un aumento de 5 %.

Debe mostrar los salarios con el aumento.
*/

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    double sueldo, anos_antiguedad, aumento, total_sueldo_a_pagar;

    cout << "Cuanto es su salario actual: ";
    cin >> sueldo; 

    cout << "Cuantos años de antiguedad tiene en la empresa: ";
    cin >> anos_antiguedad;

    if(sueldo < 2500000)
    {
        if(anos_antiguedad >= 7)
        {
            aumento = sueldo * 0.10;
        }
        else
        {
            aumento = sueldo * 0.05;
        }
    total_sueldo_a_pagar = sueldo + aumento;
    }
    else
    {
        total_sueldo_a_pagar = sueldo;
    }
    cout << "El sueldo a pagar con aumento: " << total_sueldo_a_pagar;
}
