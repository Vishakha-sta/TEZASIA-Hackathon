class student
{
private:
	int roll_no;
	char name[30];
	int p, c, m;

public:
	void getstudent()
	{
		cout << "\n\t\t\t\t\t\t\t\t\tEnter Roll No. of student:";
		cin >> roll_no;
		cout << "\t\t\t\t\t\t\t\t\tEnter Name of student:";
		cin >> name;
		cout << "\t\t\t\t\t\t\t\t\tEnter marks of physics:";
		cin >> p;
		cout << "\t\t\t\t\t\t\t\t\tEnter marks of Chemistry:";
		cin >> c;
		cout << "\t\t\t\t\t\t\t\t\tEnter marks of Maths:";
		cin >> m;
	}
	void putstudent()
	{
		cout << "\n\n\t\t\t\t\t\t\t\t\tRoll No. of student:" << roll_no << endl;
		cout << "\t\t\t\t\t\t\t\t\tName of student:" << name << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tMarks of student:-" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tMarks of Physics:" << p << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tMarks of Chemistry:" << c << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tMarks of Maths:" << m << endl;
	}
	void Marksheet()
	{
		float t;
		string div, rem;
		float per;
		system("color 0A");
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t~Marksheet~" << endl;
		cout << "\n\t\t\t\t\t\t\t\t Roll No.:" << roll_no << "\t\t\tName:" << name << endl;
		cout << "\t\t\t\t\t\t\t\t ================================================" << endl;
		cout << "\t\t\t\t\t\t\t\t| Subject\t| Total Marks\t| Marks Obtained|" << endl;
		cout << "\t\t\t\t\t\t\t\t|===============================================|" << endl;
		cout << "\t\t\t\t\t\t\t\t| Physics\t|\t100\t|\t" << p << "\t|" << endl;
		cout << "\t\t\t\t\t\t\t\t| Chemistry\t|\t100\t|\t" << c << "\t|" << endl;
		cout << "\t\t\t\t\t\t\t\t| Maths\t\t|\t100\t|\t" << m << "\t|" << endl;
		cout << "\t\t\t\t\t\t\t\t|===============================================|" << endl;
		t = p + c + m;
		cout << "\t\t\t\t\t\t\t\t| Total Marks:\t|\t300\t|\t" << fixed << setprecision(0) << t << "\t|" << endl;
		cout << "\t\t\t\t\t\t\t\t*************************************************" << endl;
		cout << "\t\n\t\t\t\t\t\t\t\t\t-Result-" << endl;
		cout << "\t\t\t\t\t\t\t\t ________________________________" << endl;
		per = t / 3;
		cout << "\t\t\t\t\t\t\t\t| Percentage:\t|\t" << fixed << setprecision(2) << per << "\t|" << endl;
		if (p >= 33 & c >= 33 & m >= 33)
		{
			rem = "Congratulation you are passed.....";
			if (per >= 60)
			{
				div = "1st";
			}
			else if (per >= 33)
			{
				div = "2nd";
			}
		}
		else
		{
			div = "Fail";
			if (p < 33 && c < 33 && m < 33)
			{
				rem = "Fail In Physics,Chemistry,Maths";
			}
			else if (p < 33 && c < 33)
			{
				rem = "Fail In Physics & Chemistry";
			}
			else if (p < 33 && m < 33)
			{
				rem = "Fail In Physics & Maths";
			}
			else if (m < 33 && c < 33)
			{
				rem = "Fail In Maths & Chemistry";
			}
			else if (p < 33)
			{
				rem = "Fail In Physics";
			}
			else if (c < 33)
			{
				rem = "Fail In Chemistry";
			}
			else if (m < 33)
			{
				rem = "Fail In Maths";
			}
		}
		cout << "\t\t\t\t\t\t\t\t| Division:\t|\t" << div << "\t|" << endl;
		cout << "\t\t\t\t\t\t\t\t********************************" << endl;
		cout << "\n\t\t\t\t\t\t\t\t Remark: " << rem << endl;
		cout << endl;
		cout << endl;
	}

	int search(int);
};
int student::search(int roll_no)
{
	if (this->roll_no == roll_no)
	{
		return (1);
	}
	return (0);
}
