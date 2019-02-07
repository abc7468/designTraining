#include "Patient.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;




void Patient::AllergyList()
{
	allergiesList.push_back("우유");
	allergiesList.push_back("달걀");
	allergiesList.push_back("땅콩");
	allergiesList.push_back("밀가루");
}

void Patient::DiseasesList()
{
	diseasesList.push_back("감기");
	diseasesList.push_back("두통");
	diseasesList.push_back("치통");
	diseasesList.push_back("복통");
}

void Patient::PriscriptionsList()
{
	prescriptions.push_back("감기약(우유)");
	prescriptions.push_back("두통약(달걀)");
	prescriptions.push_back("치통약(땅콩)");
	prescriptions.push_back("복통약(밀가루)");
}

void Patient::Init()
{
	srand((unsigned int)time(NULL));
	int randomVal;
	randomVal = rand() % 15;
	if (randomVal == 1) {
		allergies.push_back(allergiesList[0]);
	}
	else if (randomVal == 2) {
		allergies.push_back(allergiesList[1]);
	}
	else if (randomVal == 4) {
		allergies.push_back(allergiesList[2]);
	}
	else if (randomVal == 7) {
		allergies.push_back(allergiesList[3]);
	}
	else
		return;
}
void Patient::Test()
{
	if (allergies.empty()) {
		cout << "알러지반응 없음" << endl;
		return;
	}
	cout << allergies[0] << endl;
}
Patient::Patient()
{
	
}

Patient::Patient(const std::string givenName, const std::string familyName, StructModum::Date birth, const std::string gender, const std::string homeAddress, const std::string phone) 
	: Person(givenName, familyName, birth, gender, homeAddress, phone)
{
	AllergyList();
	DiseasesList();
	PriscriptionsList();
	Init();
}


Patient::~Patient()
{
}

