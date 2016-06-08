#include <iostream>

using namespace std;

#ifndef _ADDRESS_H_
#define _ADDRESS_H_
class Address{
	private:
		char* name;
		char* street;
		int houseNumber;
	public:
		Address(void);
		Address(char* name, char* street = "testovay",int houseNumber = 0);
		Address(const Address&);	
		void setName(char* );
		char* getName();
		void setStreet(char* );
		char* getStreet();
		void setHouseNumber(int );
		int getHouseNumber();
		~Address(void);



};
#endif
