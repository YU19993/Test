#include"Vampire.h"
#include"Medusa.h"
#include"Bubba.h"

#include"time.h"
#include<iostream>
#include<string>

using namespace std;

int main() {

	srand(time(NULL));
	string choose;
	int hits;

	Basis* Creature1, *Creature2;
	//get the Creature1 's type
	cout << "Please chose the first type of creature. " << endl;	
	cout << "Vampire\nMedusa\nBubba" << endl << endl;
	cin >> choose;

	if (choose == "Vampire") {
		Creature1 = new Vampire();
	}
	else if (choose == "Medusa") {
		Creature1 = new Medusa();
		
	}
	else {
		Creature1 = new Bubba();
	}

	//get the Creature2 's type
	cout << "Please chose the second type of creature. " << endl;	
	
	cout << "Vampire\nMedusa\nBubba" << endl << endl;
	cin >> choose;

	if (choose == "Vampire") {
		Creature2 = new Vampire();
	}
	else if (choose == "Medusa") {
		Creature2 = new Medusa();
	
	}

	else   {
		Creature2 = new Bubba();
	
	}
	//attack and defense until one have no StrengthPoints
	while ((Creature1->StrengthPoints) != 0 && (Creature2->StrengthPoints != 0)) {
		hits = Creature1->attack();
		Creature2->defense(hits);
		cout<<endl;
		hits = Creature2->attack();
		Creature1->defense(hits);
		cout<<endl;
	}

	//output who win
	if(Creature1->StrengthPoints  == 0)
		cout<< "Creature1 Win!"<<endl;
	else
		cout<<  "Creature2 Win!"<<endl;


	return 0;

}