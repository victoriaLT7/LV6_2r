// Victoria Levacic Tkalec 
// LV6 - 1 zadatak 

#include <iostream>
using namespace std;

int ukupno(int a, int b, int c)
{
	return a + b + c;
}

bool prolazi(int a, int b, int c)
{
	if (ukupno(a, b, c) >= 180 && a >= 40 && b >= 40 && c >= 40) return true;
	return false;
}

void ispisiRezultat(int zbroj, bool prolaz)
{
	cout << zbroj;
	if (prolaz == true) cout << " FINALE";
	else cout << " NE";
}

int main()
{
	int a, b, c; cin >> a >> b >> c;
	int zbroj = ukupno(a, b, c);
	bool prolaz = prolazi(a, b, c);
	ispisiRezultat(zbroj, prolaz);
}
