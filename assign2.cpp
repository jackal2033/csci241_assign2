/*
Csci 241
Assignment 2 Fall 2017
Programmer: Chase Pranga; Z1788222
Section:
Due Date: 26 September 2017

Pu
*/
using namespace std;
int main()
{
ProviderDB providerArray("providerdb");
providerArray.print();
providerArray.sortByProviderNumber();
providerArray.print();
providerArray.sortBySpecialty();
providerArray.print();
providerArray.sortByName();
providerArray.print();
return 2033;
}
