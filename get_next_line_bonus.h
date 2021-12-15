/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:21:14 by vkanate           #+#    #+#             */
/*   Updated: 2021/12/09 15:21:18 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

size_t			ft_strlen(const char *s);
char			*ft_strdup(char *src);
char			*ft_strchr(char *str, int c);
char			*get_next_line(int fd);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
