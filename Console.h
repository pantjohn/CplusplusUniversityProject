#ifndef CONSOLE_H
#define CONSOLE_H

//#include den-kserw-kai-egw-poies klaseis
class Vehicle;

class Console{
	public:
		Console();
		void run();
	private:
		int choice;
		int createChoice; //pithanotat autes oi duo times int na mhn xreiazontai kan

		//dhlwsh kalsewn se auto to shmeio; an nai, poiwn;

		void actionChoice();
		int displayMainMenu() const;
		int displayVehicleMenu() const;

		Vehicle *createObject( int );
};

#endif
