#include"basis.h"

Basis::Basis(){

}


int Basis::get_rolling(int sidedDice){

	return rand() % sidedDice + 1 ;
}

