#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		unsigned int N;
	public:
		Span(unsigned int n);
		~Span();
		/**
		 * ft addNumber() aggiunge un solo numero
		 * allo Span. Questa sarà usata per riempirlo.
		 * Ogni tentativo di superare N elementi
		 * immagazzinati dovrebbe lanciare un eccezione.
		 * 
		 * 
		 * 
		 */
};

Span::Span(unsigned int n)
{
	N = n;
}

Span::~Span()
{
}


#endif
