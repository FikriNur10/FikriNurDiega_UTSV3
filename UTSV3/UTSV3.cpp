// AUTOMATIC WATERING //
#include <iostream>
#include <stdlib.h>
using namespace std;

long int perhitunganpagi(int datasuhupagi, int datakelempagi);
long int perhitungansiang(int datasuhusiang, int datakelemsiang);
long int perhitungansore(int datasuhusore, int datakelemsore);

int main()
{
	int datasuhupagi, datakelempagi;
	int datasuhusiang, datakelemsiang;
	int datasuhusore, datakelemsore;
	int code, back;
	backmenu: // i used goto for back to menu //
	system("cls");
	cout << "AUTOMATIC WATERING" << endl; 
	cout << "1. Start" << endl;
	cout << "2. Guide" << endl;  //i made this menu for guides the new users//
	cout << "3. Copyright" << endl;
	cout << "4. Exit" << endl;
	cout << "Command [1/2/3] : ";
	cin >> code;

	if (code == 1)
	{
		system("cls");
		// ============= INPUT ============= //
		cout << "======== Morning ========" << endl;
		cout << "Enter Temperature : ";
		cin >> datasuhupagi;
		cout << "Enter Soil moisture : ";
		cin >> datakelempagi;
		cout << "======== The Day ========" << endl;
		cout << "Enter Temperature : ";
		cin >> datasuhusiang;
		cout << "Enter Soil moisture : ";
		cin >> datakelemsiang;
		cout << "======== Afternoon ========" << endl;
		cout << "Enter Temperature : ";
		cin >> datasuhusore;
		cout << "Enter Soil moisture : ";
		cin >> datakelemsore;
		// ============= OUTPUT ============= //
		system("cls");
		cout << "====================================" << endl;
		cout << "0======== MORNING WATERING ========0" << endl;
		cout << perhitunganpagi(datasuhupagi,datakelempagi);
		cout << "======== THE DAY WATERING ========0" << endl;
		cout << perhitungansiang(datasuhusiang,datakelemsiang);
		cout << "======== AFTERNOON WATERING ========0" << endl;
		cout << perhitungansore(datasuhusore,datakelemsore);
		cout << "====================================0" << endl;
		cout <<"Do you want to back to main menu?(input 1 to main menu) : ";
		cin >> back;
		if (back == 1)
		{
			goto backmenu;
			if (back >= 1)
			
			return 0;
		}
	}
	if (code == 2)
	{
		//my reason for creating this menu is so that users can learn about this program//
		system("cls");
		cout << "Tutorial for use this automatic watering" << endl;
		cout << "1. The Temperature automaticly used Celcius you just" << endl;
		cout << "2. The Soil moisture automaticly used percente" << endl;
		cout << "3. just put the number when you star the service" << endl;
		cout << " PRES 1 FOR BACK TO MENU : ";
		cin >> back;
		if (back == 1)
		{
			goto backmenu;
		if (back >= 1)

			return 0;
		}
	}
	if (code == 3)
	{
		//make copyright because this code was made by me//
		system("cls");
		cout << "MADE BY" << endl;
		cout << "NAME  : FIKRI NUR DIEGA " << endl;
		cout << "NIM   : 31200102 " << endl;
		cout << "CLASS : 2PSI51 " << endl;
		cout << "PRES 1 FOR BACK TO MENU : ";
		cin >> back;
		if (back == 1)
		{
			goto backmenu;
			if (back >= 1)

				return 0;
		}
	
	}
	if (code == 4)
	{
		return 0;
	}
}

