# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcressen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/31 02:26:36 by mcressen          #+#    #+#              #
#    Updated: 2018/08/31 02:28:04 by mcressen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

where_i_am=$(ifconfig | grep inet | grep broadcast | cut -d ' ' -f 2)
if [ $where_i_am = '' ]
then
	echo "I am lost!"
else
	echo $where_i_am
fi
