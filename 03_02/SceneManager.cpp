#include "SceneManager.h"
#include "stdio.h"
#include "DxLib.h"

//�R���X�g���N�^��private�ɂ���
SceneManager::SceneManager() {}
//�f�X�g���N�^��private�ɂ���
SceneManager::~SceneManager() {}


void SceneManager::ChangeScene(int sceneNo)
{
	switch (sceneNo)
	{
	case 0:
		DrawBox(0, 0, 600, 400, GetColor(255, 0, 0), true);
		DrawFormatString(0, 0, GetColor(255, 255, 255), "Title");
		break;
	case 1:
		DrawBox(0, 0, 600, 400, GetColor(0, 255, 0), true);
		DrawFormatString(0, 0, GetColor(255, 255, 255), "NewGame");
		break;
	case 2:
		DrawBox(0, 0, 600, 400, GetColor(0, 0, 255), true);
		DrawFormatString(0, 0, GetColor(255, 255, 255), "GamePlay");
		break;
	case 3:
		DrawBox(0, 0, 600, 400, GetColor(255, 0, 255), true);
		DrawFormatString(0, 0, GetColor(255, 255, 255), "GameClear");
	}
	if (sceneNo == 4)
	{
		sceneNo = 0;
	}
}

SceneManager* SceneManager::GetInstance()
{
	//�֐���static�ϐ��Ƃ��Đ錾����
	static SceneManager instance;
	return &instance;
}