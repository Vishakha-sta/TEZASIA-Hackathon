#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "student.h"

int main()
{
	fstream F;
	F.open("stud.db", ios::in | ios::binary);
	char ch;
	student S;
	if (F == NULL)
	{
		cout << "Record not found..." << endl;
	}
	else
	{
		while (!F.eof())
		{
			F.read((char *)&S, sizeof(S));
			if (F.eof())
			{
				break;
			}
			S.putstudent();
		}
	}
	F.close();
}
