#include <stdlib.h>
#include <list>//listコンテナ
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
#pragma region
	
#pragma endregion

	list<const char*>Station = { "Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani",
						"Nippori","Tabata","Komagome","Sugamo","Otsuka" ,
						"Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku",
						"Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki",
						"Shinagawa","Tamachi","Hamamatsutyo","Shinbashi",
						"Yurakutyo" };

	cout << "---1970年---\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	//西日暮里を追加
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr,"Tabata")==0)
		{
			Station.insert(itr, "Nishinippori");
			itr++;
		}
	}

	cout << "---2019年---\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	//高輪ゲートウェイを追加
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "Tamachi")==0)
		{
			Station.insert(itr, "Takanawa Gateway");
			itr++;
		}
	}

	cout << "---2022年---\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	return 0;
}