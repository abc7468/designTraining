#include "Patient.h"
#include<iostream>
using namespace std;

int main() {
	Patient roy("SeongHyun", "Jang", StructModum::Date{1994,6,23}, "남", "우리집", "01020657468");
	roy.PrintState();
	cout << "어떤 병원을 가시겠습니까?" << "\n"<<"1.옥계 배아픈 병원\n2.인동 감기 병원\n3.구미 시내 치과\n4.금오공대 두통 병원\n\n\n\n";
	cout << "이제 오픈소스 깔꺼야 안해 병원 안해 안해야ㅏ너리ㅑㄴ커리ㅑㅓㄴ디랴ㅓ";


}