/*Entregar el jueves 27 para 3B y 3G
viernes 28 para 3A
Hacer un programa que haga uso de un menú donde el usuario pueda mandar llamar una de las siguientes 3 funciones, 
estas deben resolverse mediante funciones y parámetros por valor.
Para la función 1 y 3, se preguntara cual es el valor máximo para tabular y se mostrará la tabla resultante de 0 a ese valor ej.
f(x)=2x para valor máximo 4
x f(x)
0 0
1 2
2 4
3 6
4 8
En la formula 2, se mostrara el tabulador para todas las combinaciones de x y de y de 1 a 5 como tabla.
x y f(x,y)*/
#include <iostream>
#include <cmath>
float f1(float x);
int f2(int x, int y);
int f3(int x);
using namespace std;
int main ()
{
	int menu, y, n;
	char l1=200, l2=201, l3=202, l4=203, l5=204, l6=205, l7=206, l8=185, l9=186, l10=187, l11=188;
	do
	{
	
		cout << "*****BIENVENIDO AL MENU***** \n"
		<< "1. ((2x^2)^1/3)/(2x-3)\n"
		<< "2.  2*x*y-3*y \n"
		<< "3. \n"
		<< "0. SALIR \n";		
		cin >> menu;
		switch (menu)
		{
			case (1):
				cout << "introduzca el valor maximo a tabular \n";
				cin >> n;
				for(int i=0, j=0;i<=n;i++, j+=2)
				{
					cout<<"cuando X es igual a "<< j << " el resultado es " << f1((float)j)<<endl;
					cout<< "-----------------------------------------------------------------" <<endl;
				}
			break;
			case (2):
				for(int i=0;i<=5;i++)
				{
					for(int j=0;j<=5;j++)
					{
						if(f2(i,j)>=0 && f2(i,j)<10)
						{
							cout <<l2<<l6<<l6<<l6<<l4<<l6<<l6<<l6<<l4<<l6<<l6<<l6<<l10<<endl;
							cout <<l9<<" "<<i<<" "<<l9<<" "<<j<<" "<<l9<<f2(i,j)<<" "<<" "<<l9<<endl;
							cout <<l1<<l6<<l6<<l6<<l3<<l6<<l6<<l6<<l3<<l6<<l6<<l6<<l11<<endl;
						}
						else if(f2(i,j)<=-10)
						{
							cout <<l2<<l6<<l6<<l6<<l4<<l6<<l6<<l6<<l4<<l6<<l6<<l6<<l10<<endl;
							cout <<l9<<" "<<i<<" "<<l9<<" "<<j<<" "<<l9<<f2(i,j)<<l9<<endl;
							cout <<l1<<l6<<l6<<l6<<l3<<l6<<l6<<l6<<l3<<l6<<l6<<l6<<l11<<endl;
						}						
						else
						{
							cout <<l2<<l6<<l6<<l6<<l4<<l6<<l6<<l6<<l4<<l6<<l6<<l6<<l10<<endl;
							cout <<l9<<" "<<i<<" "<<l9<<" "<<j<<" "<<l9<<f2(i,j)<<" "<<l9<<endl;
							cout <<l1<<l6<<l6<<l6<<l3<<l6<<l6<<l6<<l3<<l6<<l6<<l6<<l11<<endl;							
						}
					}
					cout << endl << endl;
				}
			break;
			case (3):
				cout << "introduzca el valor maximo a tabular \n";
				cin >> n;
				if(n>0)
				{
					for(int i=0, j=0;i<=n;i++,j+=2)
					{
						cout<<"cuando X es igual a "<< j << " el resultado es " << f3(j)<<endl;
						cout<< "-----------------------------------------------------------------" <<endl;
					}
				}
				else
				{
					for(int i=0, j=0;i>=n;i--,j-=2)
					{
						cout<<"cuando X es igual a "<< j << " el resultado es " << f3(j)<<endl;
						cout<< "-----------------------------------------------------------------" <<endl;
					}
				}		
			break;
		}
	}while(menu!=0);
	return 0;
	
}
float f1(float x)
{
	float suma=0;
	suma=cbrt(pow((2*x),2));
	x=suma/((2*x)-3);
	return x;
}
int f2(int x, int y)
{
	int suma=0;
	suma=(2*x*y)-(3*y);
	return suma;
}
int f3 (int x)
{
	int suma=0;
	if(x<=0)
	{
		suma=pow((3*x),2);
		return suma;
	}
	else
	{
		suma=pow((2*x),3);
		return suma;
	}
}
