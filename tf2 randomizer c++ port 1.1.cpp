/*The TF2 Class and Loadout Randomizer (C++ port)
Original build date: 2/5/2015
Current Build date: 2/6/2015

Update log

Version 1.1
    -Fixed a major bug where choosing not to reroll didn't work at all
Version 1.01
	-Added the option to reroll
Version 1.0
	-Initial release
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;
int main()
{
    string tf2class [9] = {"Scout", "Soldier", "Pyro", "Demoman", "Heavy", "Engineer", "Medic", "Sniper", "Spy"};
    
    string scoutprimaries [6] = {"Scattergun (stock)", "Force-A-Nature", "Shortstop", "Soda Popper", "Baby Face's Blaster", "Back Scatter"};
    string scoutsecondaries [8] = {"Pistol (stock)", "Lugermorph", "Winger", "Pretty Boy's Pocket Pistol", "Flying Guillotine", "Bonk! Atomic Punch", "Crit-a-Cola", "Mutated Milk"};
    string scoutmelees [21] = {"Bat (stock)", "Holy Mackerel", "Unarmed Combat", "Sandman", "Candy Cane", "Boston Basher", "Three-Rune Blade", "Sun-on-a-Stick", "Fan O'War", "Atomizer", "Wrap Assassin", "Saxxy", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"};

    string soldierprimaries [9] = {"Rocket Launcher (stock)", "Original", "Direct Hit", "Black Box", "Rocket Jumper", "Liberty Launcher", "Cow Mangler 5000", "Beggar's Bazooka", "Air Strike"};
    string soldiersecondaries [10] = {"Shotgun (stock)", "Reserve Shooter", "Buff Banner", "Gunboats", "Battalion's Backup", "Concheror", "Mantreads", "Righteous Bison", "B.A.S.E. Jumper", "Panic Attack"};
    string soldiermelees [17] = {"Shovel (stock)", "Equalizer", "Pain Train", "Half-Zatoichi", "Disciplinary Action", "Market Gardener", "Escape Plan", "Saxxy", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"};

    string pyroprimaries [6] = {"Flame Thrower (stock)", "Rainblower", "Nostromo Napalmer", "Backburner", "Degreaser", "Phlogistinator"};
    string pyrosecondaries [7] = {"Shotgun (stock)", "Reserve Shooter", "Flare Gun", "Detonator", "Manmelter", "Scorch Shot", "Panic Attack"};
    string pyromelees [21] = {"Fire Axe (stock)", "Lollichop", "Axtinguisher", "Postal Pummeler", "Homewrecker", "Maul", "Powerjack", "Back Scratcher", "Sharpened Volcano Fragment", "Third Degree" "Neon Annihilator", "Saxxy", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"};

    string demoprimaries [7] = {"Grenade Launcher (stock)", "Loch-n-Load", "Ali Baba's Wee Booties", "Bootlegger", "Loose Cannon", "B.A.S.E. Jumper", "Iron Bomber"};
    string demosecondaries [7] = {"Stickybomb Launcher (stock)", "Scottish Resistance", "Chargin' Targe", "Sticky Jumper", "Splendid Screen", "Tide Turner", "Quickiebomb Launcher"};
    string demomelees [20] = {"Bottle (stock)", "Scottish Handshake", "Eyelander", "Horseless Headless Horesemann's Headtaker", "Nessie's Nine Iron", "Scotsman's Skullcutter", "Pain Train", "Ultrapool Caber", "Claidheamh Mor", "Half-Zatoichi", "Persian Persuader", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"};
    
    string heavyprimaries [6] = {"Minigun (stock)", "Iron Curtain", "Natascha", "Brass Beast", "Tomislav", "Huo-Long Heater"};
    string heavysecondaries [8] = {"Shotgun (stock)", "Family Business", "Sandvich", "Robo-Sandvich", "Dalokoh's Bar", "Fishcake", "Buffalo Steak Sandvich", "Panic Attack"};
    string heavymelees [18] = {"Fists (stock)", "Apoco-Fists", "Killing Gloves of Boxing", "Gloves of Running Urgently", "Bread Bite", "Warrior's Spirit", "Fists of Steel", "Eviction Notice", "Holiday Punch", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"};
    
    string engiprimaries [6] = {"Shotgun (stock)", "Frontier Justice", "Widowmaker", "Pomson 6000", "Rescue Ranger", "Panic Attack"};
    string engisecondaries [4] = {"Pistol (stock)", "Lugermorph", "Wrangler", "Short Circuit"};
    string engimelees [9] = {"Wrench (stock)", "Golden Wrench", "Gunslinger", "Southern Hospitality", "Jag", "Eureka Effect", "Saxxy", "Golden Frying Pan", "Necro Smasher"};
    
    string medicprimaries [4] = {"Syringe Gun (stock)", "Blutsauger", "Crusader's Crossbow", "Overdose"};
    string medicsecondaries [4] = {"Medi Gun (stock)", "Kritzkreig", "Quick-Fix", "Vaccinator"};
    string medicmelees [14] = {"Bonesaw (stock)", "Ubersaw", "Vita-Saw", "Amputator", "Solemn Vow", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"};
    
    string sniperprimaries [9] = {"Sniper Rifle (stock)", "AWPer Hand", "Huntsman", "Fortified Compound", "Sydney Sleeper", "Bazaar Bargain", "Machina", "Hitman's Heatmaker", "Classic"};
    string snipersecondaries [7] = {"Submachine Gun (stock)", "Cleaner's Carbine", "Jarate", "Self-Aware Beauty Mark", "Razorback", "Darwin's Danger Shield", "Cozy Camper"};
    string snipermelees [13] = {"Kukri (stock)", "Tribalman's Shiv", "Bushwacka", "Shahanshah", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"};
    
//  Caution: the Spy has an additional list: the sappers.
    string spyprimaries [6] = {"Revolver (stock)", "Big Kill", "Ambassador", "L'Etranger", "Enforcer", "Diamondback"};
//  The spy's secondaries here are the different cloaking devices.
    string spysecondaries [5] = {"Invis Watch (stock)", "Enthusiast's Timepiece", "Quackenbirdt", "Cloak and Dagger", "Dead Ringer"};
    string spysappers [4] = {"Sapper (stock)", "Ap-Sap", "Snack Attack", "Red-Tape Recorder"};
    string spymelees [10] = {"Knife (stock)", "Sharp Dresser", "Black Rose", "Your Eternal Reward", "Wanga Prick", "Conniver's Kunai", "Big Earner", "Spy-cicle", "Saxxy", "Golden Frying Pan"};

    int numberofresults;
    cout << "Hello! Welcome to Mushrooms' TF2 Class and Loadout Randomizer.\nEnter in how many results you would like. (numbers only): ";
    cin >> numberofresults;
    numberofresults = numberofresults - 1;
    char reroll;
    reroll = 'y';
	do
	{
		for (int i = 0; i <= numberofresults; i = i + 1)
		{
			int yourclass = rand() % 8;
			cout << "\nYour class is: " << tf2class[yourclass] << "\n";
		
			switch (yourclass)
			{
				case 0: //Scout
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 5;
						yoursecondary = rand() % 7;
						yourmelee = rand() % 20;
						cout << "Your primary weapon is: " << scoutprimaries[yourprimary]<< "\n";
						cout << "Your secondary weapon is: " << scoutsecondaries[yoursecondary]<< "\n";
						cout << "Your melee weapon is: " << scoutmelees[yourmelee]<< "\n";
						break;
					}
					case 1: //Soldier
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 8;
						yoursecondary = rand() % 9;
						yourmelee = rand() % 16;
						cout << "Your primary weapon is: " << soldierprimaries[yourprimary] << "\n";
						cout << "Your secondary weapon is: " << soldiersecondaries[yoursecondary] << "\n";
						cout << "Your melee weapon is: " << soldiermelees[yourmelee] << "\n";
						break;
					}
					case 2: //Pyro
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 5;
						yoursecondary = rand() % 6;
						yourmelee = rand() % 20;
						cout << "Your primary weapon is: " << pyroprimaries[yourprimary] << "\n";
						cout << "Your secondary weapon is: " << pyrosecondaries[yoursecondary] << "\n";
						cout << "Your melee weapon is: " << pyromelees[yourmelee] << "\n";
						break;
					}
					case 3: //Demoman
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 6;
						yoursecondary = rand() % 6;
						yourmelee = rand() % 19;
						cout << "Your primary weapon is: " << demoprimaries[yourprimary] << "\n";
						cout << "Your secondary weapon is: " << demosecondaries[yoursecondary] << "\n";
						cout << "Your melee weapon is: " << demomelees[yourmelee] << "\n";
						break;
					}
					case 4: //Heavy
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 5;
						yoursecondary = rand() % 7;
						yourmelee = rand() % 17;
						cout << "Your primary weapon is: " << heavyprimaries[yourprimary] << "\n";
						cout << "Your secondary weapon is: " << heavysecondaries[yoursecondary] << "\n";
						cout << "Your melee weapon is: " << heavymelees[yourmelee] << "\n";
						break;
					}
					case 5: //Engineer
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 5;
						yoursecondary = rand() % 3;
						yourmelee = rand() % 8;
						cout << "Your primary weapon is: " << engiprimaries[yourprimary] << "\n";
						cout << "Your secondary weapon is: " << engisecondaries[yoursecondary] << "\n";
						cout << "Your melee weapon is: " << engimelees[yourmelee] << "\n";
						break;
					}
					case 6: //Medic
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 3;
						yoursecondary = rand() % 3;
						yourmelee = rand() % 13;
						cout << "Your primary weapon is: " << medicprimaries[yourprimary] << "\n";
						cout << "Your secondary weapon is: " << medicsecondaries[yoursecondary] << "\n";
						cout << "Your melee weapon is: " << medicmelees[yourmelee] << "\n";
						break;
					}
					case 7: //Sniper
					{
						int yourprimary, yoursecondary, yourmelee;
						yourprimary = rand() % 8;
						yoursecondary = rand() % 6;
						yourmelee = rand() % 12;
						cout << "Your primary weapon is: " << sniperprimaries[yourprimary] << "\n";
						cout << "Your secondary weapon is: " << snipersecondaries[yoursecondary] << "\n";
						cout << "Your melee weapon is: " << snipermelees[yourmelee] << "\n";
						break;
					}
					case 8: //Spy
					{
						int yourprimary, yoursecondary, yoursapper, yourmelee;
						yourprimary = rand() % 5;
						yoursecondary = rand() % 4;
						yoursapper = rand() % 3;
						yourmelee = rand() % 9;
						cout << "Your primary weapon is: " << spyprimaries[yourprimary] << "\n";
						cout << "Your cloak is: " << spysecondaries[yoursecondary] << "\n";
						cout << "Your sapper is: " << spysappers[yoursapper] << "\n";
						cout << "Your melee weapon is: " << spymelees[yourmelee] << "\n";
						break;
					}
					default:
					{
						cout << "\nSomething went horribly wrong!" << "\n";
						break;
					}
			}
		}
	   cout << "\n\nReroll? (y/n)\n";
	   cin >> reroll;
	} while ((reroll == 121) || (reroll == 89));
return 0;
}
