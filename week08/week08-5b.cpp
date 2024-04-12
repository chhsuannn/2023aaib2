//week08-4b.cpp SLJ-Looping-001
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans=1;
	for (int i=1; i<=n; i++)
	{
		ans *= i;
	}
	printf("%d",ans);
}

//== 以上是自[瘋狂雲端]下載的資料 請自行剪貼到各檔中進行寫作
/*
#include <stdio.h>
int main()
{
	int n, ans=1;
	scanf("%d", &n);
	for (int i=1; i<0; i--)
	{
		ans *= i;
	}
	printf("%d",ans);
}

//*/
