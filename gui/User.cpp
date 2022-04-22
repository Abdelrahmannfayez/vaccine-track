#include "User.h"
#include <iostream>
#include <fstream>
#include<map>
using namespace std;
string User::NAtIDTextBox_Text;
bool User::check_id(string id)
{
	fstream IDFile;
	IDFile.open("txts\\id.txt", ios::in);
	if (IDFile.is_open())
	{
		string line;
		while (getline(IDFile, line))
		{
			if (line == id)
				return true;
		}
		return false;
	}
}

void User::read_data(map<string, User>& users) {
	fstream File1;
	fstream File2;
	fstream File3;
	fstream File4;
	fstream File5;
	fstream File6;
	fstream File7;
	fstream File8;
	File1.open("txts\\users.txt", ios::in);
	File2.open("txts\\id.txt", ios::in);
	File3.open("txts\\age.txt", ios::in);
	File4.open("txts\\country.txt", ios::in);
	File5.open("txts\\governorate.txt", ios::in);
	File6.open("txts\\pass.txt", ios::in);
	File7.open("txts\\status.txt", ios::in);
	File8.open("txts\\gender.txt", ios::in);
	string name;
	string id;
	string gender;
	string age;
	string Country;
	string Governorate;
	string password;
	string status;
	while (getline(File2, id)) {
		getline(File1, name);
		getline(File3, age);
		getline(File4, Country);
		getline(File5, Governorate);
		getline(File6, password);
		getline(File7, status);
		getline(File8, gender);
		User user1(name, id, gender, age, Country, Governorate, password, status);
		users.insert(pair<string, User>(id, user1));

	}
	File1.close();
	File2.close();
	File3.close();
	File4.close();
	File5.close();
	File6.close();
	File7.close();
	File8.close();
}
void User::update_files(map<string, User>& users)
{
	fstream userFile;
	fstream idFile;
	fstream ageFile;
	fstream contFile;
	fstream govFile;
	fstream passFile;
	fstream statusFile;
	fstream genderFile;
	userFile.open("txts\\users.txt", ofstream::out | ofstream::trunc);
	idFile.open("txts\\id.txt", ofstream::out | ofstream::trunc);
	ageFile.open("txts\\age.txt", ofstream::out | ofstream::trunc);
	contFile.open("txts\\country.txt", ofstream::out | ofstream::trunc);
	govFile.open("txts\\governorate.txt", ofstream::out | ofstream::trunc);
	passFile.open("txts\\pass.txt", ofstream::out | ofstream::trunc);
	statusFile.open("txts\\status.txt", ofstream::out | ofstream::trunc);
	genderFile.open("txts\\gender.txt", ofstream::out | ofstream::trunc);

	for (auto it : users)
	{
		userFile << it.second.name << '\n';
		idFile << it.second.id << '\n';
		ageFile << it.second.age << '\n';
		contFile << it.second.Country << '\n';
		govFile << it.second.Governorate << '\n';
		passFile << it.second.password << '\n';
		statusFile << it.second.status << '\n';
		genderFile << it.second.gender << '\n';
	}

	userFile.close();
	idFile.close();
	ageFile.close();
	contFile.close();
	govFile.close();
	passFile.close();
	statusFile.close();
	genderFile.close();
}
void User::login(string natID, string pass)
{
	int indexofuser;
	int counter = 0;
	id = natID;
	password = pass;
	fstream id_File;
	fstream pass_File;
	id_File.open("txts\\id.txt", ios::in);
	if (id_File.is_open())
	{
		string line;
		bool flag = false;
		while (getline(id_File, line))
		{
			counter++;

			if (line == id)
			{
				indexofuser = counter;
				flag = true;
				break;
			}

		}

		if (flag)
		{
			pass_File.open("txts\\pass.txt", ios::in);
			if (pass_File.is_open())
			{
				int c = 0;
				string line;
				while (getline(pass_File, line))
				{
					c++;
					if (c == indexofuser)
					{
						if (password == line)
						{
							//cout << "\n----\nhi" << "\n----\n";
							correct_NatId = true;
							correct_pass = true;
						}
						else
						{
							//cout << "sorry incorrect password!\n";
							correct_pass = false;
						}
					}

				}

			}

		}
		else
		{
			//cout << "sorry there is no user with this id!\n";
			correct_NatId = false;
		}

	}
	id_File.close();
	pass_File.close();
}

