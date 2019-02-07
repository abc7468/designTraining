#include "Patient.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;




void Patient::AllergyList()
{
	allergiesList.push_back("����");
	allergiesList.push_back("�ް�");
	allergiesList.push_back("����");
	allergiesList.push_back("�а���");
}

void Patient::DiseasesList()
{
	diseasesList.push_back("����");
	diseasesList.push_back("����");
	diseasesList.push_back("ġ��");
	diseasesList.push_back("����");
}

void Patient::PriscriptionsList()
{
	prescriptions.push_back("�����(����)");
	prescriptions.push_back("�����(�ް�)");
	prescriptions.push_back("ġ���(����)");
	prescriptions.push_back("�����(�а���)");
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
		cout << "�˷������� ����" << endl;
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

