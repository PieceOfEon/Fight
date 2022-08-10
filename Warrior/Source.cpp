#include <iostream>
#include <string>
#include <conio.h>
#include<vector>
#include <chrono>
#include <thread>
#include <mutex>
#include <fstream>

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
	string Clas = "Archer";
public:
	virtual void BasicCha() override
	{
		char n;
		cout << "Enter nymber:\n";
		cout << "1 - Elven Bow: Damage = 511.3, AtcSpd = 2.1\n";
		cout << "2 - Draconic Bow: Damage = 581.4, AtcSpd = 2.7\n";
		cout << "3 - Winter Bow: Damage = 481.8, AtcSpd = 1.7\n";
		re2:n= _getch();
		if (n == '1')
		{
			bow = "Elven Bow";
			dmg = 511.3;
			atckspd = 2.1;
		}
		else if (n == '2')
		{
			bow = "Draconic Bow";
			dmg = 581.4;
			atckspd = 2.3;
		}
		else if (n == '3')
		{
			bow = "Winter Bow";
			dmg = 481.8;
			atckspd = 1.7;
		}
		else 
		{
			goto re2;
		}
		HP = 5600.53;
		cout <<"Your Weapon: " << bow << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\tHP = "<<HP<<"\n";
		
	}

	string getClas()
	{
		return Clas;
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
		char n;
		cout << "Enter nymber:\n";
		cout << "1 - SamuraiLongSword: Damage = 250.2, AtcSpd = 1.3\n";
		cout << "2 - AncientBlade: Damage = 277.3, AtcSpd = 1.34\n";
		cout << "3 - DarkSword: Damage = 294, AtcSpd = 1.47\n";
		re3:n=_getch();
		if (n == '1')
		{
			warriorWeapon = "SamuraiLongSword";
			dmg = 250.2;
			atckspd = 1.3;
		}
		else if (n == '2')
		{
			warriorWeapon = "AncientBlade";
			dmg = 277.3;
			atckspd = 1.34;
		}
		else if (n == '3')
		{
			warriorWeapon = "DarkSword";
			dmg = 294;
			atckspd = 1.47;
		}
		else 
		{
			goto re3;
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
};

class MageWeapon :public Weapon
{
	float HP;
	float dmg;
	float atckspd;
	string mageWeapon;
	string Clas = "Mage";
public:
	virtual void BasicCha() override
	{
		char n;
		cout << "Enter nymber:\n";
		cout << "1 - ArcanaMace: Damage = 250.2, AtcSpd = 1\n";
		cout << "2 - StaffOfWizardy: Damage = 277.3, AtcSpd = 1.1\n";
		cout << "3 - MagicBlunt: Damage = 294, AtcSpd = 1.15\n";
		re4:n=_getch();
		if (n == '1')
		{
			mageWeapon = "ArcanaMace";
			dmg = 250.2;
			atckspd = 1;
		}
		else if (n == '2')
		{
			mageWeapon = "StaffOfWizardy";
			dmg = 277.3;
			atckspd = 1.1;
		}
		else if (n == '3')
		{
			mageWeapon = "MagicBlunt";
			dmg = 294;
			atckspd = 1.15;
		}
		else 
		{
			goto re4;
		}
		HP = 4800;
		cout << "Your Weapon: " << mageWeapon << "\nDamage = " << dmg << "\tAtcSpd = " << atckspd << "\tHP = "<<HP<<"\n";
	}

	string getClas()
	{
		return Clas;
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
			char P;
			ALLiN(all);
			cout << "Vibor 2 dodika: \n";
			int d1,d2;
		re6:cout << "D1:";
			cin >> P;
			if (isdigit(P) != 0 && P<=all.size()+48 && P>48)
			{
				d1 = P-49;
			}
			else 
			{
				goto re6;
			}
			re7:cout << "D2:";
			cin >> P;
			if (isdigit(P) != 0 || P <= all.size()+48 && P>48)
			{
				d2 = P - 49;
			}
			else
			{
				goto re7;
			}
			Player alo;
	
			thread D1(&Player::Fight,alo, all, d1, d2);
			/*this_thread::sleep_for(chrono::milliseconds(15));*/
			thread D2(&Player::Fight,alo, all, d2, d1);
			
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
		while (all[d1].getHP() >= 0 && all[d2].getHP() >=0 && st == true)
		{
			ofstream outfile("Fight.txt", ios::app);
			if (all[d1].Clas == "Warrior")
			{
				int r;
				
				r = rand() % 10 + 1;
				if (r == 1 || r == 2 || r == 3)
				{
					all[d1].setDMG(all[d1].getDMG() * 2.2);
				}
				else
				{
					all[d1].setDMG(dm);
				}
			}
			if (all[d1].Clas == "Mage")
			{
				int r;

				r = rand() % 10 + 1;
				if (r == 1 || r == 2)
				{
					all[d1].setDMG(all[d1].getDMG() * 4);
				}
				else
				{
					all[d1].setDMG(dm);
				}
			}
			if (all[d1].Clas == "Archer")
			{
				int r;
				r = rand() % 10 + 1;
				if (r == 1 || r == 2 || r == 3 || r == 4|| r == 5)
				{
					all[d1].setDMG(all[d1].getDMG() * 3);
				}
				else
				{
					all[d1].setDMG(dm);
				}
			}
			this_thread::sleep_for(chrono::milliseconds(int(all[d1].getATS()) * 1000));
			if (all[d1].getDMG() > dm)
			{
				if (all[d1].getHP() >= 0 && all[d2].getHP() >= 0 && st == true)
				{
					mu.lock();
					cout << all[d1].getName() << "<<-- did Critical Hit! " << all[d1].getDMG() << " DMG -->> " << all[d2].getName() << "\n";
					outfile << all[d1].getName() << "<<-- did Critical Hit! " << all[d1].getDMG() << " DMG -->> " << all[d2].getName() << "\n";
					mu.unlock();
					all[d2].setHP(all[d2].getHP() - all[d1].getDMG());
				}
			}
			else
			{
				if (all[d1].getHP() >= 0 && all[d2].getHP() >= 0 && st == true)
				{
					mu.lock();
					cout << all[d1].getName() << "<<-- did " << all[d1].getDMG() << " DMG -->> " << all[d2].getName() << "\n";
					outfile << all[d1].getName() << "<<-- did " << all[d1].getDMG() << " DMG -->> " << all[d2].getName() << "\n";
					mu.unlock();
					all[d2].setHP(all[d2].getHP() - all[d1].getDMG());
				}
			}
			if (all[d2].getHP() > 0)
			{
				if (all[d1].getHP() >= 0 && all[d2].getHP() >= 0 && st == true)
				{
					mu.lock();
					cout << all[d2].getName() << " Left HP: " << all[d2].getHP() << "\n";
					outfile << all[d2].getName() << " Left HP: " << all[d2].getHP() << "\n";
					mu.unlock();
				}
			}
			if(all[d2].getHP() <= 0)
			{
				if (st == true)
				{
					st = false;
					all[d2].setHP(0);
					mu.lock();
					cout << all[d2].getName() << " Left HP: " << all[d2].getHP() << "\n";
					outfile << all[d2].getName() << " Left HP: " << all[d2].getHP() << "\n";
					mu.unlock();
					cout <<"\n\t~)@(~You are Won!~)@(~ " << all[d1].getName()<<"\n";
					outfile << "\n\t~)@(~You are Won!~)@(~ " << all[d1].getName()<<"\n";
				}
				return;
			}outfile.close();
			all[d1].setDMG(dm);
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
	int kol = 0;
	Bow bow2;
	WarriorWeapon Warrior;
	MageWeapon Mage;
	char vvod;
	do
	{
		system("cls");
		cout << "1 - Class\n";
		cout << "2 - Fight\n";
		cout << "Esc - Exit\n";
		vvod = _getch();
		switch (vvod)
		{
		case'1':
		{
			char clas;
			cout << "Select class:\n";
			cout << "1 - Archer\n";
			cout << "2 - Warrior\n";
			cout << "3 - Mage\n";
			cout << "Exit - Esc\n";
			re1:clas = _getch();
			if (clas == '1')
			{
				bow2.BasicCha();
				play.push_back(bow2);
				system("pause");
				Player tmp;
				tmp.setATS(bow2.getATS());
				tmp.setDMG(bow2.getDMG());
				tmp.setHP(bow2.getHP());
				tmp.setClas(bow2.getClas());
				string ima;
				cout << "Enter name etomy dodiku\n";
				cin >> ima;
				tmp.setName(ima);
				all.push_back(tmp);
				system("pause");
				break;
			}
			if (clas == '2')
			{
				Warrior.BasicCha();
				play2.push_back(Warrior);
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
				system("pause");
				break;
			}
			if (clas == '3')
			{
				Mage.BasicCha();
				play3.push_back(Mage);
				system("pause");
				Player tmp;
				tmp.setATS(Mage.getATS());
				tmp.setDMG(Mage.getDMG());
				tmp.setHP(Mage.getHP());
				tmp.setClas(Mage.getClas());
				string ima;
				cout << "Enter name etomy dodiku\n";
				cin >> ima;
				tmp.setName(ima);
				all.push_back(tmp);
				system("pause");
				break;
			}
			if (clas == 27) 
			{
				break;
			}
			goto re1;
		}
		case'2':
		{
			if (all.size() >= 2)
			{
				kol++;
				ofstream outfile("Fight.txt", ios::app);
				outfile << "\t\tFight: " << kol<<"\n";
				outfile.close();
				all[0].Vibor(all);
				/*ofstream outfile("Fight.txt", ios::app);*/
				outfile << "\n\n";
				outfile.close();
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
