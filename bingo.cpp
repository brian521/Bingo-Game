#include <iostream>

using namespace std;

int main() {

	int iNumber[25] = {};

	// 1 ~ 25까지숫자를 넣어준다.
	for (int i = 0; i < 25; i++)
	{
		iNumber[i] = i + 1;
	}

	//숫자를 섞어준다.
	int iTemp, idx1, idx2;
	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	while (true)
	{
		system("cls");

		//숫자를 5 x 5로 출력한다
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << iNumber[i * 5 + j] << "\t";
			}

			cout << endl;
		}

		break;

	}
	return 0;

}