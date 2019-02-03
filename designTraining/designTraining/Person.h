#pragma once
#include<iostream>
#include<string>
class Person
{
public:
	Person(const std::string givenName, const std::string familyName, struct birthDate birth, const std::string gender, const std::string homeAddress, const std::string phone);
	~Person();

	typedef struct birthDate {
		int year;
		int month;
		int day;
	}birthDate;

	void Print();
private:
	const std::string givenName;
	const std::string familyName;
	std::string fullName;
	birthDate SBirthDate;
	const std::string gender;
	const std::string homeAddress;
	const std::string phone;
};

