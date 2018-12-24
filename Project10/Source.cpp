#include <iostream>
#include <cstdlib>
using namespace std;
void play(int x);
int main()
{
	int opinion;
	int magic_numbers;
	magic_numbers = rand() % 20;
	do
	{
		cout << "1:  Get the magic numbers. " << "\t" << "\t" << "\t" << "\t";
		cout << "2: I want play! " << "\t" << "\t" << "\t";
		cout << "3: Exit with game. " << endl;
		cout << "\t" << "\t" << "\t";
		cout << endl;
		cout << "Enter the number :";
			cin >> opinion;

	} while (opinion<1 || opinion>3 );
	

	return 0;
 }