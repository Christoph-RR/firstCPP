/*
FirstCPP
Programme de calucle de taxes:
Calcul le montant de la TPS et de la TVQ au Quebec
*/
#include <iostream>

//fonction qui arrondi nombre a deux decimale max
float meRounder(float x){
	//Ajoute les deux nombre après la virgule en entier
	float longer = x * 100;

	//garde seulement les entier du montant
	int shorter = (int)longer;

	//les restes sont 3e decimal et plus
	float reste = longer - shorter;

	float result;

	//Si on doit arrondir increment
	if (reste >= 0.5)
	{
		shorter++;
	}

	result = (float)shorter;

	//division par 100 pour retourner les decimal a leurs place
	result = result / 100;

	return result;
}


int main(){
	//Valeur des taxes QC 2021 *a transformer en constante*
	float TPS = 0.05f;
	float TVQ = 0.09975f;

	float prix;
	float taxes;

	//*ajouter user input*
	prix = 100;
	
	taxes = (prix * TPS) + (prix * TVQ);
	prix = prix + taxes;

	prix = meRounder(prix);

	std::cout << prix << std::endl;

	return 0;
}