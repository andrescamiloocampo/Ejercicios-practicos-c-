/*Programa que determina la mayoria de edad
Autor: Andres Camilo Ocampo Ramirez
Compilado en: dev c++ 5.11
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	float nacimiento;
	float fecha_actual;
	float edad;
	
	cout<< "ingrese el año en que nacio ---> ";
	cin>> nacimiento;
	cout<< "ingrese el año actual ---> ";
	cin>> fecha_actual;
	edad= fecha_actual-nacimiento;
	cout<< "\n tu edad es "<< edad;
	
	if (nacimiento<1921)                  // se establece un limite de edad
	{
	cout<<"\n no es posible ser tan viejo"; 
	}
    if ((edad>=18) and (edad<=100))
    {	
    cout<<"\n eres mayor de edad";
    }
    	if (edad<0)
	{
	cout<< "\n no es una edad valida";
	}
    else 
    if (edad<18)
    {
	cout<< "\n no eres mayor de edad";}
		 
    return 0;
}
