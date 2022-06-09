/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:01:38 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/09 17:18:47 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class	MutantStack:	public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(void);
		MutantStack(MutantStack const &obj);
		~MutantStack(void);

		MutantStack	&operator=(MutantStack const &obj);

		iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"

#endif
