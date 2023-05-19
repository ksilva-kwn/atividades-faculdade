#include <iostream>
#include <locale.h>

using namespace std; 

int main(int argc, char** argv)

{
	setlocale(LC_ALL,"portuguese");
	
	float salario, aumento, salfinal, perc;
	cout << "Informe o salário atual: ";
	cin >> salario;
	

	if (salario <= 1280)
		perc = 20;
	else
		if(salario <1700)
			perc = 15;
		else
			if (salario < 2500)
				perc= 10;
			else
				perc = 5;
			aumento = salario * perc/100;
			salfinal = salario + aumento;
			cout << "Percentual: " << perc << "%" << endl;
			cout << "Aumento R$: "<< aumento << endl;
			cout << "Salário final R$: " << salfinal;
			
	
	
	return 0;
}