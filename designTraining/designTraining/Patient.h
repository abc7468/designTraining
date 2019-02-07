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

	
	void AllergyList();
	void DiseasesList();
	void PriscriptionsList();
	void Init();
	void Test();


private:
	static int id;
	int age;

	std::vector<std::string> allergiesList;
	std::vector<std::string> diseasesList;
	std::vector<std::string> prescriptionsList;

	std::vector<std::string> prescriptions;
	std::vector<std::string> allergies;
	std::vector<std::string> specialReqs;
};

