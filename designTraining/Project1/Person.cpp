#include "Person.h"

Person::Person()
{
}

Person::Person(const std::string Thetitle, const std::string givenName, const std::string middleName, const std::string birthData, const std::string gender, const std::string address)
	:title(Thetitle), givenName(givenName), middleName(middleName), birthData(birthData), gender(gender), address(address)
{
	FullName = middleName + givenName;
}

Person::~Person()
{
}

void Person::Print()
{
	std::cout << title << "\n" << givenName << "\n" << middleName << "\n" << FullName << std::endl;
}

std::string Person::GetName()
{
	return FullName;
}

std::string Person::GetGender()
{
	return gender;
}

std::string Person::GetBirthDate()
{
	return birthData;
}
