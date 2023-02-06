#include "DxLib.h"
#include "enemy.h"
#include <iostream>

using namespace std;

bool Enemy::isAllDead = false;

// ウィンドウのタイトルに表示する文字列
const char TITLE[] = "LE2D_02_イノウエ_カノン";

// ウィンドウ横幅
const int WIN_WIDTH = 600;

// ウィンドウ縦幅
const int WIN_HEIGHT = 400;

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine,
	_In_ int nCmdShow) {
	// ウィンドウモードに設定
	ChangeWindowMode(TRUE);

	// ウィンドウサイズを手動では変更させず、
	// かつウィンドウサイズに合わせて拡大できないようにする
	SetWindowSizeChangeEnableFlag(FALSE, FALSE);

	// タイトルを変更
	SetMainWindowText(TITLE);

	// 画面サイズの最大サイズ、カラービット数を設定(モニターの解像度に合わせる)
	SetGraphMode(WIN_WIDTH, WIN_HEIGHT, 32);

	// 画面サイズを設定(解像度との比率で設定)
	SetWindowSizeExtendRate(1.0);

	// 画面の背景色を設定する
	SetBackgroundColor(0x00, 0x00, 0x00);

	// DXlibの初期化
	if (DxLib_Init() == -1) { return -1; }

	// (ダブルバッファ)描画先グラフィック領域は裏面を指定
	SetDrawScreen(DX_SCREEN_BACK);

	// 画像などのリソースデータの変数宣言と読み込み


	// ゲームループで使う変数の宣言
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	// 最新のキーボード情報用
	char keys[256] = { 0 };

	// 1ループ(フレーム)前のキーボード情報
	char oldkeys[256] = { 0 };

	// ゲームループ
	while (true) {
		// 最新のキーボード情報だったものは1フレーム前のキーボード情報として保存
		// 最新のキーボード情報を取得
		for (int i = 0; i < 256; ++i)
		{
			oldkeys[i] = keys[i];
		}
		GetHitKeyStateAll(keys);

		// 画面クリア
		ClearDrawScreen();
		//---------  ここからプログラムを記述  ----------//

		// 更新処理
		if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
		{
			enemy1->isAllDead = true;
		}
		if (keys[KEY_INPUT_A] == 1 && oldkeys[KEY_INPUT_A] == 0)
		{
			enemy2->isAllDead = true;
		}
		if (keys[KEY_INPUT_S] == 1 && oldkeys[KEY_INPUT_S] == 0)
		{
			enemy3->isAllDead = true;
		}
		// 描画処理

		if (enemy1->isAllDead == false)
		{
			DrawBox(20, 20, 40, 40, GetColor(255, 255, 0), true);
		}
		if (enemy2->isAllDead == false)
		{
			DrawBox(20, 80, 60, 60, GetColor(100, 50, 80), true);
		}
		if (enemy3->isAllDead == false)
		{
			DrawBox(20, 140, 80, 100, GetColor(155, 80, 100), true);
		}
		//---------  ここまでにプログラムを記述  ---------//
		// (ダブルバッファ)裏面
		ScreenFlip();

		// 20ミリ秒待機(疑似60FPS)
		WaitTimer(20);

		// Windowsシステムからくる情報を処理する
		if (ProcessMessage() == -1) {
			break;
		}

		// ESCキーが押されたらループから抜ける
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}
	}
	// Dxライブラリ終了処理
	DxLib_End();

	// 正常終了
	return 0;
}