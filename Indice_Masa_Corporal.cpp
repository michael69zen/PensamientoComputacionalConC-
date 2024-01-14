#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    //INDICE DE MASA CORPORAL
    float peso = 0;
    float altura = 0;
    float resultado = 0;

    cout<<"Calculando el IBM"<<endl;
    cout<<"Ingrese su peso en kg: ";
    cin>>peso;
    cout<<"Ingrese altura en mtrs: ";
    cin>>altura;
    //aldoritmo para hallar el IMC
    resultado = peso/pow(altura,2);
    cout << "Su IMC es: "<<setprecision(6)<<resultado<<endl;


    return 0;
}
