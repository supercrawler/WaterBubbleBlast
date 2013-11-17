#include "LevelListScene.h"

USING_NS_CC;

LevelListScene::LevelListScene(void)
{
}


LevelListScene::~LevelListScene(void)
{
}

Scene* LevelListScene::scene() {

    // 'scene' is an autorelease object
    Scene *scene = Scene::create();

    // 'layer' is an autorelease object
    LevelListScene *layer = LevelListScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}


// on "init" you need to initialize your instance
bool LevelListScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();


    return true;
}