#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Span 1 = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span 1 = "  << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(16);
		sp.addNumber(8);
		std::cout << "Shortest Span 2 = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span 2 = "  << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(5);
		sp.addIterNumbers(3, 10);
		std::cout << "Shortest Span 3 = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span 3 = "  << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(5);
		sp.addIterNumbers(3, 6);
		std::cout << "Shortest Span 4 = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span 4 = "  << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		std::cout << "Single shot " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		std::cout << "Single shot "  << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}