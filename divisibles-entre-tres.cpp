/*Recorra los números del 1 al 100 y 
Muestre los números pares o divisibles entre 3.
*/

#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    int i;

    for(i = 1; i <= 100; i++)
    {
        cout << i;

        if(i % 2 == 0)
        {
            cout << "\nEl numero par es: " << i;
        }
        while(i % 3 == 0) 
        {
            cout << "\nLos numeros divisbles por 3 es: " << i;
            break;
        }
    }
}
