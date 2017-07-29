#include"basis.h"
class Medusa:public Basis
{
public:	
	Medusa();
	int attack();  /*virtual interface.*/
	void defense(int); /*virtual interface.*/
};