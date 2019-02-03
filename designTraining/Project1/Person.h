#pragma once
#include<string>
#include<iostream>
class Person
{
public:
	Person();
	Person(const std::string Thetitle, const std::string givenName, const std::string middleName, const std::string birthData
	, const std::string gender, const std::string address);
	~Person();

	void Print();
	std::string GetName();
	std::string GetGender();
	std::string GetBirthDate();

private:
	std::string title;
	std::string givenName;
	std::string middleName;
	std::string familyName;
	std::string FullName;
	std::string birthData;
	std::string gender;
	std::string address;
	int phone;
};

