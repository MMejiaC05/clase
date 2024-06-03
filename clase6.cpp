#include <iostream>
using namespace std;

int suma (int x, int y)
{
    return x+y;
}

int resta (int x, int y)
{
    return x-y;
}

int multiplicacion (int x, int y)
{
    return x*y;
}
float division (float x , float y){
    return x/y;
}
int main (){

int a;
int b;
int opc;

cout << "ingrese un numero entero a = " << endl;
cin >> a ;

cout << "ingrese un numero enter b = " << endl;
cin >> b ;

cout << "Eliga la opcion que desea: " << endl << "1. sumar" << endl << "2. restar " << endl << "3. multiplicar " << endl << "4. division " << endl << " otro numero: salir " << endl;
cout << " su opcion es: ";
cin >> opc;

switch (opc)
{
case 1:
cout << "el resultado de " << a << " + " << b << " es " << suma(a,b);
break;
case 2:
cout << "el resultado de " << a << " - " << b << " es " << resta(a,b);
break;
case 3:
cout << "el resultado de " << a << " * " << b << " es " << multiplicacion(a,b);
break;
case 4:
cout << "el resultado de " << a << " / " << b << " es " << division(a,b);
break;

default:
cout << "No hice nada";
break;

}

return 0;



}