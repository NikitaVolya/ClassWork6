#pragma once

#include <iostream>
#include <conio.h>

class Worker
{
private:
	char* name;
	char* role;
	int startYear;
	int salary;
public:
	Worker() : name(nullptr), role(nullptr), startYear(0), salary(0) {};
	explicit Worker(const char* pName);
	Worker(const char* pName, const char* pRole, int pStartYear, int pSalary);
	~Worker();

	const char* getName() const { return name ? name : "None"; }
	const char* getRole() const { return role ? role : "None"; }
	int getStartYear() const { return startYear; }
	int getSalary() const { return salary; }

	void setName(const char* pName);
	void setRole(const char* pRole);
	void setStartYear(int pStartYear) { if (pStartYear > 0) startYear = pStartYear; }
	void setSalary(int pSalary) { if (pSalary > 0) salary = pSalary; }

	void print(const char* end = "\n") const;

	static void printY(const Worker* workers, const int workersNumber, int pYear);
	static void printR(const Worker* workers, const int workersNumber, const char* role);
	static void printS(const Worker* workers, const int workersNumber, int pSalary);
};

