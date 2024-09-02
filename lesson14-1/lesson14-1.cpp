#include <iostream>

using namespace std;

int ucebolunub5ebolunmeyensay(int arr1[]) {
	int say = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr1[i] % 3 == 0 && arr1[i] % 5 != 0) {
			say++;
		}
	}
	return say;
}

int main()
{
    cout << "\ntask1" << endl;
    int arr1[10] = {};
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = rand() % 100;
		cout << arr1[i] << ' ';
	}
	int ucebolunub5ebolunmeyensayf = ucebolunub5ebolunmeyensay(arr1);
	cout << ucebolunub5ebolunmeyensayf;

	cout << "\ntask2" << endl;
	int arr2[10] = {};
	srand(time(0));
	int cem = 0;
	bool menfidirmi = false;
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = rand() % 40-10;
		cout << arr2[i] << ' ';
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr2[i] < 0) {
			menfidirmi = true;
		}
		if (menfidirmi)
		{
			cem += arr2[i];
		}
	}
	cout << cem;
	cout << "\ntask3" << endl;
	int arr3[10] = {};
	srand(time(0));
	int cem3 = 0;
	bool musbetdirmi = false;
	for (int i = 0; i < 10; i++)
	{
		arr3[i] = rand() % 50 - 30;
		cout << arr3[i] << ' ';
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr3[i] > 0) {
			musbetdirmi = true;
		}
		if (musbetdirmi) {
			cem3 += arr3[i];
		}
	}
	cout << cem3;
	cout << "\ntask4" << endl;
	int arr4[20] = {};
	srand(time(0));
	int min = arr4[0];
	int max = arr4[0];
	for (int i = 0; i < 20; i++)
	{
		arr4[i] = rand() % 40;
		cout << arr4[i] << ' ';
	}
	for (int i = 0; i < 20; i++)
	{
		if (min > arr4[i]) {
			min = arr4[i];
		}
		if (max < arr4[i]) {
			max = arr4[i];
		}
	}
	cout << "min; " << min;
	cout << "max; " << max;
	cout << "\ntask5" << endl;
	int arr5[20] = {};
	srand(time(0));
	int birr = 0;
	int ikir = 0;
	int ucr = 0;
	for (int i = 0; i < 20; i++)
	{
		arr5[i] = rand() % 200;
		cout << arr5[i] << ' ';
	}
	for (int i = 0; i < 20; i++)
	{
		if (arr5[i] < 10) {
			birr++;
		}
		else if (arr5[i] < 100) {
			ikir++;
		}
		else {
			ucr++;
		}
	}
	cout << "bir reqemlilerin faizi; " << (double)birr / 20 * 100 << endl;
	cout << "iki reqemlilerin faizi; " << (double)ikir / 20 * 100 << endl;
	cout << "uc reqemlilerin faizi; " << (double)ucr / 20 * 100 << endl;
}


