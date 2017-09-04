/*
//
// coder : furkan-dev
//
// licensed by gnu-general-public-license
//
*/

#include <iostream>

using namespace std;

main () {
	
	cout << "----------------------------------------------------Welcome----------------------------------------------------" << endl;
	
	int sonSayi;
	int tutulanSayi;

	cout << "Merhaba, oncelikle aklinizdan bir sayi tutun. Ilk olarak bu sayiyi 3 ile carpin. Simdi elde ettiginiz sayiya 2 ekleyin. Bu sonucu 5 ile carpin. Son olarak da elde ettiginiz sayian 2 cikarin ve bu sayiyi buraya yazin: ";
	cin >> sonSayi;
	
	tutulanSayi = (((sonSayi + 2) / 5) - 2) / 3;
	
	cout << tutulanSayi;
	
	return 0; 
	
}
