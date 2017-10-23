#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
	string name;
	string surname;
	int age;
	string phone;
	string email;
public:
	string getName();
	string getSurname();
	string getPhone();
	string getEmail();
	int getAge();

};

class Student : public Person {
	double average;
	double presence;
public:
	double getPresence();
	double getAverage;

};

class Employee : public Person {
	int salary;
	int experience;
public:
	int getSalary();
	int getExperience();
};

class Teacher : public Employee {
	string skills[];
public:
	string getSkills();
};

class Salesman : public Employee {
	int contracts;
public:
	int getContracts();
};

class Director : public Employee {
	double rating;
public:
	double getRating();
};

class Academy {
	string name;
	string city;
	string address;
	int monthlyFee;
	int money;
	Director *director;
	Group designers[10];
	Group programmers[10];
	Group admins[10];
	Student students[100];
	Employee employees[100];
};
class Group {
	string name;
	string subject;
	Student* students[15];
	Teacher* teacher;
};

class Program {
public:
	static void load();
	//	static void save();
	static void menu();
};

void main()
{

}
/*
---����������---

1. ���������� �� ��������
- ��������
- �����
- �����
- ���������� �����
- ���������� ���������
- ���������� ����������
- ���� � ���������

2. ������� ������ ����� (��������� / ������������ / ������ �� �����)

3. ������� ���������� � ������ (����� �� ��������)
- ��������
- ������� �������
- ���������� ���������
- �������������
- ������� ���� �� ������
- ������� ������������ �� ������

4. ������� ���������� � ��������� � ������ (����� �� ��������)
- �������
- ���
- �������
- ������� ����
- ������� ������������
- �������
- Email

5. ������� ������ �����������
- �������
- ���
- �������
- ��������
- ���� (� ����)
- ������ ������� (� ��������������)
- ���������� ���������� (� �������������)
- ������� (� ���������)
- �������
- Email

6. ������� ��������� ��������
- ������� � ������ �������������
- ������� � ������ �������������
- ������ � ������ �������������
- ������ � ������ �������������

7. ������� ����������� ��������
- ��������� � ����� ������� ���������
- ��������� � ����� ������� ������
- ������������� � ���������� ����������� �����

---��������������---

1. ��������
- �������� ��������
- ������������� ��������
- ������� ��������

2. ����������
- �������� ����������
- ������������� ����������
- ������� ����������

3. ������
- �������� ������
- ������������� ������
- ������� ������

---����������---

1. �������� ������ � ������� ��������
- �� �����
- �� �������
- �� ���

2. �������� ��������� �������� � ��������

3. �������� / �������� �������� ���� ������������ �� n%

4. ������� ��������� ��������

---�����---
*/