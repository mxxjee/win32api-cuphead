#pragma once
#include "Obj.h"
class CEventEffect :
	public CObj
{
public:
	enum STATE { ST_IDLE, ST_END };
	CEventEffect();
	~CEventEffect();

public:
	virtual void Initialize(void) override;
	virtual int Update(void) override;
	virtual void Late_Update(void) override;
	virtual void Render(HDC hDC) override;
	virtual void Release(void) override;

public:
	void	Motion_Change();


	STATE					m_ePreState = ST_END;
	STATE					m_eCurState = ST_IDLE;
};

