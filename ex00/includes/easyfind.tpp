/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:04:49 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/08 16:25:16 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &container, int i)
{
	return (find(container.begin(), container.end(), i));
}
