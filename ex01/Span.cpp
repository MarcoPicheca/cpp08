#include "Span.hpp"

Span::Span(unsigned int n)
{
	N = n;
}

Span::Span(const Span& copy)
{
	N = copy.getN();
	span = copy.getSpan();
}

Span& Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		N = copy.getN();
		span = copy.getSpan();		
	}
	return *this;
}

void	Span::addNumber(int num)
{
	if (span.size() + 1 > N)
		throw std::runtime_error("Over the N elements!");
	else
		span.push_back(num);
}

int	Span::longestSpan()
{
	if (span.size() < 2)
		throw std::runtime_error("Not enough elements!");
	int max_span = (*std::max_element(span.begin(), span.end()) 
					- *std::min_element(span.begin(), span.end()));
	return max_span;
}


int Span::shortestSpan()
{
	if (span.size() < 2)
		throw std::runtime_error("Not enough elements!");
	int sum = INT_MAX;
	std::vector<int> copy;
	for (size_t i = 0; i < span.size(); i++)
		copy.push_back(span.at(i));
	std::sort(copy.begin(), copy.end());
	for (size_t i = 1; i < copy.size(); i++)
	{
		if (sum > (copy.at(i) - copy.at(i - 1)))
			sum = copy.at(i) - copy.at(i - 1);
	}
	return sum;
}

void Span::printSpan()
{
	for (size_t i = 0; i < span.size(); i++)
	{
		std::cout << span[i] << " numero" << std::endl;
	}
}

unsigned int Span::getN() const
{
	return N;
}

std::vector<int> Span::getSpan() const
{
	std::vector<int> getterSpan;
	for (size_t i = 0; i < span.size(); i++)
	{
		getterSpan.push_back(span.at(i));
	}
	return getterSpan;
}

Span::~Span()
{
}
