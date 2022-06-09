/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:10:36 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/09 13:41:12 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"

int	main(void)
{
	{
		std::vector<int> vec;
		vec.push_back(5);
		vec.push_back(4);
		vec.push_back(6);
		vec.push_back(19);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(6);
		vec.push_back(5);

		std::vector<int>::iterator	it = easyfind(vec, 6);
		for (; it != vec.end(); it++)
			std::cout << *it << std::endl;
	}

	{
		std::list<int> list;
		list.push_back(5);
		list.push_back(4);
		list.push_back(6);
		list.push_back(19);
		list.push_back(3);
		list.push_back(4);
		list.push_back(6);
		list.push_back(5);

		std::list<int>::iterator	it = easyfind(list, 2);
		if (it == list.end())
			std::cerr << "Number not found !" << std::endl;
		else
			std::cout << "Hoho, the number does not have to be found" << std::endl;
	}
}
