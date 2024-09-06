#include<iostream>

using namespace std;

class Student
{
	char* surname, * name, * patronymic;
	int birthDay, birthMonth, birthYear;
	char* phoneNumber;
	char* country, * city;
	char* institutionName, * groupNumber;

public:
	Student()
	{
		surname = name = patronymic = nullptr;
		birthDay = birthMonth = birthYear = 0;
		phoneNumber = nullptr;
		country = city = nullptr;
		institutionName = groupNumber = nullptr;
	}

	Student(const char* Surname, const char* Name, const char* Patronymic, int BirthDay, int BirthMonth, int BirthYear, 
		const char* PhoneNumber, const char* Country, const char* City, const char* InstitutionName, const char* GroupNumber)
	{
		surname = new char[strlen(Surname) + 1];
		strcpy_s(surname, strlen(Surname) + 1, Surname);

		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);

		patronymic = new char[strlen(Patronymic) + 1];
		strcpy_s(patronymic, strlen(Patronymic) + 1, Patronymic);

		birthDay = BirthDay;
		birthMonth = BirthMonth;
		birthYear = BirthYear;

		phoneNumber = new char[strlen(PhoneNumber) + 1];
		strcpy_s(phoneNumber, strlen(PhoneNumber) + 1, PhoneNumber);

		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);

		city = new char[strlen(City) + 1];
		strcpy_s(city, strlen(City) + 1, City);

		institutionName = new char[strlen(InstitutionName) + 1];
		strcpy_s(institutionName, strlen(InstitutionName) + 1, InstitutionName);

		groupNumber = new char[strlen(GroupNumber) + 1];
		strcpy_s(groupNumber, strlen(GroupNumber) + 1, GroupNumber);
	}

	void Print()
	{
		cout << "Full name: " << surname << " " << name << " " << patronymic << endl;
		cout << "Birthday: " << birthDay << "." << birthMonth << "." << birthYear << endl;
		cout << "Phone number: " << phoneNumber << endl;
		cout << "Country: " << country << "\tCity: " << city << endl;
		cout << "Institution: " << institutionName << "\tGroup: " << groupNumber << endl;
	}

	void Input()
	{
		char buff[50];

		cout << "Enter Surname: ";
		cin >> buff;
		SetSurname(buff);

		cout << "Enter Name: ";
		cin >> buff;
		SetName(buff);

		cout << "Enter Patronymic: ";
		cin >> buff;
		SetPatronymic(buff);

		cout << "Enter Birth Day: ";
		cin >> birthDay;

		cout << "Enter Birth Month: ";
		cin >> birthMonth;

		cout << "Enter Birth Year: ";
		cin >> birthYear;

		cout << "Enter Phone Number: ";
		cin >> buff;
		SetPhoneNumber(buff);

		cout << "Enter Country: ";
		cin >> buff;
		SetCountry(buff);

		cout << "Enter City: ";
		cin >> buff;
		SetCity(buff);

		cout << "Enter Institution Name: ";
		cin >> buff;
		SetInstitutionName(buff);

		cout << "Enter Group Number: ";
		cin >> buff;
		SetGroupNumber(buff);
	}

	void SetSurname(const char* Surname)
	{
		if (surname != nullptr) 
		{
			delete[] surname;
		}
		surname = new char[strlen(Surname) + 1];
		strcpy_s(surname, strlen(Surname) + 1, Surname);
	}
	
	char* GetSurname()
	{
		return surname;
	}

	void SetName(const char* Name)
	{
		if (name != nullptr)
		{
			delete[] name;
		}
		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);
	}

	char* GetName()
	{
		return name;
	}

	void SetPatronymic(const char* Patronymic)
	{
		if (patronymic != nullptr)
		{
			delete[] patronymic;
		}
		patronymic = new char[strlen(Patronymic) + 1];
		strcpy_s(patronymic, strlen(Patronymic) + 1, Patronymic);
	}

	char* GetPatronymic()
	{
		return patronymic;
	}

	void SetBirthDay(int BirthDay)
	{
		birthDay = BirthDay;
	}

	int GetBirthDay()
	{
		return birthDay;
	}

	void SetBirthMonth(int BirthMonth)
	{
		birthMonth = BirthMonth;
	}

	int GetBirthMonth()
	{
		return birthMonth;
	}

	void SetBirthYear(int BirthYear)
	{
		birthYear = BirthYear;
	}

	int GetBirthYear()
	{
		return birthYear;
	}

	void SetPhoneNumber(const char* PhoneNumber)
	{
		if (phoneNumber != nullptr)
		{
			delete[] phoneNumber;
		}
		phoneNumber = new char[strlen(PhoneNumber) + 1];
		strcpy_s(phoneNumber, strlen(PhoneNumber) + 1, PhoneNumber);
	}

	char* GetPhoneNumber()
	{
		return phoneNumber;
	}

	void SetCountry(const char* Country)
	{
		if (country != nullptr)
		{
			delete[] country;
		}
		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);
	}

	char* GetCountry()
	{
		return country;
	}

	void SetCity(const char* City)
	{
		if (city != nullptr)
		{
			delete[] city;
		}
		city = new char[strlen(City) + 1];
		strcpy_s(city, strlen(City) + 1, City);
	}

	char* GetCity()
	{
		return city;
	}

	void SetInstitutionName(const char* InstitutionName)
	{
		if (institutionName != nullptr)
		{
			delete[] institutionName;
		}
		institutionName = new char[strlen(InstitutionName) + 1];
		strcpy_s(institutionName, strlen(InstitutionName) + 1, InstitutionName);
	}

	char* GetInstitutionName()
	{
		return institutionName;
	}

	void SetGroupNumber(const char* GroupNumber)
	{
		if (groupNumber != nullptr)
		{
			delete[] groupNumber;
		}
		groupNumber = new char[strlen(GroupNumber) + 1];
		strcpy_s(groupNumber, strlen(GroupNumber) + 1, GroupNumber);
	}

	char* GetGroupNumber()
	{
		return groupNumber;
	}

	~Student()
	{
		delete[] surname;
		delete[] name;
		delete[] patronymic;
		delete[] phoneNumber;
		delete[] country;
		delete[] city;
		delete[] institutionName;
		delete[] groupNumber;
	}

};

int main()
{
	Student me("Martyniuk", "Oleh", "Valeriyevich", 5, 10, 2002, "+380997542712", "Ukraine", "Odesa", "Odesa Technological University IT STEP", "CS-P-231");
	me.Print();

	Student inputTest;
	inputTest.Input();
	inputTest.Print();
}