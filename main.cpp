#include <iostream>
#include <Windows.h>
#include <random>
#include <functional>
#include <string>
// PG proj
// LE2A_06_オザワ

void SetTimeout(int _sec);

int main() {

	int in = -1;

	std::function<int()> getAnswer;
	std::function<void()> checkAns;

	getAnswer = []() {
		std::mt19937 random;
		std::random_device rd;
		random.seed(rd());
		std::uniform_real_distribution<>dist(1, 6);
		int ans = static_cast<int> (dist(random));
		std::cout << "出目:" << ans << std::endl;
		return ans % 2;
		};

	checkAns = [&]() {
		if (in == getAnswer() % 2)
			std::cout << "正解" << std::endl;
		else
			std::cout << "不正解" << std::endl;
		};


	std::cout << "偶数なら０，基数なら１を入力" << std::endl;
	while (1)
	{
		std::cin >> in;
		if (in == 0 || in == 1)
			break;
		else
			std::cout << "０か１以外受け付けない" << std::endl;
	}

	SetTimeout(3);
	checkAns();

	return 0;
}

void SetTimeout(int _sec)
{
	Sleep(_sec * 1000);
}
