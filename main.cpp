#include <iostream>
#include <stdio.h>

// PG proj
// LE2A_06_オザワ

int CalculateSalary(int _salary, int _time, bool _isRecursize);

int main() {

	int result= CalculateSalary(100, 10, true);

	std::cout << result << std::endl;

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
		return CalculateSalary(_salary, _time - 1, _isRecursize);
	}

	return 0;
}
