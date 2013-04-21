/*
 * main.cpp
 *
 *  Created on: Apr 17, 2013
 *  
 */

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

/* Head ends here */
void nextMove(char player, int y, int x, int o_x, int o_y, vector<string> board) {
	//your logic here
	if (player == 103)
	{
		x = o_x;
		y = o_y;
	}
    
	if (board[x][y-1] == 45)
		cout << "LEFT";
	else if (board[x][y+1] == 45)
		cout << "RIGHT";
	else if (board[x-1][y] == 45)
		cout << "UP";
	else if (board[x+1][y] == 45)
		cout << "DOWN";
}
/* Tail starts here */
int main() {

	char player;
	int x, y;
	int o_x, o_y;
	int size_x, size_y;
	vector<string> board;

	cin >> player;
	cin >> x >> y >> o_x >> o_y >> size_x >> size_y ;
	for (int i = 0; i < size_x; i++) {
		string s;
		cin >> s;
		board.push_back(s);
	}
	nextMove(player, x, y, o_x, o_y, board);

	return 0;
	}
