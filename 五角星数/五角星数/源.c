#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	//遍历所有五位数，找出五角星数。若求六合数，将i的范围改为从100000到i<1000000,并将pow中的后一个参数改为6。
	for (i = 10000; i < 100000; i++) {
		int sum = 0;  //定义那五个数字的五次方之和为sum
		
		//求那五个数字的五次方之和
		int j = i; //用j储存i，防止i的值改变
		while (j > 0) {
			sum += pow(j % 10, 5);  //pow函数是求某个数的几次幂
			j /= 10;
		}

		//判断是否是五角星数
		if (sum == i) {
			//如果是五角星数，便输出这个五角星数
			printf("%d\n", i);
		}
	}

	return 0;
}