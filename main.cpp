#include <iostream>
#include <string>
#include"Comment.h"
#include"getValue.h"
#include"Judge.h"
int main()
{
    Comment comments;
    GetValue getValue;
    Judge judge;
    while (true)
    {
        comments.printFirstComment();//가위바위 보 시작 문구함수
        comments.printEnterRockSisorPaper();//가위바위보 입력 문구함수
        judge.judgeWinLose(getValue.getComputers(), getValue.getMine());//나의 입력과 컴퓨터의 입력을 받고 승패를 따지는 함수
        if (getValue.getIsNewgame() == 2)//새로운 게임을 할건지 물어보고 입력을 받는 함수
            break;
    }
}
