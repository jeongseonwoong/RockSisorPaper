#pragma once
#include<random>
class RandomNumberGenerater
{
	std::random_device rd;

public:
	int getRandomNumber()
	{
		std::mt19937 rand(rd());
		std::uniform_int_distribution<std::mt19937::result_type> random(0, 2);
		return random(rand);
	}
};
