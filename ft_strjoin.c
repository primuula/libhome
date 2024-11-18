/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:17:07 by safamran          #+#    #+#             */
/*   Updated: 2024/11/18 14:48:21 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	lenun;
	
	int	lendeux;

	lenun = ft_strlen(s1);
	lendeux = ft_strlen(s2);
	
	char *news;

	news = malloc(sizeof (char) * (lenun + lendeux + 1));
	int i = 0;
	while(s1[i] != '\0')
	{
	news[i] = s1[i];
	i++;
	}

	int y = 0;
	while(s2[y] != '\0')
	{
	news[i] = s2[y];
	y++;
	i++;
	}
	news[i] = '\0';
	return (news);
}
/*
int main()
{	
	char *prem = "doki";
	char *deux = "marvose";
	ft_strjoin(prem, deux);
	return 0;
}*/
