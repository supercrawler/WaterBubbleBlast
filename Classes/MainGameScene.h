#ifndef _MAIN_GAME_SCENE_H_
#define _MAIN_GAME_SCENE_H_

#include "cocos2d.h"

#pragma once
class MainGameScene : public cocos2d::Layer
{
public:
    MainGameScene(void);
    ~MainGameScene(void);

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* scene();

    // a selector callback
    void menuCloseCallback(Object* pSender);

    // implement the "static node()" method manually
    CREATE_FUNC(MainGameScene);
};

#endif

