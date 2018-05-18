void cBmpio::sum(short **a , short **d , long length, long width)
{
	int i,j,m,n;
	for(i=2; i<length-2; i++)
	{
		for(j=2; j<width-2; j++)
		{
			d[i][j]=0;
			for(m=-2;m<=2;m++)
			{
				for(n=-2;n<=2;n++)
				{
					d[i][j]+=(a[i+m][j+n]);
				}
			}
		}
	}
}
