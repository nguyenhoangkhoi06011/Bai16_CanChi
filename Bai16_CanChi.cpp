#include<iostream>
using namespace std;
int main()
{
	int nam;
	cout << "can chi nam 2000 den 2024\n";
	int socan, sochi;
	string can[] = { "canh","tan","nham","quy","giap","at","binh","dinh","mau","ky" };
	string chi[] = { "than","dau","tuat","hoi","ty","suu","dan","mao","thin","ti","ngo","mui" };;
	for (int nam =2000; nam<=2024; nam++)
	{
		socan = nam % 10;
		sochi = nam % 12;
		cout << "nam" << nam << ": " << can[socan];
		cout << chi[sochi] << "\n";
	}
	return 0;
}
   