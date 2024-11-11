#include <iostream>
//#include <stdio.h>

#include "BaseKeyBoard.h"
#include "Logicool.h"
#include "RealForce.h"

// PG proj
// LE2A_06_オザワ

int main() {

    BaseKeyboard* keyboard[2];

    keyboard[0] = new Logicool("logi k855", 10000);
    keyboard[1] = new RealForce("RealForce R2", 30000);

    for (int i = 0; i < 2; i++) {
        keyboard[i]->Explain();
    }

    std::cout << std::endl;

    delete keyboard[0];
    delete keyboard[1];

	return 0;
}