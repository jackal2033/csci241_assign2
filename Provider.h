#ifndef PROVIDER_H
#define PROVIDER_H

   //*****************************************************************
   // FILE:      Provider.h
   // AUTHOR:    Chase Pranga
   // LOGON ID:  z1788222
   // DUE DATE:  9/26/17
   // 
   // PURPOSE:   Declaration for the Provider class, which represents 
   //            information about a health care provider.
   //*****************************************************************

class Provider
{
//the private vatiables, the one whose data we'll be accessing/modifying
	private:
	char providerNumber[7] = {};
	char specialty[41] ={};
	char name[41] ={};
	char address1[41] ={};
	char address2[31] ={};
	char city[21] ={};
	char state[3] ={};
	char zipcode[6] ={};
	char phone[15] ={};
	
	public:
//default constructor
	Provider();
//function prototype
	void print() const;
	char  getProviderNumber() const;
	char getSpecialty() const;
	char getName() const;
};
#endif
