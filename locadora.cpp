#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	string dia, categoria;
	float preco;
	
	cout << "\n\n Digite o preco normal do filme locado: ";
	cin >> preco;
	cout << "\n Informe se e lancamento ou comum: ";
	cin >> categoria;
	//getline  (cin , categoria);
	cout << "\n Informe o dia: ";
	//getline (cin , dia);
	cin >> dia;	
	
	if(categoria == "comum")
	{
		if(dia == "segunda" || dia == "terca" || dia == "quarta")
		{	
			preco = preco * 0.40;
			cout << "\n O preco com desconto e de: R$" << preco;		
		}
		else
		{
			cout << "\n O preco com desconto e de: R$" << preco;
		}
	}
	else
	{
		if(dia == "segunda" || dia == "terca" || dia == "quarta")
		{
			preco = preco * 0.40 * 1.15;
			cout << "\n O preco sem desconto e de: R$" << preco;		
		}
	}
	if(categoria == "lancamento")
	{
		if(dia == "segunda" || dia == "terca" || dia == "quarta")
		{	
			preco = preco * 0.40;
			cout << "\n O preco com desconto e de: R$" << preco;		
		}
		else
		{
			cout << "\n O preco com desconto e de: R$" << preco;
		}
	}
	else
	{
		if(dia == "segunda" || dia == "terca" || dia == "quarta")
		{
			preco = preco * 0.40 * 1.15;
			cout << "\n O preco sem desconto e de: R$" << preco;		
		}
	}
	
	return 0;
}
