#include "pch.h"
#include "FSM.h"


CFSM::CFSM()
{
	m_state = State_COMBAT;
}


CFSM::~CFSM()
{
}

// Update
void CFSM::UpdateState()
{
	switch (m_state)
	{
	case State_COMBAT:
		printf("State_COMBAT\n");
		break;
	case State_LOCAL_MAP:
		printf("State_LOCAL_MAP\n");
		break;
	case State_MENU:
		printf("State_MENU\n");
		break;
	case State_WORLD_MAP:
		printf("State_WORLD_MAP\n");
		break;
	}

}

// 상태 초기화
void CFSM::OnEnter()
{
	printf(__FUNCTION__"\n");
}

// 상태 해제
void CFSM::OnExit()
{
	printf(__FUNCTION__"\n");
}

// 상태 변경
void CFSM::ChangeState(State _state)
{
	OnEnter();
	m_state = _state;
	OnExit();
}
