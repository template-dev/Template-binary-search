#include <iostream>
#include <vector>

namespace my
{
	template<typename T>
	bool binary_search(T* container, T value, size_t size)
	{
		if (container)
		{
			size_t left = 0;
			size_t right = size;
			while (left < right)
			{
				size_t middle = left + (right - left) / 2;
				if (container[middle] < value)
					left = middle + 1;
				else if (container[middle] > value)
					right = middle;
				else
					return true;
			}
		}
		return false;
	}
}

int main()
{
	int buffer[]{1, 2, 3, 4};
	bool result = my::binary_search(buffer, 2, 4);
	if (result)
		std::cout << "The value is found!\n";
	else
		std::cout << "The value is not found!\n";

	std::vector<int> vec{1, 2, 3, 4};
	bool result2 = my::binary_search(vec.data(), -2, vec.size());
	if (result2)
		std::cout << "The value is found!\n";
	else
		std::cout << "The value is not found!\n";

	std::cin.get();
}