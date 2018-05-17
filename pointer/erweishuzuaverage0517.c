int main(void)
{
	int buf[3][5] = { {2, 4, 3, 5, 3}, {7, 2, 6, 8, 1}, {7, 3, 9, 0, 2} };
    //不允许使用数组下标，只能通过指向二维数组的指针求出数组中每行和每列的平均值 
	
	int i;
	int j;
	for(i = 0; i < 3; i++)   //求 每一行的平均数 
	{
		double sum = 0;
		for(j = 0; j < 5; j++)
		{
			sum += buf[i][j];
		}
		printf("%lf\n", sum/5);
	  }  
    printf("-----------以上求每一行的平均值------------------\n");	  

	for(i = 0; i < 5; i++)    //求 每一列的平均数 
	{
		double sum = 0; 
		for(j = 0; j < 3; j++)
		{
			sum += buf[j][i];
		}
		printf("%lf\n", sum/3);
	  } 
	  printf("-----------以上求每一列的平均值--------------------\n");	 
	  
	  	for(i = 0; i < 3; i++)   //使用指针  求 每一行的平均数 
	{
		double sum = 0;
		for(j = 0; j < 5; j++)
		{
			sum += (*(*(buf + i) + j)); 
//			sum += buf[i][j];
		}
		printf("%lf\n", sum/5);
	  }  
       printf("-----------以上使用指针求每一行的平均值------------------\n");	  

	for(i = 0; i < 5; i++)    //使用指针  求 每一列的平均数 
	{
		double sum = 0; 
		for(j = 0; j < 3; j++)
		{
			sum += (*(*(buf + j) + i));
//			sum += buf[j][i];
		}
		printf("%lf\n", sum/3);
	  } 
	  printf("-----------以上使用指针求每一列的平均值-------------------\n");	 
}
