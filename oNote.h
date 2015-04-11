#pragma once
#include "GameObject.h"
class oNote :
	public GameObject
{
public:
	oNote();
	~oNote();
	virtual void onUpdate();
	//virtual void onDraw(Canvas* c);
	virtual void draw(Canvas* c);//fix this
};

