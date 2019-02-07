#include "Patient.h"

int main() {
	Patient roy("SeongHyun", "Jang", StructModum::Date{1994,6,23}, "남", "우리집", "01020657468");
	roy.Test();
}