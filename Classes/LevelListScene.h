#ifndef _LEVEL_LIST_SCENE_
#define _LEVEL_LIST_SCENE_

#include "cocos2d.h"

#pragma once
class LevelListScene : public cocos2d::Layer
{
public:
    LevelListScene(void);
    ~LevelListScene(void);

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* scene();

    // implement the "static node()" method manually
    CREATE_FUNC(LevelListScene);
};

#endif