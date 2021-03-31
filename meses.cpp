/* Programa que determina la cantidad de meses
entre dos años.
Autor: Andres Camilo Ocampo Ramirez
Compilado en: dev c++ 5.11
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	float a1;
	float a2;
	float cantidad_meses1;
	float cantidad_meses2;
	cout<< "ingrese el año 1 ---> ";
	cin>> a1;
	cout<< "ingrese el año 2 ---> ";
	cin>> a2;
	cantidad_meses1 = ((a1-a2)*12); //Se crean dos variables de meses
	cantidad_meses2 = ((a2-a1)*12); //Para que pueda funcionar tambien a la inversa 
	
	if (a1>a2)
	{
		cout<< "la cantidad de meses es " << cantidad_meses1;
	}
	else 
	if (a1<a2)
	{
		cout<< "la cantidad de meses es " << cantidad_meses2;
	}

	
    return 0;
	
	
}

