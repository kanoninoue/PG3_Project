#include <stdlib.h>
#include <list>//list�R���e�i
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
#pragma region
	/*std::list<int>lst(33, 4);*/
	//list<int>lst{114, 514, 364};//�����ݒ胊�X�g

	//lst.push_front(7);
	//lst.push_back(777);
	//for (int i = 0; i < 5; i++)
	//{
	//	lst.push_front(i);
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	lst.push_back(i);
	//}
#pragma endregion

	list<const char*>Station = { "Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani",
						"Nippori","Tabata","Komagome","Sugamo","Otsuka" ,
						"Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku",
						"Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki",
						"Shinagawa","Tamachi","Hamamatsutyo","Shinbashi",
						"Yurakutyo" };

	cout << "---1970�N---\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	//�����闢��ǉ�
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = Station.insert(itr, "Nishinippori");
			itr++;
		}
	}

	cout << "---2019�N---\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	//���փQ�[�g�E�F�C��ǉ�
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = Station.insert(itr, "Takanawa Gateway");
			itr++;
		}
	}

	cout << "---2022�N---\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	return 0;
}