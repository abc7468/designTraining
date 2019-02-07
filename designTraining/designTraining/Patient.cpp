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
		allergy.push_back("우유");
	}
	else if (randomAllergy == MATERIAL::EGG) {
		allergy.push_back("달걀");
	}
	else if (randomAllergy == MATERIAL::FLOUR) {
		allergy.push_back("밀가루");
	}
	else if (randomAllergy == MATERIAL::PEANUT) {
		allergy.push_back("땅콩");
	}
	if (randomDisease == MATERIAL::FLU) {
		disease.push_back("감기");
	}
	else if (randomDisease == MATERIAL::HEADACHE) {
		disease.push_back("두통");
	}
	else if (randomDisease == MATERIAL::STOMACHACHE) {
		disease.push_back("복통");
	}
	else if (randomDisease == MATERIAL::TOOTHACHE) {
		disease.push_back("치통");
	}

}


void Patient::PrintState()
{
	cout << "환자 정보" << endl;
	cout << "이름 : " << GetFullName() << "\n" << "성 : " << GetGender() << "\n" << "생일 : " << GetDate().year << "년 " << GetDate().month << "월 " << GetDate().day << "일"
		<< "\n" << "주소 :" << GetAddress() << "\n" << "전화번호 : " << GetPhone() << endl;
	cout << "병명 : " << disease[0] << endl;
	if (allergy.empty()) {
		cout << "알레르기반응 없음" <<"\n\n" <<endl;
		return;
	}
	cout << "알레르기 : " << allergy[0] <<"\n\n" <<endl;
}


void Patient::Test()
{
	if (allergy.empty()) {
		cout << "알레르기반응 없음" << endl;
		cout << "병명 : " << disease[0] << endl;
		return;
	}
	cout << "알레르기 : "<<allergy[0] << endl;
	cout << "병명 : " << disease[0] << endl;
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

