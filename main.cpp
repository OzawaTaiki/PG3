#include <stdio.h>

// PG proj
// LE2A_06_オザワ

template<class T>
T Min(T _dig0, T _dig1);

template<>
inline char Min<char>(char _char0, char _char1);

int main(void) {

	printf("int      : %d\n", Min<int>(8, 1));
	printf("float    : %f\n", Min<float>(3.14f, 12.13f));
	printf("double   : %f\n", Min<double>(93.14, 12.13));
	printf("char     : %c\n", Min<char>('あ', 'い'));

	return 0;
}

template<class T>
T Min(T _dig0, T _dig1)
{
	T result = _dig0;
	if (result > _dig1)
		result = _dig1;

	return static_cast<T>(result);
};

template<>
inline char Min<char>(char _char0, char _char1)
{
	printf("数字以外は代入できません\n");
	return '-';
}