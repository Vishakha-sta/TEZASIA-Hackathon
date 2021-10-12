#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "student.h"
int main()
{
    fstream F;
    F.open("stud.db", ios::in | ios::binary);
    int rollno, found;
    student S;
    if (F == NULL)
    {
        cout << "\t\t\t\t\t\t\t\t\tUser not exist..." << endl;
    }
    else
    {
        cout << "\t\t\t\t\t\t\t\tEnter Roll No. of Student: ";
        cin >> rollno;
        while (!F.eof())
        {
            F.read((char *)&S, sizeof(S));
            if (F.eof())
            {
                break;
            }
            found = S.search(rollno);
            if (found)
            {
                char ch;
                S.putstudent();
                cout << "\n\t\t\t\t\t\t\t\t\t-:Do you wanna Proceed Furthur to Print Marksheet[Y/N]:";
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    S.Marksheet();
                    break;
                }
                else
                {
                    break;
                }
            }
        }

        if (!found)
        {
            cout << "\t\t\t\t\t\t\t\t\t This Student is not present in record...." << endl;
        }
    }
    F.close();
}
