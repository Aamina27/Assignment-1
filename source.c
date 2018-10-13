#include <sys/types.h>
#include <sys/wait.h>
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>


int main()
{
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0;
	int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0,s11=0;
	int p1[2],p2[2],p3[2],p4[2],p5[2],p6[2],p7[2],p8[2],p9[2],p10[2];
        
	pipe(p1);pipe(p2);pipe(p3);pipe(p4);pipe(p5);pipe(p6);pipe(p7);pipe(p8);pipe(p9);
	
	int cpid1,cpid2,cpid3,cpid4,cpid5,cpid6,cpid7,cpid8,cpid9,cpid10;
	
	cpid1=fork();
	if(cpid1==0) //1 child
	{
		for(int i=0;i<100;i++)
		{
			sum1=sum1+i;
		}
		close(p1[0]);
		write(p1[1],&sum1,sizeof(sum1));
	}
	
	else
	{
		cpid2=fork();
		if(cpid2==0) //2 child
	{
		for(int i=100;i<200;i++)
		{
			sum2=sum2+i;
		}
		close(p2[0]);
		write(p2[1],&sum2,sizeof(sum2));
	}
	
	else
	
	{
		cpid3=fork();
		if(cpid3==0) //3 child
	{
		for(int i=200;i<300;i++)
		{
			sum3=sum3+i;
		}
		close(p3[0]);
		write(p3[1],&sum3,sizeof(sum3));
	}
	
	else 
	{
		cpid4=fork();
		if(cpid4==0) //4 child
	{
		for(int i=300;i<400;i++)
		{
			sum4=sum4+i;
		}
		close(p4[0]);
		write(p4[1],&sum4,sizeof(sum4));
	}
	
	else
	{
		cpid5=fork();
		if(cpid5==0) //5 child
	{
		for(int i=400;i<500;i++)
		{
			sum5=sum5+i;
		}
		close(p5[0]);
		write(p5[1],&sum5,sizeof(sum5));
	}
	
	else
	{
		cpid6=fork();
		if(cpid6==0) //6 child
	{
		for(int i=500;i<600;i++)
		{
			sum6=sum6+i;
		}
		close(p6[0]);
		write(p6[1],&sum6,sizeof(sum6));
	}
	
	else
	{
		cpid7=fork();
		if(cpid7==0) //7 child
	{
		for(int i=600;i<700;i++)
		{
			sum7=sum7+i;
		}
		close(p7[0]);
		write(p7[1],&sum7,sizeof(sum7));
	}
	
	else 
	{
		cpid8=fork();
		if(cpid8==0) //8 child
	{
		for(int i=700;i<800;i++)
		{
			sum8=sum8+i;
		}
		close(p8[0]);
		write(p8[1],&sum8,sizeof(sum8));
	}
	
	else
	{
		cpid9=fork();
		if(cpid9==0) //9 child
	{
		for(int i=800;i<900;i++)
		{
			sum9=sum9+i;
		}
        close(p9[0]);
		write(p9[1],&sum9,sizeof(sum9));
	}
	
	else
	{
		cpid10=fork();
		if(cpid10==0) //10 child
	{
		for(int i=900;i<1000;i++)
		{
			sum10=sum10+i;
		}
        close(p10[0]);
		write(p10[1],&sum10,sizeof(sum10));
	}
	
	else //parent
	{
		for(int i=0;i<10;i++)
		{
			wait(0);
		}
		
        close(p1[1]);
		read(p1[0],&s1,sizeof(s1));
		
		close(p2[1]);
		read(p2[0],&s2,sizeof(s2));
		
		close(p3[1]);
		read(p3[0],&s3,sizeof(s3));
		
		close(p4[1]);
		read(p4[0],&s4,sizeof(s4));
		
		close(p5[1]);
		read(p5[0],&s5,sizeof(s5));
		
		close(p6[1]);
		read(p6[0],&s6,sizeof(s6));
		
		close(p7[1]);
		read(p7[0],&s7,sizeof(s7));
		
		close(p8[1]);
		read(p8[0],&s8,sizeof(s8));
		
		close(p9[1]);
		read(p9[0],&s9,sizeof(s9));
		
		close(p10[1]);
		read(p10[0],&s10,sizeof(s10));
		
		s11=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
		printf("%d\n",s11);
		
	}
	}
	}
	}
	}
	}
	}
	
	
	}
		
	}
	
	
	
	
	
	
	}
	
	
	
	
	
	return 0;
}
