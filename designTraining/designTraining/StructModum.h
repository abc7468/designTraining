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
	
	typedef struct RandomVal {
		std::vector <std::string> allergies;
		std::vector <std::string> sickness;
	}RandomVal;


	StructModum();
	~StructModum();

};

