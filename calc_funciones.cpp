/* Programa que realiza operaciones utilizando solo sumas */

#include<iostream>

using namespace std;

int resta(int op1,int op2);
int suma(int op1,int op2);
int producto(int op1, int op2);
int division(int op1, int op2);

int resultado,diferencia,resto;
int op1=1,op2=1;
int multiplo;
char operacion;

int main()
{	
	cout << " ** ¡Hola! Este es un programa para hacer operaciones binarias con números naturales **" << endl << endl;		
	cout <<  " ** Ingrese 0 en cualquier momento para salir. **" << endl << endl; 		 /* Menú del programa */
	cout << "    Operaciones: + - * /  " << endl << endl;
	cout << " Ingresar <operando><operacion><operando> y presionar Enter. Ejemplo: 27+3" << endl << endl;
	do	
	{
		cin >> op1;		/* Se ingresa el primer número, la operación y el segundo número */
		
		if (op1 == 0) 

		break;

		cin >> operacion;

		if (operacion == 0) 

		break;

		cin >> op2;

		if (op2 == 0) 

		break;

		switch (operacion)	/* Dependiendo de la operación, salta a los distintos bloques de instrucciones */
		{
			case '+':
			
				cout << "=" << suma(op1,op2) << endl << endl;

				break;

			case '-':

				cout << "=" << resta(op1,op2) << endl << endl;

				break;

			case '*':

				cout <<"=" << producto(op1,op2) << endl << endl;

				break;

			case '/':

				cout <<  "=" << division(op1,op2) ;				/* Muestra el resultado y el resto */
				cout << "    Resto : " << resto << endl << endl;

				break;

				default:

				cout << " ** ** ** ** " << endl;

				break;
		}
	}
	while (operacion !=0);

return 0;
}

int resta(int op1, int op2) /* Realiza la operación de resta sumando sucesivamente */
{
	if (op2 == 0 || op2 > op1)
	{
		cout << endl << " ** No trabajamos con números negativos ** " << endl << endl;
		return 0;
	}
	
	else
	{
		for ( diferencia = 0 ; (diferencia + op2) < op1 ; diferencia ++ )	
		{					
		}
	}

	return diferencia;
}

int suma(int op1,int op2)
{
	return op1+op2;
}

int producto(int op1,int op2) /* Realiza la operación de multiplicación sumando el primer operacion a si mismo op2 veces*/
{
	multiplo = 0;

	for ( int x=0 ; x < op2 ; x++ )			
	{
		multiplo = multiplo + op1;
	}
	
	return multiplo;
}

int division(int op1,int op2) /* Realiza la operación de división restando sucesivamente */
{
	resto = op1;

	for ( resultado = 0 ; op1 >= op2; resultado++)	
	{
		op1=resta(op1,op2);	
		resto=diferencia;
	}

	return resultado;
}
