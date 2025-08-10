// Desarrollar un algoritmo que permita empacar un regalo.

#include <iostream>
#include <Windows.h>
#include <algorithm>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    string regalo_si; 

    cout << "\nPasos para empacar un regalo";
    cout << "\n¿Ya tienes el regalo?";
    cin >> regalo_si;

    transform(regalo_si.begin(), regalo_si.end(), regalo_si.begin(), ::tolower); // Esto aplica una función a cada elemento
    
    if(regalo_si == "si" || regalo_si == "SI" || regalo_si == "Si")
    {

        cout << "\nSigue estos pasos para empacar tu regalo";
        cout << "\nPaso 1. Quitarle la etiqueta de precio al regalo esto es crucial";
        cout << "\nPaso 2. Colocar el regalo dentro de una caja con cuidado";
        cout << "\nPaso 3. Desenrrolla el papel de regalo";
        cout << "\nPaso 4. Extiende la caja con la parte superior hacia abajo sobre el papel de regalo";
        cout << "\nPaso 5. Envuelve la caja con el papel de regalo";
        cout << "\nPaso 6. Corta el papel de regalo de manera que se superponga";
        cout << "\nPaso 7. Pega un lado del papel de regalo sobre la caja";
        cout << "\nPaso 8. Dobla el otro lado del papel de regalo y pégalo con una cinta adhesiva";
        cout << "\nPaso 9. Introduce el papel de regalo en las esquinas de la caja";
        cout << "\nPaso 10. Pliega los dobleces en forma de triángulo";
        cout << "\nPaso 11. Dobla la solapa superior y la solapa inferior juntas para cerrar bien el extremo de la caja";
        cout << "\nPaso 12. Asegura los lados con cinta adhesiva";
        cout << "\nPaso 13. Repite el procedimiento con el otro lado";
        cout << "\nPaso 14. Coloca una cinta decorativa o un lazo para terminar de empacar el regalo";
        cout << "\n🎉Felicidades si seguiste estos pasos tu regalo esta listo para esa persona especial para ti🎊";

    }

    else
    {
        cout << "Primero consigue el regalo";
    }
}
