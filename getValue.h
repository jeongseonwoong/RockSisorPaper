#pragma once
#include"RandomNumberGenerator.h"
#include"Comment.h"
#include<iostream>
#include<string>
#include<future>
#include<chrono>
#include"RockSisorPaper.h"

class GetValue
{
private:
	RandomNumberGenerater random;
	Comment comments;
	typedef RockSisorPaper::RSP rsp;

public:
	RockSisorPaper::RSP getComputers()
	{
		switch (random.getRandomNumber())
		{
		case static_cast<int>(rsp::paper):
			comments.printComputers("보");
			return rsp::paper;
		case static_cast<int>(rsp::rock):
			comments.printComputers("바위");
			return rsp::rock;
		case static_cast<int>(rsp::sisor):
			comments.printComputers("가위");
			return rsp::sisor;
		}
	}

	RockSisorPaper::RSP getMine()
	{
		std::string my;
		std::cin >> my;
		if (my == "보")
			return rsp::paper;
		else if (my == "가위")
			return rsp::sisor;
		else
			return rsp::rock;
	}

	int getIsNewgame()
	{
		comments.printIsNewGame();
		int N;
		std::cin >> N;
			return N;
	}

};
