#include "Patient.h"
#include<iostream>
using namespace std;

int main() {
	Patient roy("SeongHyun", "Jang", StructModum::Date{1994,6,23}, "��", "�츮��", "01020657468");
	roy.PrintState();
	cout << "� ������ ���ðڽ��ϱ�?" << "\n"<<"1.���� ����� ����\n2.�ε� ���� ����\n3.���� �ó� ġ��\n4.�ݿ����� ���� ����\n\n\n\n";
	cout << "���� ���¼ҽ� �򲨾� ���� ���� ���� ���ؾߤ��ʸ�����Ŀ�����ä��𷪤�";


}