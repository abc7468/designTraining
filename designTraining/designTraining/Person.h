#pragma once
#include"StructModum.h"
class Person
{
public:


	Person();
	Person(const std::string givenName, const std::string familyName, StructModum::Date birth, const std::string gender, const std::string homeAddress, const std::string phone);
	~Person();
	std::string GetFullName();
	std::string GetGender();
	std::string GetPhone();
	std::string GetAddress();
	StructModum::Date GetDate();
private:
	std::string givenName;
	std::string familyName;
	std::string fullName;
	StructModum::Date Date;
	std::string gender;
	std::string homeAddress;
	std::string phone;
};

