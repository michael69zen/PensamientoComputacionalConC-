#include <iostream>
using namespace std;

int main()
{
    int edad = 0;
    cout<<"Ingrese su Edad: ";
    cin>>edad;

    if (edad >= 18){
        cout<<"Adelante es mayor de edad"<<endl;
    }else{
        cout<<"Eres menor de edad"<<endl;
    }

    return 0;
}

