#include <stdlib.h>

int	find_end_word(char *str, char *charset)
{
	int	pos_word;
	int	pos_charset;

	pos_word = 0;
	while (str[pos_word])
	{
		pos_charset = 0;
		while (str[pos_word + pos_charset] == charset[pos_charset])
		{
			if (!charset[pos_charset + 1])
				return (pos_word);
			pos_charset++;
		} 
		pos_word++;
	}
	return (pos_word);
}

int	move_str_pos(int current, int offset, char *str, char *charset)
{
	int	len_str;
	int	len_charset;

	len_str = 0;
	len_charset = 0;
	while (str[len_str])
		len_str++;
	while (charset[len_charset])
		len_charset++;
	if ((offset > 0) && ((current + offset) == len_str))
		current += offset;
	else if ((offset >= 0) && ((current + offset + len_charset) <= len_str))
		current += offset + len_charset;
	else if (current != len_str)
		current += 1;
	return (current);
}

int	strslen(char *str, char *charset)
{
	int	len_str;
	int	len_charset;
	int	current;
	int	offset;
	int	words;

	len_str = 0;
	len_charset = 0;
	while (str[len_str])
		len_str++;
	while (charset[len_charset])
		len_charset++;
	if ((len_str > 0) && ((len_str < len_charset) || !len_charset))
		return (1);
	current = 0;
	words = 0;
	while (str[current])
	{
		offset = find_end_word(str + current, charset);
		if ((offset > 0) && (((current + offset + len_charset) <= len_str)
			|| ((current + offset) == len_str)))
			words += 1;
		current = move_str_pos(current, offset, str, charset);
	}
	return (words);
}

char	*create_word(char *str, int offset)
{
	char	*word;
	int	pos;

	word = (char *)malloc((offset + 1) * sizeof(char));
	if (!word)
		return ((char *)0);
	pos = 0;
	while (pos < offset)
	{
		word[pos] = str[pos];
		pos++;
	}
	word[pos] = '\x0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int	arr_pos;
	int	str_pos;
	int	words;
	int	offset;

	words = strslen(str, charset) + 1;
	strs = (char **)malloc(words * sizeof(char *));
	if (!strs)
		return ((char **)0);
	arr_pos = 0;
	str_pos = 0;
	while (str[str_pos])
	{
		offset = find_end_word(str + str_pos, charset);
		if ((offset > 0) && (arr_pos < words))
		{
			strs[arr_pos] = create_word(str + str_pos, offset);
			arr_pos++;
		}
		str_pos = move_str_pos(str_pos, offset, str, charset);
	}
	strs[arr_pos] = (char *)0;
	return (strs);
}