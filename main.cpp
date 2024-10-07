#include <iostream>
#include <stdio.h>

// PG proj
// LE2A_06_オザワ

// 給料を計算
int CalculateSalary(int _salary, int _time, bool _isRecursize);

// 超える時間を計算
int FindHoursUntilRecursiveSalaryExceeds(int _normal, int _recursive);

int main() {

	const int kWages = 1072;
	const int kstartWages = 100;
	int time = 1;

	std::cout << "一般 : 時給." << kWages << std::endl;
	for (uint32_t i = 0; i < 10; i++)
	{
		int result = CalculateSalary(kWages, time, false);
		std::cout << time++ << "hour\t" << "給料 : "   << result << std::endl;

	}
	time = 1;
	std::cout << std::endl << "再帰 : 開始賃金." << kstartWages << std::endl;
	for (uint32_t i = 0; i < 10; i++)
	{
		int result = CalculateSalary(kstartWages, time, true);
		std::cout << time++ << "hour\t" << "給料 : " << result << std::endl;
	}

	//std::cout << FindHoursUntilRecursiveSalaryExceeds(1072,100) << std::endl;

	return 0;
}

int CalculateSalary(int _salary, int _time, bool _isRecursize)
{
	if (_time <= 1)
		return _salary;

	if (!_isRecursize)
		return _salary * _time;

	else
	{
		return CalculateSalary(_salary * 2 - 50 , _time - 1, _isRecursize);
	}

}

int FindHoursUntilRecursiveSalaryExceeds(int _normal, int _recursive)
{
	int normal = _normal;
	int recursive = _recursive;
	int time = 0;

	while (normal > recursive)
	{
		time++;
		normal = CalculateSalary(_normal, time, false);
		recursive = CalculateSalary(_recursive, time, true);
	}

	return time;
}
