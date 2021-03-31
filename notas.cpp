/* programa que calcula el promedio de 4 notas
 con la misma ponderacion
 Autor: Andres Camilo Ocampo Ramirez 
 Compilado en dev c++ 5.11
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	float nota1,nota2,nota3,nota4;
	float promedio_notas;
	
	cout<< "ingrese la nota 1 --->";
	cin>> nota1;
    cout<< "ingrese la nota 2 --->";
	cin>> nota2;
	cout<< "ingrese la nota 3 --->";
	cin>> nota3;
    cout<< "ingrese la nota 4 --->";
	cin>> nota4;
	promedio_notas=(nota1+nota2+nota3+nota4)/4;
	cout<< "\n su nota final es " << promedio_notas;
	
	if ((promedio_notas >=3.0) and (promedio_notas <=5.0))
	{
		cout<< "\n ha aprobado la materia";
	}
	if ((promedio_notas <3.0) and (promedio_notas>0))
	{
		cout<< "\n ha reprobado la materia";
	}
	else
	{
	if ((promedio_notas>5.0) or (promedio_notas<0))
	{
		cout<< "\n no es una nota valida";
	}
} 
	return 0;
}
