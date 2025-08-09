// Realizar diferentes conteos y operaciones

#include <iostream>

using namespace std;

int main() {
    // Variables a usar
    int i, j, n, suma;

    suma = 0;

    cout << "Ingrese un número: ";
    cin >> n;

    // Bucle anidado
    for (i = 1; i <= n; i++) // Este bucle se repite de i = 1 hasta i = n en cada iteración.
    {
       suma += i;
       cout << "i: " << i;

       cout << "La suma de 1 a " << n << " es: " << suma;

       j = n;
       while (j > 0)
       {
            cout << "j: " << j << "";
            j -= j; // j siempre quedara en 0
       }

       j = 1;
       do{
            cout << "j: " << j;
            j += 1;

            if (j == 0)
            {
                break;
            }   
       }while (j > n); // Si j es mayor que n hace que solo se ejecute una vez
    }
}
