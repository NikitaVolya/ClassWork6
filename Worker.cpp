#include "Worker.h"

Worker::Worker(const char* pName) : Worker()
{
	setName(pName);
}

Worker::Worker(const char* pName, const char* pRole, int pStartYear, int pSalary)
	: name(nullptr), role(nullptr), startYear(pStartYear), salary(pSalary)
{
	setName(pName);
	setRole(pRole);
}

Worker::~Worker()
{
	if (name)
		delete[] name;
	if (role)
		delete[] role;
} 

void Worker::setName(const char* pName)
{
	if (!pName)
	{
		std::cout << "[ INFO ] Worker: invalid value to set name!\n";
		return;
	}

	if (name)
		delete[] name;

	size_t lenght = std::strlen(pName) + 1;
	name = new char[lenght];
	for (int i = 0; i < lenght; i++)
		name[i] = pName[i];
}

void Worker::setRole(const char* pRole)
{
	if (!pRole)
	{
		std::cout << "[ INFO ] Worker: invalid value to set role!\n";
		return;
	}

	if (role)
		delete[] role;

	size_t lenght = std::strlen(pRole) + 1;
	role = new char[lenght];
	for (int i = 0; i < lenght; i++)
		role[i] = pRole[i];
}

void Worker::print(const char* end) const
{
	std::cout << "[ Worker: " << getName() << " role: " << getRole() << " year: " << startYear << " salary: " << salary << "]" << end;
}

void Worker::printY(const Worker* workers, const int workersNumber, int pYear)
{
	for (int i = 0; i < workersNumber; i++)
		if (workers[i].startYear <= pYear)
			workers[i].print();
	std::cout << std::endl;
}

void Worker::printR(const Worker* workers, const int workersNumber, const char* role)
{
	for (int i = 0; i < workersNumber; i++)
		if (std::strcmp(workers[i].role, role) == 0)
			workers[i].print();
	std::cout << std::endl;
}

void Worker::printS(const Worker* workers, const int workersNumber, int pSalary)
{
	for (int i = 0; i < workersNumber; i++)
		if (pSalary <= workers[i].salary)
			workers[i].print();
	std::cout << std::endl;
}
