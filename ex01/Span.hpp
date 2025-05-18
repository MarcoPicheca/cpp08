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
		/**
		 * 
		 * ft addNumber() aggiunge un solo numero
		 * allo Span. Questa sarà usata per riempirlo.
		 * Ogni tentativo di superare N elementi
		 * immagazzinati dovrebbe lanciare un eccezione.
		 *  
		 * ft shortestspan() che troverà la più piccola 
		 * distanza tra due numeri facenti parte dello span
		 * ovvero con la minore differenza
		 * 
		 * ft longestSpan() che invece troverà la più grande
		 * differenza tra due numeri dello span
		 * 
		 */
		void addNumber(int num);
		unsigned int getN() const;
		std::vector<int> getSpan() const;
		int longestSpan();
		int shortestSpan();

};

#endif
