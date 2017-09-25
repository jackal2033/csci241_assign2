#ifndef PROVIDERDB_H
#define PROVIDER_H
//includes the Provider header so that i can make Provider objects
#include "Provider.h"
//*****************************************************************
   // FILE:      ProviderDB.h
   // AUTHOR:    Chase Pranga
   // LOGON ID:  z1788222
   // DUE DATE:  9/26/17
   //
   // PURPOSE:   Declaration for the ProviderDB class, which represents
   //            information about a database containing heathcare
  //		providers databases
   //*****************************************************************

class ProviderDB
{
	private:
		Provider providerObjects[40] ={};//stores the provider objects from the providerDB
		int numberProviders =0;//stores the number of providers currently in array
	public:
		ProviderDB();//default consturctor
		ProviderDB(char * const); //alternate constructor
		void print();//print method
		void sortByProviderNumber();//sorts the provider array based on the provider number
		void sortBySpecialty();//sorts the provider array based on the specialty in descending order, using insertion sort
		void sortByName();
}

#endif
