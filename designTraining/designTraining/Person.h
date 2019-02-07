#pragma once
#include"StructModum.h"
class Person
{
public:



	Person(const std::string givenName, const std::string familyName, struct StructModum::Date birth, const std::string gender, const std::string homeAddress, const std::string phone);
	~Person();

	void Print();
private:
	const std::string givenName;
	const std::string familyName;
	std::string fullName;
	StructModum::Date SBirthDate;
	const std::string gender;
	const std::string homeAddress;
	const std::string phone;
};

