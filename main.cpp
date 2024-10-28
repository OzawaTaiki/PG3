//#include <iostream>
#include <stdio.h>
#include "Enemy.h"
// PG proj
// LE2A_06_オザワ

int main() {

	Enemy* enemy = new Enemy;
	enemy->Initialize();

	while (!enemy->IsLeave())
	{
		enemy->Update();
	}

	delete enemy;

	return 0;
}