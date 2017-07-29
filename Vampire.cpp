#include"Vampire.h"


#include<iostream>
using namespace std;

Vampire::Vampire(){

	Armor =3;
	StrengthPoints =8;
	name = "Vampire";

}

//get the bubba hits
int Vampire::attack(){
	int hits = 0;
	for(int i = 0;i<1;i++){
		hits += get_rolling(12);
	}  //get the hits
	
	cout << name<<" attack " << hits << " hits." << endl;
	return hits;
}



void Vampire::defense(int hits)
{
	int defend = 0;
	int lossPoint = 0;
	if(-1 == hits){
	
		cout<< name << " has looked Medusa in the eyes and turn to stone!"<<endl;
		StrengthPoints = 0;
		cout << name <<" has" << StrengthPoints << " points." << endl;
	}
	if(get_rolling(6) < 4){
	
		cout << name <<" their opponent does not actually attack him!" << endl;
		cout << name <<" lose 0 points." << endl;
		cout << name <<" has " << StrengthPoints << " points." << endl;
		return;
	}

	defend += get_rolling(6);
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