// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "FSM.h"

int main()
{
	CFSM fsm;
	printf("Change State : esc\n");
	while (1)
	{
		if (_kbhit())
		{
			int ch = _getch();
			if (ch == 27) // ESC
			{
				fsm.ChangeState(static_cast<State>((fsm.m_state + 1) % (State_NUM)));
			}
		}
		fsm.UpdateState();
		Sleep(1000);
	}
}