#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "student.h"

int main()
{
	fstream F;
	F.open("stud.db", ios::out | ios::app | ios::binary);
	char ch;
	student S;
	do
	{
		S.getstudent();
		F.write((char *)&S, sizeof(S));
		cout << "\t\t\t\t\t\t\t\t\tAdd more students[Y/N]:" << endl;
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	F.close();
}
