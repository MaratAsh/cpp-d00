#include <iostream>

int main(int argc, char *argv[])
{
	int	istr;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		istr = 0;
		while (argv[i][istr])
		{
			std::cout << (char) ((argv[i][istr] >= 'a' && argv[i][istr] <= 'z') ? argv[i][istr] + 'A' - 'a' : argv[i][istr]);
			istr++;
		}
	}
	std::cout << std::endl;
	return (0);
}
