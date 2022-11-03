/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:59:43 by jmaia             #+#    #+#             */
/*   Updated: 2022/11/03 17:19:19 by jmaia            ###   ###               */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>
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
	sort(this->vec.begin(), this->vec.end());
	for (std::vector<int>::iterator it = this->vec.begin() + 1; it != this->vec.end(); it++)
	{
		currentDistance = *it - *(it - 1);
		if (currentDistance < shortestDistance)
			shortestDistance = currentDistance;
	}
	return (shortestDistance);
}

unsigned int	Span::longestSpan(void)
{
	if (this->vec.size() < 2)
		throw std::range_error("There is not enough elements to calculate span");
	return (*max_element(this->vec.begin(), this->vec.end()) - *min_element(this->vec.begin(), this->vec.end()));
}
