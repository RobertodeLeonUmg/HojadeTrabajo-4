//Roberto Carlos de León Gramajo
//5090-23-1762
//Hoja de trabajo#4
//Tenemos un nuevo codigo para obtener una biblioteca para hacer operaciones, yo ya conocía la biblioteca Math.h, pero tiene los mismo beneficios cmath que es del lenguaje C.
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
//Establecemos procedimientos sin retorno, donde se haga el procedimiento de suma, resta, multiplicación, división, y el resto como flotante, donde x, y , se haga todo una operación.
void suma(float num, float num1) {
	system("cls");
	float resultado = 0;
	cout <<"\n\n#Suma"<< endl;
	cout<<"Primer valor "<<num<<" Segundo valor "<<num1<< endl;
    resultado = (num + num1);
    cout << "Nuestra suma es: " << resultado << endl;
}

void resta(float num2, float num3) {
	system("cls");
    float resultado = 0;
    cout <<"\n\n#Resta"<< endl;
    cout<<"Primer valor "<<num2<<" Segundo valor "<<num3<< endl;
    resultado = (num2 - num3);
    cout << "Nuestra resta es: " << resultado << endl;
}

void multiplicacion(float num4, float num5) {
	system("cls");
    float resultado = 0;
    cout <<"\n\n#Multiplicacion"<< endl;
    cout<<"Primer valor "<<num4<<" Segundo valor "<<num5<< endl;
    resultado = (num4 * num5);
    cout << "Nuestra multiplicacion es: " << resultado << endl;
}

void division(float num6, float num7) {
	system("cls");
    float resultado = 0;
    cout <<"\n\n#Division"<< endl;
    cout<<"Primer valor "<<num6<<" Segundo valor "<<num7<< endl;
    if (num7 != 0) {
        resultado = (num6 / num7);
        cout << "Nuestra division es: " << resultado << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }
}
//fmod, lo estableci para que se encontrara entre x y y, el resto de los flotantes que existen entre un sistema de medicion de uno, con el otro.
void divisionC(float num8, float num9) {
	system("cls");
    float resultado = 0;
    cout <<"\n\n#DivisionTipoC"<< endl;
    cout<<"Primer valor X "<<num8<<" Segundo valor Y "<<num9<< endl;
    if (num9 != 0) {
                resultado = fmod(num8, num9);
                cout << "El flotante es: " << resultado << endl;
            } else {
                cout << "Error: Modulo por cero.\n";
                resultado = NAN;
            }
}
//Estableci un menú independinte, para que no se vea opacado o dificil de leer, al momento de analizar el programa, gracias a que si tiene algunas condiciones que puede alargar el contenido, de igual manera, para el momento de imprimir el programa, este no se vea afectado en la limpieza de pantalla
int operaciones() {
	system("cls");
    char eleccion;
    cout <<"\n\n\t" << "//Hoja de trabajo#4\\" << endl;
    cout << "Seleccione una operacion aritmetica:" << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cout << "%" << endl;
    cout << endl;
    cout << "Escoge una opcion: ";
    cin >> eleccion;
    return eleccion;
}

int main() {
    int ciclo;
    cout << "\t\t Sistema Aritmetico ";
    cout << "\n\n\tPara iniciar el programa, indica cuantas veces se repetira el cilco: ";
    cin >> ciclo;
//Entendí que debía de repetirse muchas veces todo el procedimiento, por eso mismo realice todo el procedimiento de las 2 y unicos valores que se ingresan en el programa, para que se repitieran según el usuario desee.
    for (int i = 0; i < ciclo; ++i) {

        float Valor1, Valor2;
		char operador;
        cout << "\nIngrese el primer numero: ";
        cin >> Valor1;
        cout << "Ingrese el segundo numero: ";
        cin >> Valor2;
		operador = operaciones();
//establecemos un Switch con la condición que ingresen el signo de la operación que necesitan hacer, o quieren hacer, ahorando tiempo en hacer solo una, y que esta tenga definicido cada uno de los procedimientos, como tambien sus valores, cada procedimiento sin retorno, se maneja atravez de "Valor 1 y Valor 2".
		switch (operador) {
        	case '+':
            	suma(Valor1, Valor2);
            break;
        	case '-':
            	resta(Valor1, Valor2);
            break;
        	case '*':
           		multiplicacion(Valor1, Valor2);
            break;
        	case '/':
            	division(Valor1, Valor2);
            break;
        	case '%':
        		divisionC(Valor1, Valor2);
        	//Sino es la opcion necesaria, no se dará una respuesta más que una erronea.
            break;
        	default:
                cout << "Opcion no encontada. Intenta de nuevo." << endl;
    	}
    }

    return 0;
}

