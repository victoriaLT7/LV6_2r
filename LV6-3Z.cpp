// Victoria Levacic Tkalec, 2. B
// LV6 - 3 ZADATAK

#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

bool zbrojZ(string brojevi)
{
	int zb1 = int(brojevi[0] - '0') + int(brojevi[3] - '0');
	int zb2 = int(brojevi[1] - '0') + int(brojevi[2] - '0');
	if (zb1 == zb2) return true;
	return false;
}
bool razliciteZ(string brojevi)
{
	set<char> checker(brojevi.begin(), brojevi.end());
	if (brojevi.size() == brojevi.size()) return true;
	return false;
}
bool dijeljivS7(string brojevi)
{
	int z1 = int(brojevi[0] - '0'); int z2 = int(brojevi[1] - '0');
	int z3 = int(brojevi[2] - '0'); int z4 = int(brojevi[3] - '0');
	int z1a = z1; z1 = z4; z4 = z1a;
	stringstream ss;
	ss << z1 << z2 << z3 << z4;
	string kod = ss.str();
	int zkod = stoi(kod);
	if (zkod % 7 == 0) return true;
	return false;
}

int bzadovoljenih(bool zbroj, bool razliciti, bool dijeljiv)
{
	int br = 0;
	if (zbroj == true) br++;
	if (razliciti == true) br++;
	if (dijeljiv == true) br++;
	return br;
}

void ispis(int zadovoljeniU)
{
	if (zadovoljeniU == 3) cout << "Zadovoljeni: " << zadovoljeniU << " SIGURAN";
	else cout << "Zadovoljeni: " << zadovoljeniU << "	NIJE SIGURAN";
}

int main()
{
	string brojevi; cin >> brojevi;
	bool zbroj = zbrojZ (brojevi);
	bool razliciti = razliciteZ (brojevi);
	bool dijeljiv = dijeljivS7(brojevi);
	int zadovoljeniU = bzadovoljenih(zbroj, razliciti, dijeljiv);
	ispis(zadovoljeniU);
	return 0;
}

