#pragma once
class SceneManager {
private:
	//コンストラクタをprivateにする
	SceneManager();
	//デストラクタをprivateにする
	~SceneManager();
public:
	//コピーコンストラクタを無効にする
	SceneManager(const SceneManager& obj) = delete;
	//代入演算子を無効にする
	SceneManager& operator=(const SceneManager& obj) = delete;

	void ChangeScene(int sceneNo);

	static SceneManager* GetInstance();

};