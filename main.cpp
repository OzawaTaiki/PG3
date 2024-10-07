#include <iostream>
#include <Windows.h>
#include <random>
#include <functional>
#include <string>
// PG proj
// LE2A_06_オザワ

typedef void (*pFunc)(int);

int Input();
int GetAnswer();
void SetTimeOut(int _second);
std::string CheckAns(bool _flag);

int main() {

	pFunc p = SetTimeOut;

	int in =Input();
	
	std::function<bool()> f = [in](int _ans) { return _ans == in; };

	CheckAns();

	return 0;
}

int Input()
{
	int in = -1;
	std::cout << "偶数なら０，基数なら１を入力" << std::endl;
	while (1)
	{
		std::cin >> in;
		if (in == 0 || in == 1)
			break;
		else
			std::cout << "０か１以外受け付けない" << std::endl;
	}
	return in;
}

int GetAnswer()
{
	std::mt19937 random;
	std::random_device rd;
	random.seed(rd());
	std::uniform_real_distribution<>dist(0, 99);
	int ans = static_cast<int> (dist(random));
	return ans % 2;
}

void SetTimeOut(int _second)
{
	Sleep(_second * 1000);
}

std::string  CheckAns(bool _flag)
{
	if (_flag)
		return "正解";
	else
		return "不正解";
}
