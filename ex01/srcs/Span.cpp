/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:59:43 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/09 15:54:13 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <cstdlib>

Span::Span(void) { }

Span::Span(unsigned int N):	vec(std::vector<int>()), maxSize(N) { }

Span::Span(Span const &obj)
{
	*this = obj;
}

Span::~Span(void) { }

Span	&Span::operator=(Span const &obj)
{
	this->vec = obj.vec;
	this->maxSize = obj.maxSize;
	return (*this);
}

void	Span::addNumber(int nbr)
{
	if (this->vec.size() == this->maxSize)
		throw std::overflow_error("Span exceded max size !"); 
	this->vec.push_back(nbr);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	shortestDistance = -1;
	unsigned int	currentDistance;

	if (this->vec.size() < 2)
		throw std::range_error("There is not enough elements to calculate span");
	for (std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end(); it++)
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != this->vec.end(); it2++)
		{
			currentDistance = abs(*it2 - *it);
			if (currentDistance < shortestDistance)
				shortestDistance = currentDistance;
		}
	}
	return (shortestDistance);
}

unsigned int	Span::longestSpan(void)
{
	unsigned int	longestDistance = 0;
	unsigned int	currentDistance;

	if (this->vec.size() < 2)
		throw std::range_error("There is not enough elements to calculate span");
	for (std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end(); it++)
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != this->vec.end(); it2++)
		{
			currentDistance = abs(*it2 - *it);
			if (currentDistance > longestDistance)
				longestDistance = currentDistance;
		}
	}
	return (longestDistance);
}
