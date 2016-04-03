// Inclusao de codigo extra
#include<iostream>

//------------------------------------------------------------------

// Funcao principal
int main () 
{
	//--------------------------------------------------------------
	// Declaracao e Inicializacao de VARIAVEIS
	float Hipotenusa = 0.0f;
	float Cateto1 = 0.0f
	float Cateto2 = 0.0f;
	//-----------------------------------------------------------------------------
	
	//-----------------------------------------------------------------------------
	// Leitura de dados - entrada padrao
	
	std::cout << "\t Digite o valor da hipotenusa: " << std::endl << "\t";
	std::cin >> Hipotenusa;

	std::cout << "\t Digite o valor do primeiro cateto " << std::endl << "\t";
	std::cin >> Cateto1;

	std::cout << "\t Digite o valor do segunto cateto: " << std::endl << "\t";
	std::cin >> Cateto2;

	std::cout << "--------------------------------------" << std::endl;
	//----------------------------------------------------------------------------
	
	//----------------------------------------------------------------------------
	// Processamento efetivo - resolve o problema
	(Cateto1*Cateto1) + (Cateto2*Cateto2) = (Hipotenusa*Hipotenusa)
	//----------------------------------------------------------------------------
	
	//----------------------------------------------------------------------------
	// Mostra Resultado
	std::cout << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << " a hipotenusa e:\t" << Hipotenusa << std::endl;
	std::cout << "---------------------------" << std::endl;
	//---------------------------------------------------------------------------
} 
//-------------------------------------------------------------------------------