#include<unistd.h>
#include<stdio.h>
static char	*subs(char *s,int start,int end)
{
	char *p = malloc(end + start + 2);
	int i = 0;
	while (start <= end)
	{
		*(p+i) = s[start++];
		i++;
	}
	*(p + i) = '\0';
	return p;
}
char	*tr(char const *s1, char const *set)
{
	int start = 0;
	int t ;
	int len = strlen(s1) - 1;
	t = len;
	int i = 0;
	while (s1[i])
	{
		if(strchr(set,s1[i]) != NULL)
		{
			start++;
		}
		else
		{
			break;
		}
		i++;
	}
	while (s1[len])
	{
		if(strrchr(set,s1[len]) != NULL)
		{
			t--;
		}
		else
		{
			break;
		}
		len--;
	}
	char *sub = malloc(t - start + 2);
	sub = subs(s1,start , t);
	return (sub);
}
int main()
{
	char *w = "..wo....rd ///////////ho..la //.";
	char *p = ft_strtrim(w,"/$/.");
	printf("%s\n",p);
	printf("%s\n",w);
	return 0;
}
