#include <iostream>
#include <windows.h>

using namespace std;

void start_counter() {
	// shomarandast faghat
	Sleep(1000);
	cout << "game will start in \n";
	cout << "			3\n";
	Sleep(1000);
	cout << "			2 \n";
	Sleep(1000);
	cout << "			1 \n";
	Sleep(1000);
}
void get_boat(int boats[5][2]) {
	// baraye gereftan mokhtasat ghayegh ha
	cout << "enter five boat coordinate : \n ";
	cout << "	boat loc 1 : ";
	cin >> boats[0][0] >> boats[0][1];
	cout << "	boat loc 2 : ";
	cin >> boats[1][0] >> boats[1][1];
	cout << "	boat loc 3 : ";
	cin >> boats[2][0] >> boats[2][1];
	cout << "	boat loc 4 : ";
	cin >> boats[3][0] >> boats[3][1];
	cout << "	boat loc 5 : ";
	cin >> boats[4][0] >> boats[4][1];
}
void get_missile(int missile[2]) {
	// baraye gereftan mokhtasat mooshake
	cout << "enter missile coordinates \n";
	cout << "	missile : ";
	cin >> missile[0] >> missile[1];
}
void insert_boats(int boats[5][2] , int tabl[5][5]) {
	// baraye gozashtane ghayegh ha dakhele map
	tabl[boats[0][1] - 1][boats[0][0] - 1] = 1;
	tabl[boats[1][1] - 1][boats[1][0] - 1] = 1;
	tabl[boats[2][1] - 1][boats[2][0] - 1] = 1;
	tabl[boats[3][1] - 1][boats[3][0] - 1] = 1;
	tabl[boats[4][1] - 1][boats[4][0] - 1] = 1;
}
void show_table(int tabl[5][5]) {
	// baraye namayesh naghshe
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << tabl[i][j] << " ";
		}
		cout << endl;
	}
}
void pl_input(int tabl[5][5] , int boats[5][2]) {
	// baraye gereftan dadeh ha az karbar hast
	get_boat(boats);
	insert_boats(boats, tabl);
	system("CLS");
	cout << "THIS IS YOUR MAP : \n";
	show_table(tabl);
	Sleep(5000);
	system("CLS");
}

//void computer_boat_choose(int computer_boat_arr[5][2]) {
//	// in tabe miad bejaye player 2 mokhtasat ghayegh ha ro mizane
//	// *tekrar darad. tashih shavad.
//	srand(time(0));
//	for (int i = 0; i < 5; i++) {
//		int num1 = 1 + (rand() % 5);
//		int num2 = 1 + (rand() % 5);
//		int numar[2] = { num1 , num2 };
//		computer_boat_arr[i][0] = numar[0];
//		computer_boat_arr[i][1] = numar[1];
//	}
//}

//void computer_missile_choose(int computer_missile_arr[2]) {
//	// in tabe miad bejaye player 2 mokhtasat mooshak ha ro mide
//	srand(time(0));
//	int num1 = 1 + (rand() % 5);
//	int num2 = 1 + (rand() % 5);
//	int numar[2] = { num1 , num2 };
//	computer_missile_arr[0] = numar[0];
//	computer_missile_arr[1] = numar[1];
//}

//void computer_mode(int boats_num_comp, int tabl_comp[5][5],  int computer_missile_arr[2] , int computer_boat_arr[5][2] , int boats_num_pl1 , int tabl_pl_1[5][5], int missile_pl_1[2], int player_id) {
//	// baraye halat computerr
//	int game = 1;
//	int i = 1;
//	insert_boats(computer_boat_arr , tabl_comp);
//	show_table(tabl_comp);
//	Sleep(3000);
//	while (game)
//	{
//		system("CLS");
//		cout << "ROUND " << i << '\n';
//		++i;
//		Sleep(3000);
//		system("CLS");
//		cout << "<< TURN PLAYER 1 >>\n";
//		get_missile(missile_pl_1);
//		if (tabl_comp[missile_pl_1[1] - 1][missile_pl_1[0] - 1] == 1) {
//			cout << "\n \n ** missile hit target ** \n \n";
//			tabl_comp[missile_pl_1[1] - 1][missile_pl_1[0] - 1] = 0;
//			--boats_num_comp;
//			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
//			cout << "number of computer Boats : " << boats_num_comp << '\n';
//			if (boats_num_comp == 0) {
//				cout << "\n \n ***** player 1 WIN! ***** \n \n";
//				Sleep(5000);
//				game = 0;
//				continue;
//			}
//		}
//		else {
//			cout << "missile lost \n";
//			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
//			cout << "number of compute Boats : " << boats_num_comp << '\n';
//		}
//
//		Sleep(3000);
//		system("CLS");
//		cout << "<< TURN PLAYER 2 >>\n";
//
//		if (tabl_pl_1[computer_missile_arr[1] - 1][computer_missile_arr[0] - 1] == 1) {
//			cout << "\n \n ** missile hit target ** \n \n";
//			tabl_pl_1[computer_missile_arr[1] - 1][computer_missile_arr[0] - 1] = 0;
//			--boats_num_pl1;
//			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
//			cout << "number of computer Boats : " << boats_num_comp << '\n';
//			if (boats_num_pl1 == 0) {
//				cout << "\n \n ***** COMPUTER WIN! ***** \n \n";
//				Sleep(5000);
//				game = 0;
//				continue;
//			}
//		}
//		else {
//			cout << "missile lost \n";
//			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
//			cout << "number of computer Boats : " << boats_num_comp << '\n';
//		}
//		Sleep(3000);
//		system("CLS");
//	}
//
//}

