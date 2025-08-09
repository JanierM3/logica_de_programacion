/*Este programa calcula la suma de los primeros N números naturales,
verifica si los números de 1 a N son primos y encuentra las factoriales de estos números.*/

#include <iostream>

using namespace std;

int main(){

    // Variables a usar
    int N, i, j, suma, factorial;
    bool esPrimo;

    suma = 0;

    // Entrada de datos
    cout << "Ingrese un numero: \n";
    cin >> N; // Pide al usuario un numero

    // Suma de los primeros numeros naturales
    for (i = 0; i <= N; i++) // Recorre de 0 a N sumando todos los valores en la variable(suma).
    {
        suma += i;
    }

    cout << "\nLa suma de los primeros: " << N << " numeros naturales es: " << suma;

    // Verifica si cada número de 0 a N es primo
    for (i = 0; i <= N; i++)
    {
        esPrimo = true;

        if (i < 2) // Todo numero menor que 2 no es primo
        {
            esPrimo = false;
        }
        else {
            
            for (j = 2; j <= i / 2; j++) 
            {
                if (i % j == 0)
                {
                    esPrimo = false;
                    break;
                }
                
            }
            
        }

        if(esPrimo){

            cout << i << " es un numero primo. \n";
        }
        else{

            cout << i << " no es un numero primo. \n";
        }
        
    }

    // Calculo del factorial
    for (i = 1; i <= N; i++)
    {
        factorial = 1;
        for (j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        cout << "\nEl factorial: " << i << " es: " << factorial;
        
    }
    
}
