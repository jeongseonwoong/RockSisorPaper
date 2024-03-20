#include<string>
#include<iostream>
#pragma once
class Comment
{
public:
	std::string firstComment = "청개구리 가위, 바위, 보를 시작합니다.\n";
	std::string enterRockSisorPaper = "가위, 바위, 보를 입력하세요 : ";
	std::string winComment = "\n게임에 승리하셨습니다!\n";
	std::string loseComment = "\n게임에 패배하셨습니다!\n";
	std::string isNewGame = "게임을 새로 시작하려면 1, 종료하려면 2를 입력하세요.\n";
	std::string err = "입력오류\n";
	void printComputers(std::string result)
	{
		std::cout << "상대는 [" << result << "]를 냈습니다:";
	}

	void printFirstComment()
	{
		std::cout << firstComment;
	}

	void printEnterRockSisorPaper()
	{
		std::cout << enterRockSisorPaper;
	}

	void printWinComment()
	{
		std::cout << winComment;
	}

	void printLoseComment()
	{
		std::cout << loseComment;
	}

	void printIsNewGame()
	{
		std::cout << isNewGame;
	}

	void printErr()
	{
		std::cout << err;
	}
};
