#include <stdlib.h>  
#include<string>

#ifndef BASIS
#define BASIS
class Basis   /*abstract class.*/
{

public:
	int Armor;
	int StrengthPoints;
	std::string name;
	Basis();
	int get_rolling(int);
	virtual int attack()=0;  /*virtual interface.*/
	virtual void defense(int)=0; /*virtual interface.*/
};
#endif

