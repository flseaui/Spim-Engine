#ifndef __GAMESCENE_H_
#define __GAMESCENE_H_

#include "Scene.h"
#include "InputHander.h"
#include "Rect.h"

class GameScene : public Scene
{
public:
	GameScene(Window*, Camera*);
	~GameScene();
	void update();
	void render();
	void setActive();
	InputHandler* inputHandler;
	ColRect* rect;
};

#endif