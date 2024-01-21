#include "Span.hpp"

void	printSeperator()
{
	std::cout << ", ";
}

int main()
{
	std::vector<int>	v;
	std::vector<int>	longV;
	
	try
	{
		Span	span(3);
		
		std::cout << "<< add number test >>" << std::endl;

		span.addNumber(0);
		span.addNumber(1);
		span.addNumber(2);
		span.printAllElement();
		span.addNumber(3);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span				span(10);
		int					arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
		std::vector<int>	v(arr, arr + sizeof(arr) / sizeof(arr[0]));

		std::cout << "<< add numbers test>>" << std::endl;
		span.addNumber(1);
		span.addNumbers(v);
		span.printAllElement();
		span.addNumbers(v);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span				span(100);
		std::vector<int>	v;

		std::cout << "<< valid short and long span test" << std::endl;
		for (int i = 0; i < 100; i++)
		{
			v.push_back(i);
		}

		span.addNumbers(v);
		std::cout << "short span: " << span.shortestSpan() << std::endl;
		std::cout << "long span: " << span.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span	span(10);

		std::cout << "invalid short span test" << std::endl;
		std::cout << "short span: " << span.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span	span(10);

		span.addNumber(1);
		std::cout << "short span: " << span.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span	span(10);

		std::cout << "invalid long span test" << std::endl;
		std::cout << "long span: " << span.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span	span(10);

		span.addNumber(1);
		std::cout << "long span: " << span.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}