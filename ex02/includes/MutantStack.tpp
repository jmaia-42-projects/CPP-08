/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    MutantStack.tpp                                    :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2022/06/09 17:01:22 by jmaia             #+#    #+#              */
/*    Updated: 2022/06/09 17:01:23 by jmaia            ###   ########.fr        */
/*                                                                              */
/* **************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack(void) { }

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &obj)
{
	(void) obj;
}

template<typename T>
MutantStack<T>::~MutantStack(void) { }

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &obj)
{
	(void) obj;
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}
