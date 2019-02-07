#pragma once
#include"Person.h"
#include<vector>
class Patient : public Person
{
public:
	Patient();
	Patient(const std::string givenName, const std::string familyName,
		StructModum::Date birth, const std::string gender, const std::string homeAddress, const std::string phone);
	~Patient();

	
	void Init();
	void PrintState();
	void Test();


private:
	static int id;
	int age;
	std::vector<std::string> specialReqs;
	std::vector<std::string> allergy;
	std::vector<std::string> disease;
	std::vector<std::string> prescription;


};

