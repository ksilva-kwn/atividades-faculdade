#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"portuguese");
	 
	 float L1, L2, L3;
	 
	 cout << "Insira a medida dos lados do triangulo em cm: ";
	 cin >> L1 >> L2 >> L3;
	 
	 
	 if (L1 == L2 && L1 == L3)
	 	cout << "Triangulo Equilatero";
	 else
	 	
     if ((L1 + L2 == L3 || L1+L3 == L2 || L2 + L3 == L1))
		 cout << "Não forma triângulo";
	 else
	 	
	 if ((L1 == L2 && L1 != L3) ||
	 	(L1 == L3 && L1 != L2) ||
	    (L2 == L3 && L2 != L1))
	 	cout << "Triangulo Isoceles";
     else
	 	cout << "Triangulo Escaleno";
	 
	 
	return 0;
}