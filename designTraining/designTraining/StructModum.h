#pragma once
#include<string>
#include<vector>
class StructModum
{
public:
	typedef struct Date {
		int year;
		int month;
		int day;
	}Date;
	
	
	std::vector<std::string> allergiesList;
	std::vector<std::string> diseasesList;
	std::vector<std::string> prescriptionsList;

	void AllergyList();
	void DiseasesList();
	void PriscriptionsList();


	StructModum();
	~StructModum();

};

