#include "Person.h"
#include <iostream>
using namespace std;


Person::Person()
{
}

Person::Person(const std::string givenName, const std::string familyName, StructModum::Date birth, const std::string gender, const std::string homeAddress, const std::string phone)
	:givenName(givenName), familyName(familyName), Date(birth), gender(gender), homeAddress(homeAddress),phone(phone)
{
	fullName = givenName + " " + familyName;
}



Person::~Person()
{
}

std::string Person::GetFullName()
{
	return fullName;
}

std::string Person::GetGender()
{
	return gender;
}

std::string Person::GetPhone()
{
	return phone;
}

std::string Person::GetAddress()
{
	return homeAddress;
}

StructModum::Date Person::GetDate()
{
	return Date;
}


