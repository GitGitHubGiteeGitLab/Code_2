#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<stdlib.h>

int m_atoi(const char *str, int *pflag){
	assert(str);

	if(*str == '\0'){
		return 0;
	}

	while(*str == ' '){
		str++;
	}

	int flg = 1;
	if(*str == '+'){
		str++;
	}
	if(*str == '-'){
		str++;
		flg = -1;
	}

	long long ret = 0;

	while(*str != '\0'){
		if(isdigit(*str)){
			ret = ret * 10 + flg * (*str - '0');//数字0和字符'\0'
			if(ret > INT_MAX || ret < INT_MIN){
				return 0;
			}
			str++;
		}else{
			break;
		}
	}
	*pflag = 1;
	return (int)ret;
}


int main()
{
	char str[] = "  -823948";
	int flag = 0;
	int ret = m_atoi(str, &flag);
	// if(flag == 1){
		printf("%d", ret);
	// }
	return 0;
}