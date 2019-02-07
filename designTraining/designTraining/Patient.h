#pragma once
#include"Person.h"
#include<vector>
class Patient : public Person
{
public:
	Patient();
	~Patient();
	void GivePrescriptions();
	


private:
	static int id;
	int age;
	StructModum::Date accepted;
	std::vector<std::string> prescriptions;
	std::vector<std::string> allergies;
	std::vector<std::string> specialReqs;
};

