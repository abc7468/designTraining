#include "Person.h"




Person::Person(const std::string givenName, const std::string familyName, struct birthDate birth, const std::string gender, const std::string homeAddress, const std::string phone)	
	:givenName(givenName), familyName(familyName), SBirthDate(birth), gender(gender), homeAddress(homeAddress), phone(phone)
{
}

Person::~Person()
{
}

void Person::Print()
{
	std::cout << fullName << "\n" << gender << "\n" << homeAddress << "\n" << phone << "\n"<<SBirthDate.year << "\n"<<SBirthDate.month << "\n" <<SBirthDate.day << std::endl;
}
