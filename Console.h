#ifndef CONSOLE_H
#define CONSOLE_H


class Vehicle;

class Console{
	public:
		Console(); //constructor w/ no parameters
		void run(); //o,ti isxuei apo Console.cpp
	private:
		int choice; //choice of Main Menu
		int createChoice; //choice of Vehicle Menu

		//dhlwsh kalsewn se auto to shmeio; an nai, poiwn;

		void actionChoice(); //users choices
		int displayMainMenu() const; //display of Main Menu
		int displayVehicleMenu() const; //display of Vehicle Menu (if choosen)

		Vehicle *createObject( int ); //creates Vehicle
};

#endif
