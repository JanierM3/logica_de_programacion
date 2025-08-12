// Desarrollar un algoritmo que permita encender un vehículo.
/*Jejej me sali un poco del objetivo es que tenia curiosidad por ver una animaciòn hecha en codigo*/
#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <string>

// Para esto como no sabia pedi ayuda a la AI.
// Segun su explicación esto sirve para elegir que comando usar para limpiar la pantalla es multisistemas
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

using namespace std;

int main() 
{
    // Esto es por que powershell usa otro tipo de caracteres por defecto son caracteres de USA y otros paises que no usan un teclado con ñ
    SetConsoleOutputCP(CP_UTF8);
    // Declaración de variables
    string vehiculo, tutorial_encender_vehiculo;
    int repetirOMecanico;

    cout << "¿Ya estas dentro del carro?(si o no\n)";
    cin >> vehiculo;

    // Esto sirve para que time caracteres en mayuscula y minusculas
    transform(vehiculo.begin(), vehiculo.end(), vehiculo.begin(), ::tolower);

    if(vehiculo == "si")
    {
        do
        {
            // Paso a seguir para encender un vehiculo
            cout << "Paso 1: El cilindro de la cerradura de encendido \n";
            cout << "Paso 2: Identifica el embrague, el freno y el acelerador\n";  
            cout << "Paso 3: Asegúrate de que el carro esté en neutro\n";  
            cout << "Paso 4: Arranca el motor\n";  
            cout << "Paso 5: Presiona el embrague hasta el fondo\n";  
            cout << "Paso 6: Mueve la palanca hacia la primera marcha\n";  
            cout << "Paso 7: Quita el pie del embrague suavemente\n";
            cout << "Paso 8: Comienza a presionar el acelerador\n";  
            cout << "Paso 9: Ten cuidado de no ahogar el carro\n";
            cout << "Paso 10: Pasa a la segunda marcha\n";
            cout << "Paso 11: Lo primero es comprender bien el arranque en pendientes\n";
            cout << "Paso 12: Utiliza el pedal de freno\n";
            cout << "Paso 13: Utiliza el freno de mano\n";
            cout << "Seguistes todos los pasos para encender tu vehiculo(Responde con un si o no)\n";
            cin >> tutorial_encender_vehiculo;

            transform(tutorial_encender_vehiculo.begin(), tutorial_encender_vehiculo.end(), tutorial_encender_vehiculo.begin(), ::tolower);

            if(tutorial_encender_vehiculo == "si")
            {
                // En esta parte la ai me ayudo por que aun no se nada de animaciones en c++ estoy aprendiendo el lenguaje mas adelante
                string car = "    ____\n __/  |_ \\_\n|  _     _``-.\n'-(_)---(_)--'";
                int screenWidth = 40; /*Define cuantos pasos hara la animación
                 antes del quel carro salga de pantalla(es decir 
                 cuantas posiciones horizontales vavos a moverlos)*/

                for (int pos = 0; pos < screenWidth; ++pos) { // Cada pos representa cuántos espacios se ha movido hacia la derecha.
                    system(CLEAR); // Limpia la pantalla antes de dibujar el nuevo cuadro.
                    cout << string(pos, ' ') << car << "\n"; // Esto empuja el carro a la derecha en cada iteración.
                    // Y luego imprime el dibujo en un salto de linea.

                    if (pos < 5) {
                        cout << "\nVroom...\n"; // Arranque suave
                    } else if (pos < 10) {
                        cout << "\nVROOOM!!!\n"; // Arranque mas fuerte
                    } else {
                        cout << "\nBrrrrmmm...\n"; // Motor estable
                    }
                    Sleep(150); // Pausa la animación unos 150 milisegundos
                    // Esto controla la animación.
                }
            }
            else
            {
                cout << "Veo que el carro no encendio tienes dos opciones intentarlo de nuevo o visitar el mecanico\n";
                cout << "Debes responder(1 o 2)\n";
                cout << "1. Intentarlo de nuevo\n";
                cout << "2. Llamar un mecanico o informar al seguro del carro\n";
                cin >> repetirOMecanico;

                switch (repetirOMecanico)
                {
                    case 1:
                        cout << "Intentarlo de nuevo\n";
                        
                        break;
                    
                    case 2:
                        cout << "Llamar un mecanico o informar al seguro del carro...\n";
                        break;

                    default:
                        cout << "Opción no valida\n";
                        break;
                }

            }
        }while(repetirOMecanico == 1);
    }
    else
    {
        cout << "Debes ingresar al vehiculo para poder encenderlo\n";
    }

}
