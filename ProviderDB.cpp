#include "ProviderDB.h"
#include <iostream>
//*****************************************************************
   // FILE:      Provider.cpp
   // AUTHOR:    Chase Pranga
   // LOGON ID:  z1788222
   // DUE DATE:  9/26/17
   //
   // PURPOSE:   Implementation for the ProviderDB class, which represents
   //            information about a database of health care provider.
   //*****************************************************************

//Default constructor for ProviderDB class
ProviderDB()
{
}
//Alternate constructor for ProviderDB class
ProviderDB(const char* databaseName)
{
	ifstream inFile;//declares infput file strream variable
	inFile.open(databaseName);//opens the file stream
	inFile.read((char*) this,sizeof(ProviderDB));//imports the data into ProviderDB
	inFile.close();//closes the file stream
}
/*
Purpose: prints out the ProviderDb objects
Arguments:nothing
Returns:nothing
*/
const void print()
{
	cout<<"Health Care Provider Listing";//prints out descriptive header line
	cout<<endl;
	for(int i = 0; i <sizeof(ProviderDB);i++)
		ProviderDB[i].print();

}
/*
Purpose: sorts the providerDb in descending order, based on the provider number
Arguments:nothing
Returns:nothing
*/
void sortByProviderNumber()
{
	int i, j;
	Provider bucket;

	for (i = 1; i < numProviders; i++)
     	 {
		bucket = [i];
		for (j = i; (j > 0) && (strcmp(providerArray[j-1].getProviderNumber(), bucket.getProviderNumber()) > 0); j--)
			providerArray[j] = providerArray[j-1];
		providerArray[j] = bucket;
	}
   
}
/*
Purpose:sorts the providerDb based on specialty, in ascending order
Arguments:nothing
Returns:nothing
*/
void sortBySpecialty()
{
        int i, j;
        Provider bucket;

        for (i = 1; i < numProviders; i++)
         {
                bucket = [i];
                for (j = i; (j > 0) && (strcmp(providerArray[j-1].getSpecialty(), bucket.getSpecialty()) < 0); j--)
                        providerArray[j] = providerArray[j-1];
                providerArray[j] = bucket;
        }

}
/*
Purpose: sorts the providerDb based on Name, in descending order
Arguments:nothing
Returns:nothing
*/
void sortByName()
{
        int i, j;
        Provider bucket;

        for (i = 1; i < numProviders; i++)
         {
                bucket = [i];
                for (j = i; (j > 0) && (strcmp(providerArray[j-1].getName(), bucket.getName()) > 0); j--)
                        providerArray[j] = providerArray[j-1];
                providerArray[j] = bucket;
        }

}

