#include <iostream>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Spanish");
    int N, i, j, k;
    double suma;
    unsigned long long factorial;
    bool esPrimo;
    
    // Creación de la matriz
    int matriz[10][10];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = i + j + 1;
        }
    }
    cout << "Matriz: ";

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cout << matriz[i][j] << " "; // Imprime la matriz
        }
        cout << "";
    }

    cout << "\nIngresa un numero para el tamano de la busqueda de primos (N): ";
    cin >> N;

    cout << "\nNúmeros primos en la matriz: ";

    for(i = 0; i < 10; i++){
       
        for (j = 0; j < 10; j++)
        {
            esPrimo = true;

            if (matriz[i][j] <= 1)
            {
                esPrimo = false;
            }

            for(k = 2; k <= matriz[i][j] / 2; k++){

                if (matriz[i][j] % k == 0)
                {
                    esPrimo = false;
                    break;
                } 
            }

            if (esPrimo)
            {
                cout << matriz[i][j] << " es un numero primo.";
            }
        }
    }
    cout << "\nIngresa el numero de terminos para la serie matematica (N): ";
    cin >> N;
    
    // Serie matemática
    suma = 0;
    for(i = 1; i <= N; i++){
        suma += 1.0 / i;
    }
    cout << "\nLa suma de la serie matematica es: " << suma;
    cout << "\nIngresa el número para calcular factoriales (N): ";
    cin >> N;

    // Factorial
    for (i = 1; i <= N; i++)
    {
        factorial = 1;

        for(j = 1; j <= i; j++){
            factorial *= j;
        }
        cout << "\nEl factorial de " << i << " es: " << factorial;
    }
}
