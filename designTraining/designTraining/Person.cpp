#include "Person.h"





Person::Person(const std::string givenName, const std::string familyName, const std::string birth, const std::string gender, const std::string homeAddress, const std::string phone)
	:givenName(givenName), familyName(familyName), gender(gender), homeAddress(homeAddress),phone(phone)
{
	std::string year = birth.substr(0, 4);
	std::string month = birth.substr(4, 2);
	std::string day = birth.substr(6, 2);
	SBirthDate.year = atoi(year.c_str());
	SBirthDate.month = atoi(month.c_str());
	SBirthDate.day = atoi(day.c_str());
	fullName = givenName + " " + familyName;
	
}

Person::~Person()
{
}

void Person::Print()
{
	std::cout << fullName << "\n" << gender << "\n" << homeAddress << "\n" << phone << "\n"<<SBirthDate.year << "\n"<<SBirthDate.month << "\n" <<SBirthDate.day << std::endl;
}
