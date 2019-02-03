#define _CRT_SECURE_NO_WARNINGS
#include "Patient.h"

std::time_t t = std::time(0);
std::tm* now = std::localtime(&t);



Patient::Patient(const std::string Thetitle, const std::string givenName, const std::string middleName, const std::string birthData
	, const std::string gender, const std::string address)
	:Person(Thetitle, givenName, middleName, birthData, gender, address)
{
	age = GetAge();
}

Patient::~Patient()
{
}

int Patient::GetAge()
{
	std::string birthDate = GetBirthDate();
	std::string tempStr = birthDate.substr(0, 4);
	int tempInt = atoi(tempStr.c_str());

	return now->tm_year+1900 - tempInt;
}

void Patient::PrintAge()
{
	std::cout << age << std::endl;
}
