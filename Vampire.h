#include"basis.h"
class Vampire:public Basis
{
public:
	Vampire();
	int attack();  /*virtual interface.*/
	void defense(int); /*virtual interface.*/
};