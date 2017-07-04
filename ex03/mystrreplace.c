void mystrreplacechar(char*str[],const char c1,const char c2)
{
	int i;
	i=0;
	char d1=c1;
	char d2=c2;
	while((*str)[i]!='\0')
	{
		if((*str)[i]==c1)
		{
			(*str)[i]=d2;
		}
		i++;
	}
}
