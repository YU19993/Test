#include"Medusa.h"


#include<iostream>
using namespace std;

Medusa::Medusa(){
	Armor =3;
	StrengthPoints =8;
	name = "Medusa";

}

//get the bubba hits
int Medusa::attack(){
	int hits = 0;
	for(int i = 0;i<2;i++){
		hits += get_rolling(6);
	}  //get the hits
	
	if(12 == hits){

		cout << "Target has looked her in the eyes and is turned to stone!" << endl;
		return -1;
	}
	cout << name<<" attack " << hits << " hits." << endl;
	return hits;
}



void Medusa::defense(int hits)
{
	int defend = 0;
	int lossPoint = 0;
	if(-1 == hits){
	
		cout<< name << " has looked Medusa in the eyes and turn to stone!"<<endl;
		StrengthPoints = 0;
		cout << name <<" has" << StrengthPoints << " points." << endl;
	}

	for(int i = 0;i<1;i++){
		defend += get_rolling(6);
	}
	
	lossPoint = hits - Armor - defend;
	if(lossPoint <= 0){ //no hit
		lossPoint = 0;
	}
	cout << name <<" lose " << lossPoint << " points." << endl;
	//desecnd the lossPoint
	if(StrengthPoints > lossPoint) 
		StrengthPoints -= lossPoint;
	else
		StrengthPoints = 0;

	cout << name <<" has " << StrengthPoints << " points." << endl;
	
}