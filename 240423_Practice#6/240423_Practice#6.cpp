//���� while��
#include <iostream>

int main()
{
	/*int result;

	std::cout << "5�� ���\n";

	for (int i = 1; i <= 9; i++)
	{
		result = i * 5;
		std::cout << "5 * " << i << " = " << result << std::endl;
	}*/

	int result;
	int i = 0;
	int j = 0;

	std::cout << "1~9�� ���\n";

	while (i < 9)
	{
		i++;
		std::cout << "----" << i << "��----" << std::endl;

		if (j == 9)
		{
			j = 0;
		}
		while (j < 9)
		{
			j++;

			result = i * j;
			std::cout << i << " * " << j << " = " << result << std::endl;

		}
	}


}



/*
result = i * j;
std::cout << j << " * " << i << " = " << result << std::endl;

if (i == 9)
{
	std::cout << "-----" << j << "��----" << std::endl;
	i = 1;
	j++;
}

if (j == 10)
{
	return 0;
}
*/