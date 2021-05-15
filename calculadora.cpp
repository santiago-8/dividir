/* Programa que realiza operaciones utilizando solo sumas */

#include<iostream>

using namespace std;

int resultado,diferencia,resto;
int op1=1,op2=1;
int multiplo;
char operacion;
int main()
{	
	cout << " ** ¡Hola! Este es un programa para hacer operaciones binarias con números naturales **" << endl << endl;		
	cout <<  " ** Ingrese 0 en cualquier momento para salir. **" << endl << endl; 		 /* Menú del programa */
	cout << " ** Operaciones: + - * / ** " << endl << endl;
	cout << " Ingresar <operando><operacion><operando> y presionar Enter. Ejemplo: 27+3" << endl << endl;
	do	
	{
				cin >> op1;							/* Se ingresa el primer número, la operación y el segundo número */
				
				if (op1 == 0) break;
				
				cin >> operacion;

				if (operacion == 0) break;

				cin >> op2;

				if (op2 == 0) break;

		switch (operacion)								/* Dependiendo de la operación, salta a los distintos bloques de instrucciones */
		{
			case '+':

				resultado = op1 + op2;						/* Realiza la operación y la guarda en la variable resultado */

				cout << "=" << resultado << endl << endl;

				break;

			case '-':
					if (op2 == 0 || op2 > op1)
					{
					 	cout << endl << " ** No trabajamos con números negativos ** " << endl << endl;
					}
					
					else
					{
						for ( diferencia = 0 ; (diferencia + op2) < op1 ; diferencia ++ )	
						{						/* Realiza la operación de resta sumando sucesivamente */
						}

					cout << " =" << diferencia << endl << endl;
					}
				break;

			case '*':
						multiplo = 0;

						for ( int x = 0 ; x < op2 ; x ++ )		/* Realiza la operación de multiplicación sumando el primer operacion a si mismo op2 veces*/
						{
							multiplo = multiplo + op1;
						}

					cout <<" =" << multiplo << endl << endl;
				break;

			case '/':
					resto = op1;

					for ( resultado = 0 ; resto >= op2; resultado++)	/* Realiza la operación de división restando sucesivamente */
					{
						for ( diferencia = 0 ; (diferencia + op2) < resto ; diferencia ++ )	
						{
						}

						resto = diferencia;
					}

					cout <<  " =" << resultado ;				/* Muestra el resultado y el resto */
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

