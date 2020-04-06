#pragma once

class CFSM
{
public: 
	CFSM();
	~CFSM();

public:
	State m_state;

	void UpdateState();
	void OnEnter();
	void OnExit();
	void ChangeState(State _state);

};

