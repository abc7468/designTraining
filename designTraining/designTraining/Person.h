#pragma once
#include<iostream>
#include<string>
class Person
{
public:
	Person(const std::string givenName, const std::string familyName, const std::string birth, const std::string gender,
		const std::string homeAddress, const std::string phone);
	~Person();

	void Print();
private:
	const std::string givenName;
	const std::string familyName;
	std::string fullName;

	typedef struct birthDate{
		int year;
		int month;
		int day;
	}birthDate;

	const std::string gender;
	const std::string homeAddress;
	const std::string phone;
};

