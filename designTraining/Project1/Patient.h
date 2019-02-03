#pragma once
#include "Person.h"
#include<ctime>
class Patient : public Person
{
public:
	Patient(const std::string Thetitle, const std::string givenName, const std::string middleName, const std::string birthData
		, const std::string gender, const std::string address);
	~Patient();
	int GetAge();
	void PrintAge();
	void ReqGet();

private:
	std::string id;
	std::string name;
	std::string gender;
	std::string birthDate;
	int age;
	std::string accepted;
	std::string sickness;
	std::string prescriptions;
	std::string allergies;
	std::string specialReqs;
};

