#include "prime.h"

// Permet de dire si un nombre est premier 
bool isPrime(int number){
	if(number==0 || number ==1)
		return false;
		
	if( number%2 == 0 ){   // Le nombre est pair
		return number==2;  //On retourne sa comparaison avec 2
	}
	else{
		int m = number/2;
		int i;
		for( i = 3; i < m; i++){   // On sarrete a la racine carree su nombre
			if(number%i == 0)   // On a trouvé un diviseur
				return false;
		}
		return true;  // Pas de diviseur donc le nombre est premier 
	}
}