void two_player(int boats_num_pl1, int tabl_pl_1[5][5], int missile_pl_1[2], int boats_num_pl2, int tabl_pl_2[5][5], int missile_pl_2[2], int player_id) {
	// baraye halat do nafaare
	int game = 1;
	int i = 1;
	while (game)
	{
		system("CLS");
		cout << "ROUND " << i << '\n';
		++i;
		Sleep(3000);
		system("CLS");
		cout << "<< TURN PLAYER 1 >>\n";
		get_missile(missile_pl_1);
		if (tabl_pl_2[missile_pl_1[1] - 1][missile_pl_1[0] - 1] == 1) {
			cout << "\n \n ** missile hit target ** \n \n";
			tabl_pl_2[missile_pl_1[1] - 1][missile_pl_1[0] - 1] = 0;
			--boats_num_pl2;
			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
			cout << "number of player 2 Boats : " << boats_num_pl2 << '\n';
			if (boats_num_pl2 == 0) {
				cout << "\n \n ***** player 1 WIN! ***** \n \n";
				Sleep(5000);
				game = 0;
				continue;
			}
		}
		else {
			cout << "missile lost \n";
			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
			cout << "number of player 2 Boats : " << boats_num_pl2 << '\n';
		}

		Sleep(3000);
		system("CLS");
		cout << "<< TURN PLAYER 2 >>\n";
		get_missile(missile_pl_2);

		if (tabl_pl_1[missile_pl_2[1] - 1][missile_pl_2[0] - 1] == 1) {
			cout << "\n \n ** missile hit target ** \n \n";
			tabl_pl_1[missile_pl_2[1] - 1][missile_pl_2[0] - 1] = 0;
			--boats_num_pl1;
			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
			cout << "number of player 2 Boats : " << boats_num_pl2 << '\n';
			if (boats_num_pl1 == 0) {
				cout << "\n \n ***** player 1 WIN! ***** \n \n";
				Sleep(5000);
				game = 0;
				continue;
			}
		}
		else {
			cout << "missile lost \n";
			cout << "number of player 1 Boats : " << boats_num_pl1 << '\n';
			cout << "number of player 2 Boats : " << boats_num_pl2 << '\n';
		}
		Sleep(3000);
		system("CLS");
	}
}
int main() {
	// tabe asli
	int boats_num_pl1 = 5;
	int tabl_pl_1[5][5]={
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0} 
					};
	int boats_pl_1[5][2];
	int missile_pl_1[2] = {1 , 1};
	
	int boats_num_pl2 = 5;
	int tabl_pl_2[5][5] = {
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0}
	};
	int boats_pl_2[5][2];
	int missile_pl_2[2] = { 1 , 1 };

	int game_mode = 2;
	int player_id = 0;

	int computer_boat_arr[5][2];
	int tabl_comp[5][5] = {
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0} ,
					{0,0,0,0,0}
	};
	int computer_missile_arr[2];
	int boats_num_comp = 5;

	
	start_counter();
	cout << "GAME STARTED... \n";
	cout << "CHOOSE YOUR MODE : \n1.TWO PLAYER \n2.WITH COMPUTER\n 2 error dare hanooz kamel nist- 1 ro entekhab kon ba khodet bazi kon :))) \n";
	cin >> game_mode;
	if (game_mode == 1) {
		system("CLS");
		cout << "getting boat loc\n";
		Sleep(2500);
		system("CLS");
		cout << "<< PLAYER 1 >> \n";
		pl_input(tabl_pl_1, boats_pl_1);

		cout << "<< PLAYER 2 >> \n";
		pl_input(tabl_pl_2, boats_pl_2);

		two_player(boats_num_pl1, tabl_pl_1, missile_pl_1, boats_num_pl2, tabl_pl_2, missile_pl_2, player_id);
	}
//	if (game_mode == 2) {
//		system("CLS");
//		cout << "getting boat loc\n";
//		Sleep(2500);
//		system("CLS");
//		cout << "<< PLAYER 1 >> \n";
//		pl_input(tabl_pl_1, boats_pl_1);
//		computer_mode(boats_num_comp, tabl_comp, computer_missile_arr, computer_boat_arr, boats_num_pl1, tabl_pl_1, missile_pl_1, player_id);
//	}
return 0;
}