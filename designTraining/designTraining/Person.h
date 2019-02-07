#pragma once
#include"StructModum.h"
class Person
{
public:


	Person();
	Person(const std::string givenName, const std::string familyName, StructModum::Date birth, const std::string gender, const std::string homeAddress, const std::string phone);
	~Person();

private:
	const std::string givenName;
	const std::string familyName;
	std::string fullName;
	StructModum::Date Date;
	const std::string gender;
	const std::string homeAddress;
	const std::string phone;
};

