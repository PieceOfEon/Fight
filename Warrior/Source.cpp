#include <iostream>
#include <string>
#include <conio.h>
#include<vector>
#include <chrono>
#include <thread>

using namespace std;

class Weapon
{
public:

	virtual void BasicCha() = 0;
};


class Bow:public Weapon
{
	float dmg;
	float atckspd;
	string bow;
public:
	virtual void BasicCha() override
	{
		int n;
		cout << "Enter nymber:\n";
		cout << "1 - Elven Bow: Damage = 32.5, AtcSpd = 2.1\n";
		cout << "2 - Draconic Bow: Damage = 44.1, AtcSpd = 2.7\n";
		cout << "3 - Winter Bow: Damage = 28.4, AtcSpd = 1.7\n";
		cin >> n;
		if (n == 1)
		{
			bow = "Elven Bow";
			dmg = 511.3;
			atckspd = 2.1;
		}
		if (n == 2)
		{
			bow = "Draconic Bow";
			dmg = 581.4;
			atckspd = 2.7;
		}
		if (n == 3)
		{
			bow = "Winter Bow";
			dmg = 481.8;
			atckspd = 1.7;
		}
		cout <<"Your Weapon: " << bow << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\t\n";
	}

	string getName()
	{
		return bow;
	}
	float getDMG()
	{
		return dmg;
	}
	float getATS()
	{
		return atckspd;
	}

	void Print()
	{
		cout << bow << "\n" << dmg<<"\n";
	}
};

class WarriorWeapon :public Weapon
{
	float dmg;
	float atckspd;
	string warriorWeapon;
public:
	virtual void BasicCha() override
	{
		int n;
		cout << "Enter nymber:\n";
		cout << "1 - SamuraiLongSword: Damage = 250.2, AtcSpd = 1.3\n";
		cout << "2 - AncientBlade: Damage = 277.3, AtcSpd = 1.34\n";
		cout << "3 - DarkSword: Damage = 294, AtcSpd = 1.47\n";
		cin >> n;
		if (n == 1)
		{
			warriorWeapon = "SamuraiLongSword";
			dmg = 250.2;
			atckspd = 1.3;
		}
		if (n == 2)
		{
			warriorWeapon = "AncientBlade";
			dmg = 277.3;
			atckspd = 1.34;
		}
		if (n == 3)
		{
			warriorWeapon = "DarkSword";
			dmg = 294;
			atckspd = 1.47;
		}
		cout << "Your Weapon: " << warriorWeapon << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\t\n";


	}
	void Print()
	{
		cout << warriorWeapon << "\n" << dmg << "\n";
	}
};

class MageWeapon :public Weapon
{
	float dmg;
	float atckspd;
	string mageWeapon;
public:
	virtual void BasicCha() override
	{
		int n;
		cout << "Enter nymber:\n";
		cout << "1 - ArcanaMace: Damage = 180, AtcSpd = 1.2\n";
		cout << "2 - StaffOfWizardy: Damage = 160, AtcSpd = 1\n";
		cout << "3 - MagicBlunt: Damage = 195, AtcSpd = 1.46\n";
		cin >> n;
		if (n == 1)
		{
			mageWeapon = "ArcanaMace";
			dmg = 250.2;
			atckspd = 1.3;
		}
		if (n == 2)
		{
			mageWeapon = "StaffOfWizardy";
			dmg = 277.3;
			atckspd = 1.34;
		}
		if (n == 3)
		{
			mageWeapon = "MagicBlunt";
			dmg = 294;
			atckspd = 1.47;
		}
		cout << "Your Weapon: " << mageWeapon << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\t\n";
	}

	string getName()
	{
		return mageWeapon;
	}
	float getDMG()
	{
		return dmg;
	}
	float getATS()
	{
		return atckspd;
	}

	void Print()
	{
		cout << mageWeapon << "\n" << dmg << "\n";
	}
};

class Player
{
private:
	string name;
	float dmg;
	float atckspd;

public:

	void setName(string name)
	{
		this->name = name;
	}
	void setDMG(float dmg)
	{
		this->dmg = dmg;
	}
	void setATS(float atckspd)
	{
		this->atckspd = atckspd;
	}
	string getName()
	{
		return name;
	}
	float getDMG()
	{
		return dmg;
	}
	float getATS()
	{
		return atckspd;
	}

	void Print()
	{
		cout << name << "\n" << dmg << "\n"<<atckspd;
	}
	
	void ALLiN(vector<Player>all)
	{
		for (int dodik = 0; dodik < all.size(); dodik++)
		{
			cout <<"ATS: " << all[dodik].getATS()<<"\n";
			cout << "DMG: " << all[dodik].getDMG() << "\n";
			cout << "Dodik [" << dodik+1 << "] " << all[dodik].getName() << "\n";
		}
	}

	void Fight(vector<Player> all)
	{
		ALLiN(all);
	}
	
};


int main()
{
	vector <Bow> play;
	vector <WarriorWeapon> play2;
	vector	<MageWeapon> play3;
	vector<Player> all;
	
	/*Player Lyk;*/
	Bow bow2;
	WarriorWeapon Warrior;
	MageWeapon Mage;
	int kol = 0;
	char vvod;
	do
	{
		system("cls");
		cout << "1 - Class\n";
		cout << "2 - Fight\n";
		vvod = _getch();
		switch (vvod)
		{
		case'1':
		{
			int clas;
			cout << "Select class:\n";
			cout << "1 - Archer\n";
			cout << "2 - Warrior\n";
			cout << "3 - Mage\n";
			cin >> clas;
			if (clas == 1)
			{
				kol++;
				
				bow2.BasicCha();
				play.push_back(bow2);
				cout << "Print:\n";
				play[play.size()-1].Print();
				Player tmp;
				tmp.setATS(bow2.getATS());
				tmp.setDMG(bow2.getDMG());
				string ima;
				cout << "Enter name etomy dodiku\n";
				cin >> ima;
				tmp.setName(ima);
				
				all.push_back(tmp);
				cout << "Print:\n";
				for (int i = 0; i < all.size(); i++)
				{
					
					all[i].Print();
					cout << "\n";

				}
				system("pause");
				cout << "Print:\n";
				for (int i = 0; i < play.size(); i++)
				{
					play[i].Print();
					cout << "\n";
					
				}
				
				system("pause");
				break;
			}
			if (clas == 2)
			{
				kol++;
				
				Warrior.BasicCha();
				play2.push_back(Warrior);
				cout << "Print:\n";
				play2[play2.size() - 1].Print();
				system("pause");

				cout << "Print:\n";
				for (int i = 0; i < play2.size(); i++)
				{
					play2[i].Print();
					cout << "\n";
				}
				system("pause");
				break;
			}
			if (clas == 3)
			{
				kol++;
				Mage.BasicCha();
				play3.push_back(Mage);
				cout << "Print:\n";
				play3[play3.size() - 1].Print();
				system("pause");

				cout << "Print:\n";
				for (int i = 0; i < play3.size(); i++)
				{
					play3[i].Print();
					cout << "\n";
				}
				system("pause");
				break;
			}
		}
		case'2':
		{
			if (all.size() >= 2)
			{
				all[0].Fight(all);
				system("pause");
			}
			else
			{
				cout << "Uhadi\n";
				system("pause");
			}	
		}
		}
	} while (vvod != 27);
}
