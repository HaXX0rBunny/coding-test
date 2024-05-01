#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string str;
	int sum=0;
	std::cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		int j = 3;
		if (str[i] > 'C')
		{
			j++;
			if (str[i] >'F')
			{
				j++;
				if (str[i] > 'I')
				{
					j++;
					if (str[i] > 'L')
					{
						j++;
						if (str[i] > 'O')
						{
							j++;
							if (str[i] > 'S')
							{
								j++;
								if (str[i] > 'V')
									j++;

							}

						}
					}

				}
			}
		}
		sum += j;
	}
	std::cout << sum;
}