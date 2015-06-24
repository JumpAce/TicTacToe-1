#include <iostream>
#include <stdlib.h>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{
	int player = 1,i,choice,choice2,turn=1, flag_salah=0, flag_salah1=0;

	char mark;
	do
	{
		board();
		player=(player%2)?1:2;
if(turn<=6){
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
}
else{cout << "Player " << player << ", hapus:  ";
		cin >> choice;
        cout << "Player " << player << ", ke:  ";
		cin >> choice2;
		mark=(player == 1) ? 'X' : 'O';
//-------------------------------------------------------------------------------------------------
		if (choice == 1 && square[1] == 'X' && player == 1)

			square[1] = '1';
		else if (choice == 2 && square[2] == 'X' && player == 1)

			square[2] = '2';
		else if (choice == 3 && square[3] == 'X' && player == 1)

			square[3] = '3';
		else if (choice == 4 && square[4] == 'X' && player == 1)

			square[4] = '4';
		else if (choice == 5 && square[5] == 'X' && player == 1)

			square[5] = '5';
		else if (choice == 6 && square[6] == 'X' && player == 1)

			square[6] = '6';
		else if (choice == 7 && square[7] == 'X' && player == 1)

			square[7] = '7';
		else if (choice == 8 && square[8] == 'X' && player == 1)

			square[8] = '8';
		else if (choice == 9 && square[9] == 'X' && player == 1)

			square[9] = '9';
		else
		{
//			cout<<"Invalid move ";
            if(player == 1)
				flag_salah = 1;

//			player--;
//			cin.ignore();
//			cin.get();
		}
//-------------------------------------------------------------------------------------------------------------------
		if (choice == 1 && square[1] == 'O' && player == 2)

			square[1] = '1';
		else if (choice == 2 && square[2] == 'O' && player == 2)

			square[2] = '2';
		else if (choice == 3 && square[3] == 'O' && player == 2)

			square[3] = '3';
		else if (choice == 4 && square[4] == 'O' && player == 2)

			square[4] = '4';
		else if (choice == 5 && square[5] == 'O' && player == 2)

			square[5] = '5';
		else if (choice == 6 && square[6] == 'O' && player == 2)

			square[6] = '6';
		else if (choice == 7 && square[7] == 'O' && player == 2)

			square[7] = '7';
		else if (choice == 8 && square[8] == 'O' && player == 2)

			square[8] = '8';
		else if (choice == 9 && square[9] == 'O' && player == 2)

			square[9] = '9';
		else
		{
//			cout<<"Invalid move ";
            if(player == 2)
				flag_salah1 = 1;

//			player--;
//			cin.ignore();
//			cin.get();
		}

//----------------------------------------------------------------------------------------------------------

		if (choice2 == 1 && square[1] == '1' && flag_salah == 0 && flag_salah1 == 0) //&& square[1] != 'X' && square[1] != 'O')

			square[1] = mark;
		else if (choice2 == 2 && square[2] == '2' && flag_salah == 0 && flag_salah1 == 0) //&& square[2] != 'X' && square[2] != 'O')

			square[2] = mark;
		else if (choice2 == 3 && square[3] == '3' && flag_salah == 0 && flag_salah1 == 0) //&& square[3] != 'X' && square[3] != 'O') 

			square[3] = mark;
		else if (choice2 == 4 && square[4] == '4' && flag_salah == 0 && flag_salah1 == 0) //&& square[4] != 'X' && square[4] != 'O')

			square[4] = mark;
		else if (choice2 == 5 && square[5] == '5' && flag_salah == 0 && flag_salah1 == 0) //&& square[5] != 'X' && square[5] != 'O')

			square[5] = mark;
		else if (choice2 == 6 && square[6] == '6' && flag_salah == 0 && flag_salah1 == 0) //&& square[6] != 'X' && square[6] != 'O')

			square[6] = mark;
		else if (choice2 == 7 && square[7] == '7' && flag_salah == 0 && flag_salah1 == 0) //&& square[7] != 'X' && square[7] != 'O')

			square[7] = mark;
		else if (choice2 == 8 && square[8] == '8' && flag_salah == 0 && flag_salah1 == 0) //&& square[8] != 'X' && square[8] != 'O')

			square[8] = mark;
		else if (choice2 == 9 && square[9] == '9' && flag_salah == 0 && flag_salah1 == 0) //&& square[9] != 'X' && square[9] != 'O')

			square[9] = mark;

		else
		{
			cout<<"Invalid move ";
			if(flag_salah == 0 && flag_salah1 == 0)
			{
				if(player == 1)
				square[choice] = 'X';
				else
				square[choice] = 'O';
			}	
			
			player--;
			cin.ignore();
			cin.get();
		}
		
//----------------------------------------------------------------------------------------------------------

		}
		i=checkwin();
        flag_salah = 0;
		flag_salah1 = 0;
		player++;
		turn++;
	}while(i==-1);
	board();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}

/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}


