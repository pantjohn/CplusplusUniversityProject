#include "Console.h"
#include "World.h"
//orismoi sunarthsewn-melwn ths klashs World (???) h Vehicles (???) h ...
//#include "smallApparatus.h"
//#include "bigApparatus.h"
//#include "helicopter.h"
//#include "airplane.h"

using std:: cout;
using std:: cin;

enum MenuOption {VEHICLE=1, SEEWORLD, SEEINFO, EXIT};
enum createMenuOption {SMALL_APPARATUS=1, BIG_APPARATUS, HELICOPTER, PLANE};

Console::Console():choice(0),createChoice(0){} //constructor, intialize variables

Point World::gettingStarted(){}		//create the map

void Console::run(){
	actionChoice();
	//pithanotata na xreiastei kai allo mhnuma ston xrhsth, px "Goodbye"
}

void Console::actionChoice(){

	Vehicle *currentVehiclePtr;	//?
	bool userExited = false;	//check for exit

	while( !userExited ){

		int mainMenuSelection = displayMainMenu();

		switch( mainMenuSelection ){
		case VEHICLE:
			int vehicleMenuSelection = displayVehicleMenu();
			currentVehiclePtr = createVehicle( vehicleMenuSelection );
			currentVehiclePtr->excecute();
			delete currentVehiclePtr;
			break;
		case SEEWORLD:
		//{code}
		case SEEINFO:
		//{code}
		case EXIT:			//switch 4, exit the system
			cout<<"\nExiting the system...";
			userExited=true;	//end while loop
			break;
		default:			//invalid entrance
			cout<<"\nYou did not enter a valid selection. Please try again.";
			break;
		}
	}
}

int Console::displayMainMenu() const{
	
	cout<<"\nHello! What would you like to do?";
	cout<<"1 - Create an object";
	cout<<"2 - Show the World Map";
	cout<<"3 - Show info for a particular vehicle or spot";
	cout<<"4 - Exit";

	cout<<"\nEnter a choice: ";
	cin>>choice;
	return choice;
}

int Console::displayVehicleMenu() const{

	cout<<"\nWhat would you like to create?";
	cout<<"1 - A small fire apparatus";
	cout<<"2 - A big fire apparatus";
	cout<<"3 - A helicopter";
	cout<<"4 - A plane";

	cout<<"\nEnter a choice: ";
	cin>>createChoice;
	return createChoice;
}

Vehicle *Console::createVehicle( int type ){
	Vehicle *tempPtr;

	switch( type ){
	case SMALL_APPARATUS:
		tempPtr = new smallApparatus(fuel, fuelCons, water, waterCons, age, condition, speed); //oi parametroi den einai apolutoi
		break;
	case BIG_APPARATUS:
		tempPtr = new bigApparatus(fuel, fuelCons, water, waterCons, age, condition, speed);
		break;
	case HELICOPTER:
		tempPtr = new helicopter(fuel, fuelCons, water, waterCons, age, condition, speed);
		break;
	case AIRPLANE:
		tempPtr = new airplane(fuel, fuelCons, water. waterCons, age, condition, speed);
		break;
	}

	return tempPtr;
}
