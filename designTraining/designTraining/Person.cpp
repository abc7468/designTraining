#include "Person.h"





Person::Person(const std::string givenName, const std::string familyName, const std::string birth, const std::string gender, const std::string homeAddress, const std::string phone)
{
	birthDate birthDate;
	std::string year = birth.substr(0, 4);
	std::string month = birth.substr(4, 2);
	std::string day = birth.substr(6, 2);
	birthDate.year = atoi(year.c_str());
	birthDate.month = atoi(month.c_str());
	birthDate.day = atoi(day.c_str());
	fullName = givenName + " " + familyName;
	
}

Person::~Person()
{
}

void Person::Print()
{
	std::cout << fullName << "\n" << gender << homeAddress<< phone << std::endl;
}
