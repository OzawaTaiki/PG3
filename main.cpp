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
	bool isRecursive = false;

	std::cout << "給料体系 0:一般 1:再帰" << std::endl;	
	std::cin >> isRecursive;

	std::cout << "働いた時間" << std::endl;	
	std::cin >> time;

	int result = CalculateSalary(isRecursive ? kstartWages : kWages, time, isRecursive);
	std::cout << "給料 : " << result << std::endl;

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
