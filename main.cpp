
#include <iostream>
#include "Worker.h"

int main()
{
	const int workersNumber = 5;
	Worker workers[workersNumber]
	{
		{"Nikita", "back end", 2024, 1500 },
		{"Misha", "back end", 2022, 2200},
		{"Oleg", "front end", 2021, 1700},
		{"Maks", "lid", 2018, 2500},
		{"Vlad", "frond end", 2019, 1800}
	};

	std::cout << "-------------- over 4 years --------------\n";
	Worker::printY(workers, 5, 2020);
	std::cout << "-------------- minimum 1700 salary --------------\n";
	Worker::printS(workers, 5, 1700);
	std::cout << "-------------- role back end --------------\n";
	Worker::printR(workers, 5, "back end");
}