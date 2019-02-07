#include "Patient.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;





void Patient::Init()
{
	srand((unsigned int)time(NULL));
	int randomAllergy;
	int randomDisease;
	randomAllergy = rand() % 15;
	randomDisease = rand() % 4;
	if (randomAllergy == MATERIAL::MILK) {
		allergy.push_back("����");
	}
	else if (randomAllergy == MATERIAL::EGG) {
		allergy.push_back("�ް�");
	}
	else if (randomAllergy == MATERIAL::FLOUR) {
		allergy.push_back("�а���");
	}
	else if (randomAllergy == MATERIAL::PEANUT) {
		allergy.push_back("����");
	}
	if (randomDisease == MATERIAL::FLU) {
		disease.push_back("����");
	}
	else if (randomDisease == MATERIAL::HEADACHE) {
		disease.push_back("����");
	}
	else if (randomDisease == MATERIAL::STOMACHACHE) {
		disease.push_back("����");
	}
	else if (randomDisease == MATERIAL::TOOTHACHE) {
		disease.push_back("ġ��");
	}

}


void Patient::PrintState()
{
	cout << "ȯ�� ����" << endl;
	cout << "�̸� : " << GetFullName() << "\n" << "�� : " << GetGender() << "\n" << "���� : " << GetDate().year << "�� " << GetDate().month << "�� " << GetDate().day << "��"
		<< "\n" << "�ּ� :" << GetAddress() << "\n" << "��ȭ��ȣ : " << GetPhone() << endl;
	cout << "���� : " << disease[0] << endl;
	if (allergy.empty()) {
		cout << "�˷�������� ����" <<"\n\n" <<endl;
		return;
	}
	cout << "�˷����� : " << allergy[0] <<"\n\n" <<endl;
}


void Patient::Test()
{
	if (allergy.empty()) {
		cout << "�˷�������� ����" << endl;
		cout << "���� : " << disease[0] << endl;
		return;
	}
	cout << "�˷����� : "<<allergy[0] << endl;
	cout << "���� : " << disease[0] << endl;
}
Patient::Patient()
{
	
}

Patient::Patient(const std::string givenName, const std::string familyName, StructModum::Date birth, const std::string gender, const std::string homeAddress, const std::string phone) 
	: Person(givenName, familyName, birth, gender, homeAddress, phone)
{

	Init();
}


Patient::~Patient()
{
}

