#pragma once
#include<string>
#include<vector>
namespace MATERIAL {
	enum Eallergies {
		MILK,
		EGG,
		PEANUT,
		FLOUR
	};

	enum Edisease {
		FLU,
		HEADACHE,
		TOOTHACHE,
		STOMACHACHE
	};

	enum Ediscription {
		FLU_MILK,
		FLU_EGG,
		HEADACHE_EGG,
		HEADACHE_PEANUT,
		TOOTHACHE_PEANUT,
		TOOTHACHE_FLOUR,
		STOMACHACHE_MILK,
		STOMACHACHE_FLOUR
	};
}
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

