#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"portuguese");
	
	//Variaveis
	int p1, p2, m;
	
	//Ler a nota da prova 1
	cout << "Insira sua nota da P1:";
	cin >> p1;
	
	//Ler a nota da prova 2
	cout << "Insira sua nota da P2:";
	cin >> p2;
	
	//Calcular a media
	m=(p1+p2)/2;
	
	cout << "Sua média é: " << m << endl;
	
	//Mostrar se vai ser aprovado ou nao
	if (m>=6)
		cout <<"Parabéns Guerreiro,Aprovado" << endl;
	else 
	{
		if (m<6)
			cout << "PUUTTSS... Reprovado";
	}
	
	return 0;
}