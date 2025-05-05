
#include <iostream>

using namespace std;

int main (void)  {
         int opcion;

         double  num1, num2, resultado;
            char operacion;
            // se pide la operacion a realizar
            do {
                cout << " sumar dos numeros (1) " << endl;
                cout << " restar dos numeros (2) " << endl; 
                cout << " multiplicar dos numeros (3) " << endl;
                cout << " dividir dos numeros (4) " << endl;
                cout << " salir (5) " << endl;
                cout << " elige una opcion: " << endl;
                cin >> opcion;
                
                // se pide el primer numero
                cout << " ingrese el primer numero: " << endl;    
                cin >> num1;
                // se pide el segundo numero        
                    cout << " ingrese el segundo numero: " << endl;
                        cin >> num2;    
                            // se realiza la operacion 
    switch(opcion) {
    case 1: 
    cout << "resultado:"    << num1 + num2 << endl;
    break;  
    case 2: 
    cout << "resultado:"    << num1 - num2 << endl;
    break;
    case 3:
    cout << "resultado:"    << num1 * num2 << endl;
    break;
    case 4: cout << " resultado:"   << num1 / num2 << endl;
    if (num2 == 0) {
        cout << "la division por cero no se ha definido aun" << endl;
    } else {
        cout << "resultado:" << num1 / num2 << endl;
    }
    break;
    case 5:
    cout << "vaya con dios xd" << endl;
    break;
    default:
    cout << "opcion no valida" << endl;
    break;
    } 
while (opcion != 5); // se repite el ciclo hasta que se elige la opcion 5
    cout << "gracias por usar la calculadora, vaya con dios" << endl;
    return 0;
} return 0; // fin del programa
} // fin del main

// fin del programa