// This coding is to calculate the watering in the morning //
long int perhitunganpagi(int datasuhupagi, int datakelempagi)
{
	if (datasuhupagi > 29)
	{
		if (datakelempagi > 40)
		{
			cout << "For morning do Watering For 25 minute" << endl;
			return 0;
		}
		if (datakelempagi < 30)
		{
			cout << "For morning do watering For 45 minute" << endl;
			return 0;
		}
		if (30 < datakelempagi < 40)
		{
			cout << "For morning do watering For 35 minute" << endl;
			return 0;
		}
	}

	if (datasuhupagi < 26)
	{
		if (datakelempagi > 40)
		{
			cout << "For morning do Watering For 10 minute" << endl;
			return 0;
		}
		if (datakelempagi < 30)
		{
			cout << "For morning do watering For 0 minute" << endl;
			return 0;
		}
		if (30 < datakelempagi < 40)
		{
			cout << "For morning do watering For 0 minute" << endl;
			return 0;
		}
	}

	if (26 < datasuhupagi < 29)
	{
		if (datakelempagi > 40)
		{
			cout << "For morning do Watering For 20 minute" << endl;
			return 0;
		}
		if (datakelempagi < 30)
		{
			cout << "For morning do watering For 40 minute" << endl;
			return 0;
		}
		if (30 < datakelempagi < 40)
		{
			cout << "For morning do watering For 30 minute" << endl;
			return 0;
		}
	}
}

// This coding is for calculating the watering during the day //
long int perhitungansiang(int datasuhusiang, int datakelemsiang)
{
	if (datasuhusiang > 29)
	{
		if (datakelemsiang > 40)
		{
			cout << "For morning do Watering For 30 minute" << endl;
			return 0;
		}
		if (datakelemsiang < 30)
		{
			cout << "For morning do watering For 50 minute" << endl;
			return 0;
		}
		if (30 < datakelemsiang < 40)
		{
			cout << "For morning do watering For 40 minute" << endl;
			return 0;
		}
	}

	if (datasuhusiang < 26)
	{
		if (datakelemsiang > 40)
		{
			cout << "For morning do Watering For 15 minute" << endl;
			return 0;
		}
		if (datakelemsiang < 30)
		{
			cout << "For morning do watering For 0 minute" << endl;
			return 0;
		}
		if (30 < datakelemsiang < 40)
		{
			cout << "For morning do watering For 0 minute" << endl;
			return 0;
		}
	}

	if (26 < datasuhusiang < 29)
	{
		if (datakelemsiang > 40)
		{
			cout << "For morning do Watering For 25 minute" << endl;
			return 0;
		}
		if (datakelemsiang < 30)
		{
			cout << "For morning do watering For 45 minute" << endl;
			return 0;
		}
		if (30 < datakelemsiang < 40)
		{
			cout << "For morning do watering For 35 minute" << endl;
			return 0;
		}
	}
}

// This coding to calculate watering in the afternoon //
long int perhitungansore(int datasuhusore, int datakelemsore)
{
	if (datasuhusore > 29)
	{
		if (datakelemsore > 40)
		{
			cout << "For morning do Watering For 15 minute" << endl;
			return 0;
		}
		if (datakelemsore < 30)
		{
			cout << "For morning do watering For 30 minute" << endl;
			return 0;
		}
		if (30 < datakelemsore < 40)
		{
			cout << "For morning do watering For 20 minute" << endl;
			return 0;
		}
	}

	if (datasuhusore < 26)
	{
		if (datakelemsore > 40)
		{
			cout << "For morning do Watering For 10 minute" << endl;
			return 0;
		}
		if (datakelemsore < 30)
		{
			cout << "For morning do watering For 0 minute" << endl;
			return 0;
		}
		if (30 < datakelemsore < 40)
		{
			cout << "For morning do watering For 0 minute" << endl;
			return 0;
		}
	}

	if (26 < datasuhusore < 29)
	{
		if (datakelemsore > 40)
		{
			cout << "For morning do Watering For 10 minute" << endl;
			return 0;
		}
		if (datakelemsore < 30)
		{
			cout << "For morning do watering For 30 minute" << endl;
			return 0;
		}
		if (30 < datakelemsore < 40)
		{
			cout << "For morning do watering For 20 minute" << endl;
			return 0;
		}
	}
}