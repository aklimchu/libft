/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:03:17 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 14:10:26 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"

char addc(unsigned int a, char c)
{
	c = c + a;
	return (c);
}
void addcstr(unsigned int a, char *c)
{
	*c = *c + a;
	return ;
}
int	main(void)
{
	printf("Test for isalpha 'c' : %d\n", isalpha('c'));
	printf("Test for ft_isalpha 'c' : %d\n", ft_isalpha('c'));
	printf("Test for isalpha 'Q' : %d\n", isalpha('Q'));
	printf("Test for ft_isalpha 'Q' : %d\n", ft_isalpha('Q'));
	printf("Test for isalpha ')' : %d\n", isalpha(')'));
	printf("Test for ft_isalpha ')' : %d\n\n\n", ft_isalpha(')'));

	printf("Test for isdigit 'c' : %d\n", isdigit('c'));
	printf("Test for ft_isdigit 'c' : %d\n", ft_isdigit('c'));
	printf("Test for isdigit '1' : %d\n", isdigit('1'));
	printf("Test for ft_digit '1' : %d\n", ft_isdigit('1'));
	printf("Test for isdigit ')' : %d\n", isdigit(')'));
	printf("Test for ft_isdigit ')' : %d\n\n\n", ft_isdigit(')'));
	
	printf("Test for isalnum 'c' : %d\n", isalnum('c'));
	printf("Test for ft_isalnum 'c' : %d\n", ft_isalnum('c'));
	printf("Test for isalnum '1' : %d\n", isalnum('1'));
	printf("Test for ft_alnum '1' : %d\n", ft_isalnum('1'));
	printf("Test for isalnum ')' : %d\n", isalnum(')'));
	printf("Test for ft_isalnum ')' : %d\n\n\n", ft_isalnum(')'));

	printf("Test for isascii 'c' : %d\n", isascii('c'));
	printf("Test for ft_isascii 'c' : %d\n", ft_isascii('c'));
	printf("Test for isascii '1' : %d\n", isascii('1'));
	printf("Test for ft_ascii '1' : %d\n", ft_isascii('1'));
	printf("Test for isascii 128 : %d\n", isascii(128));
	printf("Test for ft_isascii 128 : %d\n\n\n", ft_isascii(128));

	printf("Test for isprint '!' : %d\n", isprint('!'));
	printf("Test for ft_isprint '!' : %d\n", ft_isprint('!'));
	printf("Test for isprint '1' : %d\n", isprint('1'));
	printf("Test for ft_isprint '1' : %d\n", ft_isprint('1'));
	printf("Test for isprint 129 : %d\n", isprint(129));
	printf("Test for ft_isprint 129 : %d\n\n\n", ft_isprint(129));

	printf("Test for strlen HEY3./ : %lu\n", strlen("HEY3./"));
	printf("Test for ft_strlen HEY3./ : %lu\n", ft_strlen("HEY3./"));
	printf("Test for strlen 'space' : %lu\n", strlen(" "));
	printf("Test for ft_strlen 'space' : %lu\n", ft_strlen(" "));
	printf("Test for strlen 'empty' : %lu\n", strlen(""));
	printf("Test for ft_strlen 'empty' : %lu\n\n\n", ft_strlen(""));
	
	char str[4] = "MOI";
	char strtest[4] = "MOI";
	memset(str, 43, 2);
	printf("Test for memset - coping 2 of '+' to MOI : %s\n", str);
	ft_memset(strtest, 43, 2);
	printf("Test for ft_memset - coping 2 of '+' to MOI : %s\n", strtest);
	memset(str, 23, 2);
	printf("Test for memset - coping 2 of 23 to MOI : %s\n", str);
	ft_memset(strtest, 23, 2);
	printf("Test for ft_memset - coping 2 of 23 to MOI : %s\n", strtest);

	char str1[10] = "MOIHEI";
	char strtest1[10] = "MOIHEI";
	bzero(str1, 2);
	printf("Test for bzero - coping 2 zeroed bytes to MOIHEI :\n");
	write(1, str1, 6);
	write(1, "\n", 1);
	ft_bzero(strtest1, 2);
	printf("Test for ft_bzero - coping 2 zeroed bytes to MOIHEI :\n");
	write(1, strtest1, 6);
	write(1, "\n", 1);
	bzero(str1, 7);
	printf("Test for bzero - coping 7 zeroed bytes to MOIHEI :\n");
	write(1, str1, 7);
	write(1, "\n", 1);
	ft_bzero(strtest1, 7);
	printf("Test for ft_bzero - coping 7 zeroed bytes to MOIHEI :\n\n\n");
	write(1, strtest1, 7);
	write(1, "\n", 1);

	char dst[10] = "HEI";
	char src[10] = "YOYOYO";
	char dst1[10] = "HEI";
	char src1[10] = "YOYOYO";
	printf("Test 1 for memcpy : %s\n", memcpy(dst, src, 2));
	printf("Test 1 for ft_memcpy : %s\n", ft_memcpy(dst1, src1, 2));
	printf("Test 2 for memcpy : %s\n", memcpy(dst, src, 0));
	printf("Test 2 for ft_memcpy : %s\n", ft_memcpy(dst1, src1, 0));
	printf("Test 3 for memcpy : %s\n", memcpy(dst, src, 4));
	printf("Test 3 for ft_memcpy : %s\n", ft_memcpy(dst1, src1, 4));
	printf("Test 6 for memcpy : %s\n", memcpy(NULL, NULL, 4));
	printf("Test 6 for ft_memcpy : %s\n", ft_memcpy(NULL, NULL, 4));
	
	char dst2[12] = "COLDPLAY";
	char src2[5] = "MOI";
	char dst3[12] = "COLDPLAY";
	char src3[5] = "MOI";
	printf("Test 1 for memmove : %s\n", memmove(dst2 + 1, dst2, 2));
	printf("Test 1 for ft_memmove : %s\n", ft_memmove(dst3 + 1, dst3, 2));
	printf("Test 1 for memmove : %s\n", memmove(dst2, dst2 + 3, 2));
	printf("Test 1 for ft_memmove : %s\n", ft_memmove(dst3, dst3 + 3, 2));
	printf("Test 2 for memmove : %s\n", memmove(dst2, src2, 3));
 	printf("Test 2 for ft_memmove : %s\n", ft_memmove(dst3, src3, 3));
	printf("Test 3 for memmove : %s\n", memmove(NULL, NULL, 4));
	printf("Test 3 for ft_memmove : %s\n", ft_memmove(NULL, NULL, 4));
	
	char dst4[17] = "HEICUTEGIRL";
	char src4[4] = "MOI";
	char dst5[17] = "HEICUTEGIRL";
	char src5[4] = "MOI";
	printf("Test 1 for strlcpy : %lu, %s\n", strlcpy(dst4, src4, 14), dst4);
	printf("Test 1 for ft_strlcpy : %lu, %s\n", ft_strlcpy(dst5, src5, 14), dst5);
	printf("Test 2 for strlcpy : %lu, %s\n", strlcpy(dst4, src4, 17), dst4);
	printf("Test 2 for ft_strlcpy : %lu, %s\n", ft_strlcpy(dst5, src5, 17), dst5);
	printf("Test 3 for strlcpy : %lu, %s\n", strlcpy(dst4, src4, 0), dst4);
	printf("Test 3 for ft_strlcpy : %lu, %s\n", ft_strlcpy(dst5, src5, 0), dst5);
	printf("Test 4 for strlcpy : %lu, %s\n", strlcpy(dst4, src4, 1), dst4);
	printf("Test 4 for ft_strlcpy : %lu, %s\n", ft_strlcpy(dst5, src5, 1), dst5);
	
	char dst6[18] = "HEICUTEGIRL";
	char src6[4] = "MOI";
	char dst7[18] = "HEICUTEGIRL";
	char src7[4] = "MOI";
	printf("Test 1 for strlcat : %lu, %s\n", strlcat(dst6, src6, 15), dst6);
	printf("Test 1 for ft_strlcat : %lu, %s\n", ft_strlcat(dst7, src7, 15), dst7);
	printf("Test 2 for strlcat : %lu, %s\n", strlcat(dst6, src6, 8), dst6);
	printf("Test 2 for ft_strlcat : %lu, %s\n", ft_strlcat(dst7, src7, 8), dst7);

	printf("Test for toupper 'c' : %d\n", toupper('c'));
	printf("Test for ft_toupper 'c' : %d\n", ft_toupper('c'));
	printf("Test for toupper 'D' : %d\n", toupper('D'));
	printf("Test for ft_toupper 'D' : %d\n", ft_toupper('D'));
	printf("Test for toupper ')' : %d\n", toupper(')'));
	printf("Test for ft_toupper ')' : %d\n", ft_toupper(')'));
	
	printf("Test for tolower 'c' : %d\n", tolower('c'));
	printf("Test for ft_tolower 'c' : %d\n", ft_tolower('c'));
	printf("Test for tolower 'D' : %d\n", tolower('D'));
	printf("Test for ft_tolower 'D' : %d\n", ft_tolower('D'));
	printf("Test for tolower ')' : %d\n", tolower(')'));
	printf("Test for ft_tolower ')' : %d\n\n\n", ft_tolower(')'));

	printf("Test for strchr 'd' in Andrei : %s\n", strchr("Andrei", 'd'));
	printf("Test for ft_strchr 'd' in Andrei : %s\n", ft_strchr("Andrei", 'd'));
	printf("Test for strchr 'm' in Andrei : %s\n", strchr("Andrei", 'm'));
	printf("Test for ft_strchr 'm' in Andrei : %s\n", ft_strchr("Andrei", 'm'));
	printf("Test for strchr 0 in Andrei : %s\n", strchr("Andrei", 0));
	printf("Test for ft_strchr 0 in Andrei : %s\n", ft_strchr("Andrei", 0));
	printf("Test for strchr  : %s\n", strchr("teste", 'e' + 256));
	printf("Test for ft_strchr  : %s\n\n\n", ft_strchr("teste", 'e' + 256));


	printf("Test for strrchr 'd' in Andrei : %s\n", strrchr("Andreidrone", 'A'));
	printf("Test for ft_strrchr 'd' in Andrei : %s\n", ft_strrchr("Andreidrone", 'A'));
	printf("Test for strrchr 'm' in Andrei : %s\n", strrchr("Andrei", 'm'));
	printf("Test for ft_strrchr 'm' in Andrei : %s\n", ft_strrchr("Andrei", 'm'));
	printf("Test for strrchr 0 in Andrei : %s\n", strrchr("Andrei", 0));
	printf("Test for ft_strrchr 0 in Andrei : %s\n\n\n", ft_strrchr("Andrei", 0));
	printf("Test for strrchr  : %s\n", strrchr("teste", 't' + 256));
	printf("Test for ft_strrchr  : %s\n\n\n", ft_strrchr("teste", 't' + 256));


	printf("Test for strncmp Moi, Andrei, 2 symb : %d\n", strncmp("Moi", "Andrei", 2));
	printf("Test for ft_strncmp Moi, Andrei, 2 symb : %d\n", ft_strncmp("Moi", "Andrei", 2));
	printf("Test for strncmp Hei, Heippa, 5 symb : %d\n", strncmp("Hei", "Heippa", 5));
	printf("Test for ft_strncmp Hei, Heippa, 5 symb : %d\n", ft_strncmp("Hei", "Heippa", 5));
	printf("Test for strncmp Hei, Heippa, 3 symb : %d\n", strncmp("Hei", "Heippa", 3));
	printf("Test for ft_strncmp Hei, Heippa, 3 symb : %d\n\n\n", ft_strncmp("Hei", "Heippa", 3));


	
	printf("Test for memchr 'd' in Andrei : %s\n", memchr("Andrei", 'd', 3));
	printf("Test for ft_memchr 'd' in Andrei : %s\n", ft_memchr("Andrei", 'd', 3));
	printf("Test for memchr 'm' in Andrei : %s\n", memchr("Andrei", 'm', 8));
	printf("Test for ft_memchr 'm' in Andrei : %s\n", ft_memchr("Andrei", 'm', 8));
	printf("Test for memchr 0 in Andrei : %s\n", memchr("Andrei", 0, 7));
	printf("Test for ft_memchr 0 in Andrei : %s\n\n\n", ft_memchr("Andrei", 0, 7));

	printf("Test for memcmp Moi, Andrei, 3 symb : %d\n", memcmp("Moi", "Andrei", 2));
	printf("Test for ft_memcmp Moi, Andrei, 3 symb : %d\n", ft_memcmp("Moi", "Andrei", 2));
	printf("Test for memcmp Hei, Heippa, 5 symb : %d\n", memcmp("Hei", "Heippa", 5));
	printf("Test for ft_memcmp Hei, Heippa, 5 symb : %d\n", ft_memcmp("Hei", "Heippa", 5));
	printf("Test for memcmp Hei, Heippa, 3 symb : %d\n", memcmp("Hei", "Heippa", 3));
	printf("Test for ft_memcmp Hei, Heippa, 3 symb : %d\n", ft_memcmp("Hei", "Heippa", 3));
	printf("Test for memcmp  : %d\n", memcmp("atoms\0\0\0\0", "atoms\0abc", 8));
	printf("Test for ft_memcmp  : %d\n\n\n", ft_memcmp("atoms\0\0\0\0", "atoms\0abc", 8));


	
	printf("Test for strnstr HEYMYFRIEND, MY, -1 symb : %s\n", strnstr("HEYMYFRIEND", "MY", -1));
	printf("Test for ft_strnstr HEYMYFRIEND, MY, -1 symb : %s\n", ft_strnstr("HEYMYFRIEND", "MY", -1));
	printf("Test for strnstr HEYMYFRIEND, MY, 4 symb : %s\n", strnstr("HEYMYFRIEND", "MY", 4));
	printf("Test for ft_strnstr HEYMYFRIEND, MY, 4 symb : %s\n", ft_strnstr("HEYMYFRIEND", "MY", 4));
	printf("Test for strnstr HEYMYFRIEND, 'empty', 5 symb : %s\n", strnstr("HEYMYFRIEND", "", 5));
	printf("Test for ft_strnstr HEYMYFRIEND, 'empty', 5 symb : %s\n\n\n", ft_strnstr("HEYMYFRIEND", "", 5));
	printf("Test for strnstr HEYMYFRIEND, MY, 0 symb : %s\n", strnstr("HEYMYFRIEND", "MY", 0));
	printf("Test for ft_strnstr HEYMYFRIEND, MY, 0 symb : %s\n", ft_strnstr("HEYMYFRIEND", "MY",0));
	

	printf("Test for atoi    +9223372036854775807 : %d\n", atoi("   +9223372036854775807"));
	printf("Test for ft_atoi    +9223372036854775807 : %d\n", ft_atoi("   +9223372036854775807"));
	printf("Test for atoi    -9223372036854775807 : %d\n", atoi("   -9223372036854775807"));
	printf("Test for ft_atoi    -9223372036854775807: %d\n", ft_atoi("   -9223372036854775807"));
	printf("Test for atoi   -2147483649 : %d\n", atoi("  -2147483649"));
	printf("Test for ft_atoi   -2147483649  : %d\n", ft_atoi("  -2147483649"));
	printf("Test for atoi   -+5 : %d\n", atoi("  -+5"));
	printf("Test for ft_atoi   -+5  : %d\n", ft_atoi("  -+5"));
	printf("Test for atoi   +-3587 : %d\n", atoi("  +-3587"));
	printf("Test for ft_atoi   +-3587  : %d\n", ft_atoi("  +-3587"));
	printf("Test for atoi   +534 : %d\n", atoi("  +534"));
	printf("Test for ft_atoi   +534  : %d\n", ft_atoi("  +534"));
	printf("Test for atoi   -65478 : %d\n", atoi("  -65478"));
	printf("Test for ft_atoi   -65478  : %d\n\n\n", ft_atoi("  -65478"));
	


	void	*strx, *strx1;
	strx = calloc(5, 4);
	printf("Printing the calloc for count 5, size 4 %s\n", strx);
	free(strx);
	strx1 = ft_calloc(5, 4);
	printf("Printing the ft_calloc for count 5, size 4 %s\n\n\n", strx1);
	free(strx1);
	
	char	*astr;
	char	*astr1;
	astr = calloc(90000000000, 90000000000);
	astr1 = ft_calloc(90000000000, 90000000000);
	printf("calloc overflow: %s\n", astr);
	printf("ft_calloc overflow: %s\n", astr1);
	free(astr);
	free(astr1);

	char	*bstr;
	char	*bstr1;
	bstr = calloc(0, 0);
	bstr1 = ft_calloc(0, 0);
	printf("calloc for zeros: %s\n", bstr);
	printf("ft_callocfor zeros: %s\n", bstr1);
	free(bstr);
	free(bstr1);


	void	*str2 = "MOIKKA";
	void	*str3 = "MOIKKA";
	str2 = strdup(str2);
	printf("Printing the strdup for MOIKKA %s\n", str2);
	free(str2);
	str3 = ft_strdup(str3);
	printf("Printing the ft_strdup for MOIKKA %s\n\n\n", str3);
	free(str3);


	char	*str4;
	char	*str5;
	char	*astr4;
	char	*astr5;
	str4 = ft_substr("COLDPLAY", 1, 4);
	printf("COLDPLAY -> ft_substr of max length 4 starting from index 1: %s\n", str4);
	free(str4);
	str5 = ft_substr("COLDPLAY", 1, 0);
	printf("COLDPLAY -> ft_substr of max length 0 starting from index 1: %s\n", str5);
	free(str5);
	astr4 = ft_substr("COLDPLAY", 11, 4);
	printf("COLDPLAY -> ft_substr of max length 4 starting from index 11: %s\n", astr4);
	free(astr4);
	astr5 = ft_substr("", 1, 1);
	printf("'empty' -> ft_substr of max length 1 starting from index 1: %s\n\n\n", astr5);
	free(astr5);
	

	char	*str6;
	char	*str7;
	str6 = ft_strjoin("COLDPLAY", "ROCKS");
	printf("ft_strjoin of COLDPLAY and ROCKS: %s\n", str6);
	free(str6);
	str7 = ft_strjoin("", "");
	printf("ft_strjoin of two empty strings: %s\n\n\n", str7);
	free(str7);


	char	*str8;
	char	*str9;
	char	*str10;
	str8 = ft_strtrim("cattestcat", "tac");
	printf("ft_strtrim of costtestcat and tac: %s\n", str8);
	free(str8);
	str9 = ft_strtrim("COLDPLAYCOLD", "MOI");
	printf("ft_strtrim of COLDPLAYCOLD and MOI: %s\n", str9);
	free(str9);
	str10 = ft_strtrim("abhjhbbdjkb", "ab");
	printf("ft_strtrim of abhjhbbdjkb and ab: %s\n\n\n", str10);
	free(str10);

	char	**arr;
	char	**arr1;
	char	**aarr1;
	char	**tarr1;
	char	**barr1;
	char	**carr1;
	char	**darr1;
	int		i;
	arr = ft_split("meinmydreams", 'm');
	i = 0;
	printf("ft_split of 'meinmydreams' by 'm': \n");
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	free(arr);
	printf("\n");
	arr1 = ft_split("meinmydreams", 't');
	i = 0;
	printf("ft_split of 'meinmydreams' by 't': \n");
	while (arr1[i])
	{
		printf("%s\n", arr1[i]);
		i++;
	}
	free(arr1);
	printf("\n");
	aarr1 = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", 'r');
	i = 0;
	printf("ft_split of 'lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse' by 'r': \n");
	while (aarr1[i])
	{
		printf("%s\n", aarr1[i]);
		i++;
	}
	free(aarr1);
	printf("\n\n");
	
	tarr1 = ft_split("", 'a');
	i = 0;
	printf("ft_split of empty space by 'a': \n");
	while (tarr1[i])
	{
		printf("%s\n", tarr1[i]);
		i++;
	}
	free(tarr1);
	printf("\n");
	barr1 = ft_split("      split       this for   me  !", ' ');
	i = 0;
	printf("ft_split of '      split       this for   me  !' by ' ': \n");
	while (barr1[i])
	{
		printf("%s\n", barr1[i]);
		i++;
	}
	free(barr1);
	printf("\n");
	carr1 = ft_split("          ", ' ');
	i = 0;
	printf("ft_split of spaces by  ' ': \n");
	while (carr1[i])
	{
		printf("%s\n", carr1[i]);
		i++;
	}
	free(carr1);
	printf("\n");
	darr1 = ft_split("testtest", 't');
	i = 0;
	printf("ft_split of 'testtest' by 't': \n");
	while (darr1[i])
	{
		printf("%s\n", darr1[i]);
		i++;
	}
	free(darr1);
	printf("\n");


	

	char	*str11;
	str11 = ft_itoa(-1134234);
	printf("ft_itoa of -1134234: %s\n", str11);
	free(str11);	
	char	*str12;
	str12 = ft_itoa(2654433);
	printf("ft_itoa of 2654433: %s\n", str12);
	free(str12);
	char	*str13;
	str13 = ft_itoa(-2147483648);
	printf("ft_itoa of -2147483648: %s\n\n\n", str13);
	free(str13);

	char	*str14;
	str14 = ft_strmapi("ABC", addc);
	printf("ft_strmapi of ABC: %s\n", str14);
	free(str14);
	
	char	str15[4] = "ABC";
	ft_striteri(str15, addcstr);
	printf("ft_striteri of ABC: %s\n\n\n", str15);

	printf("ft_putchar_fd for 'a'\n");
	ft_putchar_fd('a', 1);
	
	printf("\n\n\nft_putstr_fd for ABC\n");
	ft_putstr_fd("ABC", 1);
	
	printf("\n\n\nft_putendl_fd for ABC\n");
	ft_putendl_fd("ABC", 1);
	
	printf("\n\n\nft_putnbr_fd for 123\n");
	ft_putnbr_fd(123, 1);
	printf("\nft_putnbr_fd for -2147483648\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\nft_putnbr_fd for -123\n");
	ft_putnbr_fd(-123, 1);

	return (0);
}
