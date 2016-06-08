#include "Address.h"

Address::Address(void){
	cout << "******[The default constructor]******" << endl;
	this->name = {"kapcap"};
	this->street = {"voulstreet"};
	this->houseNumber = 666;
}

Address::Address(char* name,char* street,int houseNumber){
	cout << "******[With the parameters of the constructor]******" << endl;
	this->name = name;
	this->street = street;
	this->houseNumber = houseNumber;
}

Address::Address(const Address & address){
	cout << "******[Copy constructor]******" << endl;
	this->name = address.name;
	this->street = address.street;
	this->houseNumber = address.houseNumber;
}

void Address::setName(char* name){
	this->name = name;
}

char* Address::getName(){
	return this->name;
}

void Address::setStreet(char* street){
	this->street = street;
}

char* Address::getStreet(){
	return this->street;
}

void Address::setHouseNumber(int houseNumber){
	this->houseNumber = houseNumber;
}

int Address::getHouseNumber(){
	return this->houseNumber;
}

Address::~Address(void){
	 cout << "******[destructor]******" << endl;
}
