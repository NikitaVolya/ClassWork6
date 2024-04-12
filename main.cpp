
#include <iostream>
#include "Worker.h"

int main()
{
	int workersNumber = 5;
	Worker* workers = new Worker[workersNumber];

	Worker nikita("Nikita", "back end", 2024, 1500);
	Worker misha("Misha", "back end", 2022, 2200);
	Worker oleg("Oleg", "front end", 2021, 1700);
	Worker maks("Maks", "lid", 2018, 2500);
	Worker vlad("Vlad", "frond end", 2019, 1800);

	workers[0] = nikita;
	workers[1] = misha;
	workers[2] = oleg;
	workers[3] = maks;
	workers[4] = vlad;

	std::cout << "-------------- over 4 years --------------\n";
	Worker::printY(workers, 5, 2020);
	std::cout << "-------------- minimum 1700 salary --------------\n";
	Worker::printS(workers, 5, 1700);
	std::cout << "-------------- role back end --------------\n";
	Worker::printR(workers, 5, "back end");
}