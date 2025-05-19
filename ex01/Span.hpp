#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <limits.h>
#include <stdexcept>

class Span
{
	private:
		unsigned int	N;
		std::vector<int> span;
	public:
		Span(unsigned int n);
		Span(const Span& copy);
		Span& operator=(const Span& copy);
		~Span();
		void addNumber(int num);
		template <typename IteratorElem>
		void addIterNumbers(IteratorElem begin, IteratorElem end);
		unsigned int getN() const;
		std::vector<int> getSpan() const;
		void printSpan();
		int longestSpan();
		int shortestSpan();

};

template <typename IteratorElem>
void	Span::addIterNumbers(IteratorElem begin, IteratorElem end)
{
	if ((span.size() + (unsigned int)(end - begin)) > N)
		throw std::runtime_error("Range over N elements!");
	while (begin != end)
	{
		addNumber(begin);
		begin++;
	}
}


#endif
