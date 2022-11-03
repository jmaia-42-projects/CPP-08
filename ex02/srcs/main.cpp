/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:05:59 by jmaia             #+#    #+#             */
/*   Updated: 2022/11/03 17:31:32 by jmaia            ###   ###               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "MutantStack.hpp"

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		MutantStack<int>	mStack;
		std::vector<int>	vec;

		vec.push_back(2);
		vec.push_back(8);
		vec.push_back(3);
		vec.push_back(-3);
		vec.push_back(5);
		vec.push_back(20);
		vec.push_back(12);
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			mStack.push(*it);

		std::vector<int>::iterator	v_it = vec.begin();
		MutantStack<int>::iterator	s_it = mStack.begin();
		while (v_it != vec.end() || s_it != mStack.end())
		{
			if (*s_it != *v_it)
			{
				std::cerr << "Error ! The values are differents !" << std::endl;
			}
			v_it++;
			s_it++;
		}
	}
	return 0;
}
