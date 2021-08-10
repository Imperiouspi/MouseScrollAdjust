// MouseScrollAdjust.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	//  UINT  uiAction,
	//	UINT  uiParam, - set
	//	PVOID pvParam, - set
	//	UINT  fWinIni - SPIF_SENDCHANGE if setting
	UINT old_scroll;
	UINT new_scroll = 3;
	if (argc < 2 ) {
		cout << "Use 'get' or enter an integer";
		exit(EXIT_FAILURE);
	}
	else {
		string arg = argv[1];
		if (arg.compare("get") == 0 || arg.compare("GET") == 0 || arg.compare("Get") == 0) {
				SystemParametersInfo(SPI_GETWHEELSCROLLLINES, 0, &old_scroll, 0);
				cout << old_scroll;
				exit(EXIT_SUCCESS);
		}
		else if (atoi(argv[1]) < 0) {
			cout << "Invalid Number";
		}
		else {
			new_scroll = atoi(argv[1]);
			SystemParametersInfo(SPI_SETWHEELSCROLLLINES, new_scroll, 0, 3);
			cout << new_scroll;
			exit(EXIT_SUCCESS);
		}
	}


	exit(EXIT_FAILURE);
}