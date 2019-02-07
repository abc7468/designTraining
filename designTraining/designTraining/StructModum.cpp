#include "StructModum.h"



void StructModum::AllergyList()
{
	allergiesList.push_back("우유");
	allergiesList.push_back("달걀");
	allergiesList.push_back("땅콩");
	allergiesList.push_back("밀가루");
}

void StructModum::DiseasesList()
{
	allergiesList.push_back("감기");
	allergiesList.push_back("두통");
	allergiesList.push_back("치통");
	allergiesList.push_back("복통");
}

void StructModum::PriscriptionsList()
{
	allergiesList.push_back("감기약(우유)");
	allergiesList.push_back("두통약(달걀)");
	allergiesList.push_back("치통약(땅콩)");
	allergiesList.push_back("복통약(밀가루)");
}

StructModum::StructModum()
{
}


StructModum::~StructModum()
{
}
