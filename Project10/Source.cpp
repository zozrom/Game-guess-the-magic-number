#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void play(int x);
int mag;
int main()
{
	srand(time(NULL));
	int opinion;
	int magic_numbers;
	magic_numbers = rand() % 20;
	mag = magic_numbers;
	do
	{
		cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "Welcom to game Guess the number to 20 !" << endl << endl;
		cout << "\t" << "\t";
		 cout << "1:  Guess the magic numbers with 1 attempt. "  << "\t" << "\t";
		cout << "2: I want play! With 3  attempt " << "\t"  << "\t";
		cout << "3: Exit with game. " << endl;
		cout << "\t" << "\t" << "\t";
		cout << endl;
		cout << "Enter the number :";
			cin >> opinion;

	} while (opinion<1 || opinion>3 );


	switch (opinion )
	{
		int n;
	case 1:
		magic_numbers = rand();
		cout << "You can  1 attempt, write youre namber:";
			cin >> n;
			if (magic_numbers ==n )
			{
				cout << "You win! Congratulations !";
			}
			else
			{
				cout << "sorry but you lost!";
				cout << endl;
				cout << "Magic numbers it was" << " " << magic_numbers;
			}
		break;
	case 2:play(magic_numbers);
		break;
	case 3 :
		cout << "By-by!!!";
	default:
		break;
	}

	return 0;
 }
void play(int c) {
	int b;
	for (int  i = 0; i < 3; i++)
	{
		cout << "Enter the magic nambers in your opinion :";
		cin >> b;
		if (b== c)
		{
			cout << "You win!!!";
			return ;
		}
		else
		{
			if (c>b)
			{
				cout << "Numbers small!";
			}
			else
			{
				cout << "the numbers so big!";
			}
			 
		}
	}
	cout << "You lost!";
	cout << endl;
	cout << "Magic numbers it was" << " " << mag;
 }