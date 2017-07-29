#include"basis.h"
class Bubba:public Basis
{
public:	
	Bubba();
	int attack();  /*virtual interface.*/
	void defense(int); /*virtual interface.*/
};