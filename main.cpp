#include <iostream>
#include <Windows.h>
#include <random>
// PG proj
// LE2A_06_オザワ

typedef void (*pFunc)(int);

int Input();
int GetAnswer();
void SetTimeOut(int _second);
void CheckAns(pFunc _p, int _in);

int main() {

	pFunc p = SetTimeOut;

	int in =Input();
	
	CheckAns(p, in);

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
	std::uniform_real_distribution<>dist(1, 6);
	int ans = static_cast<int> (dist(random));
	std::cout << "出目:" << ans << std::endl;
	return ans;
}

void SetTimeOut(int _second)
{
	Sleep(_second * 1000);
}

void CheckAns(pFunc _p, int _in)
{
	_p(3);
	int ans = GetAnswer();

	if (ans % 2 == _in)
		std::cout << "正解" << std::endl;
	else 
		std::cout << "不正解" << std::endl;
}
