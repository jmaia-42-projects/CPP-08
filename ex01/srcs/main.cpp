/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:55:21 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/09 15:43:16 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

int	main(void)
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span	sp = Span(3);
		sp.addNumber(3);
		sp.addNumber(2);
		sp.addNumber(1);
		try
		{
			sp.addNumber(0);
		} catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span		sp = Span(3);
		std::vector<int> vec;

		vec.push_back(3);
		vec.push_back(2);

		sp.addNumbers(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span	sp = Span(3);
		sp.addNumber(3);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
