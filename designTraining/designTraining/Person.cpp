#include "Person.h"

using namespace std;


Person::Person(const string givenName, const string familyName, StructModum::Date birth, const string gender, const string homeAddress, const string phone)
	:givenName(givenName), familyName(familyName), SBirthDate(birth), gender(gender), homeAddress(homeAddress), phone(phone)
{
	
}

Person::~Person()
{
}

void Person::Print()
{
	std::cout << fullName << "\n" << gender << "\n" << homeAddress << "\n" << phone << "\n"<<SBirthDate.year << "\n"<<SBirthDate.month << "\n" <<SBirthDate.day << endl;
}
