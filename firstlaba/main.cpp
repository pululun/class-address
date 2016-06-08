#include <iostream>
#include "Address.h"
using namespace std;

int main (int argc, char *argv[])
{
// Copy constructor: start
	cout << "************************************************************************" << endl;
	Address address("pululun", "pr. Moskovskiu", 99), baddress=address;
	cout << "[Copy constructor]" << endl;
	cout << "Name: " << address.getName() << endl;
	cout << "Street: " << address.getStreet() << endl;
	cout << "House Number: " << address.getHouseNumber() << endl << endl;
	cout << "[Copy object]" << endl;
	cout << "Name: " << baddress.getName() << endl;
	cout << "Street: " << baddress.getStreet() << endl;
	cout << "House Number: " << baddress.getHouseNumber() << endl << endl;
	cout << "************************************************************************" << endl;
// Copy constructor: end

// An array of addresses located in static memory: start
	cout << "************************************************************************" << endl;
	Address addressarr[2];
	cout << "[An array of addresses located in static memory]" << endl;
	for (int i=0;i<2;i++){
		cout << "Name: " << addressarr[i].getName() << endl;
		cout << "Street: " << addressarr[i].getStreet() << endl;
		cout << "House Number: " << addressarr[i].getHouseNumber() << endl << endl;
	}
	cout << "************************************************************************" << endl;
//  An array of addresses located in static memory: end

// An array of addresses located in dynamic memory: start
	cout << "************************************************************************" << endl;
	Address* addressd = new Address[2];
	cout << "[An array of addresses located in dynamic memory]" << endl;
	for (int i=0;i<2;i++){
		cout << "Name: " << (addressd + i)->getName() << endl;
		cout << "Street: " << (addressd + i)->getStreet() << endl;
		cout << "House Number: " << (addressd + i)->getHouseNumber() << endl << endl;
	}
	delete []addressd;
	cout << "************************************************************************" << endl;
// An array of addresses located in dynamic memory: end

//  : start
	cout << "************************************************************************" << endl;
	Address addresspf;
	void (Address::*pf)(char* );
	pf=&Address::setName;
	void (Address::*pfs)(char* );
	pfs=&Address::setStreet;
	void (Address::*pfh)(int );
	pfh=&Address::setHouseNumber;
	cout << "[A function pointer]" << endl;
	(addresspf.*pf)("Sidarov");
	(addresspf.*pfs)("Gogarina");
	(addresspf.*pfh)(13);
	cout << "Name: " << addresspf.getName() << endl;
	cout << "Street: " << addresspf.getStreet() << endl;
	cout << "House Number: " << addresspf.getHouseNumber() << endl << endl;
	cout << "************************************************************************" << endl;
//  : end
	return 0;
}
