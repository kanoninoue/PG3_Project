#include <stdlib.h>
#include <list>//list�R���e�i
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

	cout << "---1970�N---\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	//�����闢��ǉ�
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr,"Tabata")==0)
		{
			Station.insert(itr, "Nishinippori");
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
		if (strcmp(*itr, "Tamachi")==0)
		{
			Station.insert(itr, "Takanawa Gateway");
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