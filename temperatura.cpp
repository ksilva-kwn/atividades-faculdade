#include <iostream>
#include <locale.h>

using namespace std; 

int main(int argc, char** argv)

{
	setlocale(LC_ALL,"portuguese");
	
	int tempF, tempC;
	
	cout << "Insira o valor da temperatuda em Fahrenheit: ";
	cin >> tempF;
	tempC = (tempF-32)*5/9;
	
	cout << "A temperatura em Celsius é: " << tempC;	
	
	
	return 0;
}