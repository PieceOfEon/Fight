#include <iostream>
#include <string>
#include <conio.h>
#include<vector>
#include <chrono>
#include <thread>
#include <mutex>

using namespace std;
static bool st=true;
class Weapon
{
public:

	virtual void BasicCha() = 0;
};


class Bow:public Weapon
{
	float dmg;
	float atckspd;
	float HP;
	string bow;
public:
	virtual void BasicCha() override
	{
		int n;
		cout << "Enter nymber:\n";
		cout << "1 - Elven Bow: Damage = 511.3, AtcSpd = 2.1\n";
		cout << "2 - Draconic Bow: Damage = 581.4, AtcSpd = 2.7\n";
		cout << "3 - Winter Bow: Damage = 481.8, AtcSpd = 1.7\n";
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
		HP = 5600.53;
		cout <<"Your Weapon: " << bow << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\tHP = "<<HP<<"\n";
		
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

	float getHP()
	{
		return HP;
	}

	void Print()
	{
		cout << bow << "\n" << dmg<<"\n";
	}
};

class WarriorWeapon :public Weapon
{
	float HP;
	float dmg;
	float atckspd;
	string warriorWeapon;
	string Clas="Warrior";
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
		HP = 9300;
		cout << "Your Weapon: " << warriorWeapon << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\tHP = "<<HP<<"\n";


	}
	
	string getClas()
	{
		return Clas;
	}
	string getName()
	{
		return warriorWeapon;
	}
	float getDMG()
	{
		return dmg;
	}
	float getATS()
	{
		return atckspd;
	}

	float getHP()
	{
		return HP;
	}

	void Print()
	{
		cout << warriorWeapon << "\n" << dmg << "\n";
	}
};

class MageWeapon :public Weapon
{
	float HP;
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
		HP = 4800;
		cout << "Your Weapon: " << mageWeapon << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\tHP = "<<HP<<"\n";
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

	float getHP()
	{
		return HP;
	}

	void Print()
	{
		cout << mageWeapon << "\n" << dmg << "\n";
	}
};

class Player
{
private:
	string Clas;
	string name;
	float dmg;
	float atckspd;
	float HP;

public:

	void setClas(string Clas)
	{
		this->Clas = Clas;
	}

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
	void setHP(float HP)
	{
		this->HP = HP;
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

	float getHP()
	{
		return HP;
	}

	string getClas()
	{
		return Clas;
	}
	void Print()
	{
		cout << name << "\n" << dmg << "\n"<<atckspd;
	}
	
	void ALLiN(vector<Player>all)
	{
		for (int dodik = 0; dodik < all.size(); dodik++)
		{
			cout <<"Dodik [" << dodik + 1 << "] " << all[dodik].getName() << "\n";
			cout <<"ATS: " << all[dodik].getATS()<<"\n";
			cout <<"DMG: " << all[dodik].getDMG() << "\n";
			cout<<"HP: "<<all[dodik].getHP()<<"\n";

		}
	}

	void Vibor(vector<Player> all)
	{
		
		if (all.size() > 1)
		{
			ALLiN(all);
			cout << "Vibor 2 dodika: \n";
			int d1,d2;
			cout << "D1:";
			cin >> d1;
			cout << "D2:";
			cin >> d2;
			d1--;
			d2--;
			Player alo;
			
			thread D1(&Player::Fight,alo, all, d1, d2);

			this_thread::sleep_for(chrono::milliseconds(15));
			thread D2(&Player::Fight,alo, all, d2, d1);
			/*Fight(all, d2, d1);*/
			
			D1.join();
			D2.join();
		}

	}

	void Fight(vector<Player> all,int d1,int d2)
	{
		mutex mu;
		srand(time(0));
		st = true;
		float const dm = all[d1].getDMG();
		/*cout<<all[d1].Clas<<"\n";*/
		
		while (all[d1].getHP() >= 0 && all[d2].getHP() >= 0 && st == true)
		{
			
			if (all[d1].Clas == "Warrior")
			{
				int r;
				
				r = rand() % 10 + 1;
				/*cout <<"\nR: " << r;*/
				if (r == 1 || r == 2 || r == 3)
				{
					all[d1].setDMG(all[d1].getDMG() * 2.2);
				}
				else
				{
					all[d1].setDMG(dm);
				}

			}
			this_thread::sleep_for(chrono::milliseconds(int(all[d1].getATS()) * 1000));
			mu.lock();
			cout << all[d1].getName() << "<<-- did " << all[d1].getDMG() << " DMG -->> " << all[d2].getName() << "\n";
			mu.unlock();
			all[d2].setHP(all[d2].getHP() - all[d1].getDMG());
			if (all[d2].getHP() > 0)
			{
				mu.lock();
				cout << all[d2].getName() << " Left HP: " << all[d2].getHP() << "\n";
				mu.unlock();
			}
			else
			{
				st = false;
				all[d2].setHP(0);
				mu.lock();
				cout << all[d2].getName() << " Left HP: " << all[d2].getHP() << "\n";
				mu.unlock();
				break;
			}
			cout << "\n";
		}
	}
	
};


int main()
{
	
	srand(time(0));
	vector<Bow> play;
	vector<WarriorWeapon> play2;
	vector	<MageWeapon> play3;
	vector<Player> all;
	
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
				
				
				bow2.BasicCha();
				play.push_back(bow2);
				cout << "Print:\n";
				play[play.size()-1].Print();
				Player tmp;
				tmp.setATS(bow2.getATS());
				tmp.setDMG(bow2.getDMG());
				tmp.setHP(bow2.getHP());
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
				
				
				Warrior.BasicCha();
				play2.push_back(Warrior);
				cout << "Print:\n";
				play2[play2.size() - 1].Print();
				system("pause");
				Player tmp;
				tmp.setATS(Warrior.getATS());
				tmp.setDMG(Warrior.getDMG());
				tmp.setHP(Warrior.getHP());
				tmp.setClas(Warrior.getClas());
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
				break;
				
			}
			if (clas == 3)
			{
				
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
				all[0].Vibor(all);
				
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