void User::registration(string FullName, string NatID, string Pass, string Gender, string Age, string Country, string Gov, string Status)
{

	fstream File;
	File.open("txts\\users.txt", ios::app);
	if (File.is_open())
	{
		File << FullName;
		File << "\n";
	}

	File.close();
	File.open("txts\\id.txt", ios::app);
	if (File.is_open())
	{
		File << NatID;
		File << "\n";
	}

	File.close();
	File.open("txts\\age.txt", ios::app);
	if (File.is_open())
	{
		File << Age;
		File << "\n";
	}

	File.close();
	File.open("txts\\country.txt", ios::app);
	if (File.is_open())
	{
		File << Country;
		File << "\n";
	}

	File.close();
	File.open("txts\\governorate.txt", ios::app);
	if (File.is_open())
	{
		File << Gov;
		File << "\n";
	}

	File.close();
	File.open("txts\\pass.txt", ios::app);
	if (File.is_open())
	{
		File << Pass;
		File << "\n";
	}


	File.close();
	File.open("txts\\status.txt", ios::app);
	if (File.is_open())
	{
		File << Status;
		File << "\n";
	}


	File.close();
	File.open("txts\\gender.txt", ios::app);
	if (File.is_open())
	{
		File << Gender;
		File << "\n";
	}
	User user1(FullName, NatID, Gender, Age, Country, Gov, Pass, Status);
}
User::~User()
{
}
string User::getNAtIDTextBox_Text()
{
	return NAtIDTextBox_Text;
}
void User::setNAtIDTextBox_Text(string val)
{
	NAtIDTextBox_Text = val;
}

bool User::getdel_user_found()
{
	return del_user_found;
}

void User::setdel_user_found(bool val)
{
	del_user_found = val;
}

void User::editName(string newName, map<string, User>& users) {
	User u;
	for (auto it : users) {
		if (it.first == u.getNAtIDTextBox_Text())
		{
			it.second.name = newName;
		}
	}
}
void User::editId(string newId, map<string, User>& users) {
	User u;
	for (auto it : users) {
		if (it.first == u.getNAtIDTextBox_Text())
		{
			it.second.id = id;

		}
	}
	u.setNAtIDTextBox_Text(id);
}
void User::editGender(string newGender, map<string, User>& users) {
	User u;
	for (auto it : users) {
		if (it.first == u.getNAtIDTextBox_Text())
		{
			it.second.gender = newGender;

		}
	}
}
void User::editCountry(string newCountry, map<string, User>& users) {
	User u;
	for (auto it : users) {
		if (it.first == u.getNAtIDTextBox_Text())
		{
			it.second.Country = newCountry;

		}
	}
}
void User::editAge(string newAge, map<string, User>& users) {
	for (auto it : users) {
		if (it.first == NAtIDTextBox_Text)
		{
			it.second.age = newAge;

		}
	}
}
void User::editStatus(string newStatus, map<string, User>& users) {
	User u;
	for (auto it : users) {
		if (it.first == u.getNAtIDTextBox_Text())
		{
			it.second.status = newStatus;

		}
	}
}
void User::editPassword(string newPassword, map<string, User>& users) {
	User u;
	for (auto it : users) {
		if (it.first == u.getNAtIDTextBox_Text())
		{
			it.second.password = newPassword;

		}
	}
}
void User::editGov(string newGov, map<string, User>& users) {
	User u;
	for (auto it : users) {
		if (it.first == u.getNAtIDTextBox_Text())
		{
			it.second.Governorate = newGov;
		}
	}
}