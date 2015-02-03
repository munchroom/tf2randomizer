# The TF2 Class and Loadout Randomizer
# Original build date: 1/30/2015
# Current Build date: 1/31/2015

# Update log
# Version 1.01
#	-Added a for loop to run the program a specific number of times specified by the user.
#	-Added empty print statements to act as line breaks, which will format the repeated for loop much more nicely.
# Version 1.0
#	-Initial release

import random

tf2class = ["Scout", "Soldier", "Pyro", "Demoman", "Heavy", "Engineer", "Medic", "Sniper", "Spy"]

scoutprimaries = ["Scattergun (stock)", "Force-A-Nature", "Shortstop", "Soda Popper", "Baby Face's Blaster", "Back Scatter"]
scoutsecondaries = ["Pistol (stock)", "Lugermorph", "Winger", "Pretty Boy's Pocket Pistol", "Flying Guillotine", "Bonk! Atomic Punch", "Crit-a-Cola", "Mutated Milk"]
scoutmelees = ["Bat (stock)", "Holy Mackerel", "Unarmed Combat", "Sandman", "Candy Cane", "Boston Basher", "Three-Rune Blade", "Sun-on-a-Stick", "Fan O'War", "Atomizer", "Wrap Assassin", "Saxxy", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"]

soldierprimaries = ["Rocket Launcher (stock)", "Original", "Direct Hit", "Black Box", "Rocket Jumper", "Liberty Launcher", "Cow Mangler 5000", "Beggar's Bazooka", "Air Strike"]
soldiersecondaries = ["Shotgun (stock)", "Reserve Shooter", "Buff Banner", "Gunboats", "Battalion's Backup", "Concheror", "Mantreads", "Righteous Bison", "B.A.S.E. Jumper", "Panic Attack"]
soldiermelees = ["Shovel (stock)", "Equalizer", "Pain Train", "Half-Zatoichi", "Disciplinary Action", "Market Gardener", "Escape Plan", "Saxxy", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"]

pyroprimaries = ["Flame Thrower (stock)", "Rainblower", "Nostromo Napalmer", "Backburner", "Degreaser", "Phlogistinator"]
pyrosecondaries = ["Shotgun (stock)", "Reserve Shooter", "Flare Gun", "Detonator", "Manmelter", "Scorch Shot", "Panic Attack"]
pyromelees = ["Fire Axe (stock)", "Lollichop", "Axtinguisher", "Postal Pummeler", "Homewrecker", "Maul", "Powerjack", "Back Scratcher", "Sharpened Volcano Fragment", "Third Degree" "Neon Annihilator", "Saxxy", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"]

demoprimaries = ["Grenade Launcher (stock)", "Loch-n-Load", "Ali Baba's Wee Booties", "Bootlegger", "Loose Cannon", "B.A.S.E. Jumper", "Iron Bomber"]
demosecondaries = ["Stickybomb Launcher (stock)", "Scottish Resistance", "Chargin' Targe", "Sticky Jumper", "Splendid Screen", "Tide Turner", "Quickiebomb Launcher"]
demomelees = ["Bottle (stock)", "Scottish Handshake", "Eyelander", "Horseless Headless Horesemann's Headtaker", "Nessie's Nine Iron", "Scotsman's Skullcutter", "Pain Train", "Ultrapool Caber", "Claidheamh Mor", "Half-Zatoichi", "Persian Persuader", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"]

heavyprimaries = ["Minigun (stock)", "Iron Curtain", "Natascha", "Brass Beast", "Tomislav", "Huo-Long Heater"]
heavysecondaries = ["Shotgun (stock)", "Family Business", "Sandvich", "Robo-Sandvich", "Dalokoh's Bar", "Fishcake", "Buffalo Steak Sandvich", "Panic Attack"]
heavymelees = ["Fists (stock)", "Apoco-Fists", "Killing Gloves of Boxing", "Gloves of Running Urgently", "Bread Bite", "Warrior's Spirit", "Fists of Steel", "Eviction Notice", "Holiday Punch", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"]

engiprimaries = ["Shotgun (stock)", "Frontier Justice", "Widowmaker", "Pomson 6000", "Rescue Ranger", "Panic Attack"]
engisecondaries = ["Pistol (stock)", "Lugermorph", "Wrangler", "Short Circuit"]
engimelees = ["Wrench (stock)", "Golden Wrench", "Gunslinger", "Southern Hospitality", "Jag", "Eureka Effect", "Saxxy", "Golden Frying Pan", "Necro Smasher"]

medicprimaries = ["Syringe Gun (stock)", "Blutsauger", "Crusader's Crossbow", "Overdose"]
medicsecondaries = ["Medi Gun (stock)", "Kritzkreig", "Quick-Fix", "Vaccinator"]
medicmelees = ["Bonesaw (stock)", "Ubersaw", "Vita-Saw", "Amputator", "Solemn Vow", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"]

sniperprimaries = ["Sniper Rifle (stock)", "AWPer Hand", "Huntsman", "Fortified Compound", "Sydney Sleeper", "Bazaar Bargain", "Machina", "Hitman's Heatmaker", "Classic"]
snipersecondaries = ["Submachine Gun (stock)", "Cleaner's Carbine", "Jarate", "Self-Aware Beauty Mark", "Razorback", "Darwin's Danger Shield", "Cozy Camper"]
snipermelees = ["Kukri (stock)", "Tribalman's Shiv", "Bushwacka", "Shahanshah", "Conscientious Objector", "Frying Pan", "Freedom Staff", "Bat Outta Hell", "Memory Maker", "Ham Shank", "Golden Frying Pan", "Necro Smasher", "Crossing Guard"]

# Caution: the Spy has an additional list: the sappers.
spyprimaries = ["Revolver (stock)", "Big Kill", "Ambassador", "L'Etranger", "Enforcer", "Diamondback"]
# The spy's secondaries here are the different cloaking devices.
spysecondaries = ["Invis Watch (stock)", "Enthusiast's Timepiece", "Quackenbirdt", "Cloak and Dagger", "Dead Ringer"]
spysappers = ["Sapper (stock)", "Ap-Sap", "Snack Attack", "Red-Tape Recorder"]
spymelees = ["Knife (stock)", "Sharp Dresser", "Black Rose", "Your Eternal Reward", "Wanga Prick", "Conniver's Kunai", "Big Earner", "Spy-cicle", "Saxxy", "Golden Frying Pan"]

#print(engimelees)
print("Hello! Welcome to the TF2 Class and Loadout Randomizer.\nEnter in how many results you would like. (numbers only)")
repeat = input()

for repeat in range(repeat):
	yourclass = random.choice(tf2class)
	print("Your class is:"), yourclass
	if yourclass == "Scout":
		yourprimary = random.choice(scoutprimaries)
		yoursecondary = random.choice(scoutsecondaries)
		yourmelee = random.choice(scoutmelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Soldier":
		yourprimary = random.choice(soldierprimaries)
		yoursecondary = random.choice(soldiersecondaries)
		yourmelee = random.choice(soldiermelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Pyro":
		yourprimary = random.choice(pyroprimaries)
		yoursecondary = random.choice(pyrosecondaries)
		yourmelee = random.choice(pyromelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Demoman":
		yourprimary = random.choice(demoprimaries)
		yoursecondary = random.choice(demosecondaries)
		yourmelee = random.choice(demomelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Heavy":
		yourprimary = random.choice(heavyprimaries)
		yoursecondary = random.choice(heavysecondaries)
		yourmelee = random.choice(heavymelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Engineer":
		yourprimary = random.choice(engiprimaries)
		yoursecondary = random.choice(engisecondaries)
		yourmelee = random.choice(engimelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Medic":
		yourprimary = random.choice(medicprimaries)
		yoursecondary = random.choice(medicsecondaries)
		yourmelee = random.choice(medicmelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Sniper":
		yourprimary = random.choice(sniperprimaries)
		yoursecondary = random.choice(snipersecondaries)
		yourmelee = random.choice(snipermelees)
		print("Your primary weapon is:"), yourprimary
		print("Your secondary weapon is:"), yoursecondary
		print("Your melee weapon is:"), yourmelee
		print
	if yourclass == "Spy":
		yourprimary = random.choice(spyprimaries)
		yoursecondary = random.choice(spysecondaries)
		yoursapper = random.choice(spysappers)
		yourmelee = random.choice(spymelees)
		print("Your primary weapon is:"), yourprimary
		print("Your cloak is:"), yoursecondary
		print("Your sapper is:"), yoursapper
		print("Your melee weapon is:"), yourmelee
		print

# print(tf2class) #DEBUG
# print(choice) #DEBUG