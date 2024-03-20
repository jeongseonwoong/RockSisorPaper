#pragma once
#include"getValue.h"
#include"RockSisorPaper.h"
#include <string>
class Judge :public RockSisorPaper
{
	typedef RockSisorPaper::RSP rsp;
	Comment comments;

public:

	void getEnterBefore(std::string& mustEnter)
	{
		std::string input;

		getchar();
		// 비동기적으로 입력 받기
		auto future = std::async(std::launch::async, []() {
			std::string input;
			std::getline(std::cin, input);
			return input;
			});

		// 3초 타임아웃 설정
		std::chrono::seconds timeout(3);

		// 입력을 기다리고 타임아웃 설정
		auto status = future.wait_for(timeout);

		// 입력이 오는 동안 기다림
		if (status == std::future_status::ready) {
			input = future.get();
			if (input == mustEnter)
				comments.printWinComment();
			else
				comments.printLoseComment();
		}
		else
		{
			comments.printLoseComment();
		}
	}


	void judgeWinLose(const rsp& computer, const rsp& me)
	{
		GetValue getvalue;
		std::string mustEnter;

			switch (static_cast<int>(computer) - static_cast<int>(me))
			{
			case -2://컴터 win
			{
				mustEnter = "이겼다";
				getEnterBefore(mustEnter);
				break;
			}
			case -1://나 win
			{
				mustEnter = "졌다";
				getEnterBefore(mustEnter);
				break;
			}
			case 0:	//비김
			{
				mustEnter = "개굴";
				getEnterBefore(mustEnter);
				break;
			}
			case 1://컴터 win
			{
				mustEnter = "이겼다";
				getEnterBefore(mustEnter);
				break;
			}
			case 2:// 나 win
			{
				mustEnter = "졌다";
				getEnterBefore(mustEnter);
				break;
			}
			}
	}
};
