#include <stdio.h>

/* 二つの文字列が何文字一致しているかカウント */
int str_equalnum(const char *s1, const char *s2)
{
    int i = 0;
    int n = 0;
	while(s1[i]){
        while(s2[i]){
            if(s1[i] == s2[i]){ n++; }
            i++;
        }
        i++;
    }
    return n;
}

int main(void)
{
	char str1[16], str2[16];
	int number;
	
	printf("文字列1を入力してください：");
	scanf("%s", str1);
	
	printf("文字列2を入力してください：");
	scanf("%s", str2);
	
	number = str_equalnum(str1, str2);

	printf("文字列1と文字列2は%d文字一致しています\n", number);

	return(0);
}