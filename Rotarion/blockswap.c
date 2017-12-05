 #include<stdio.h>
void swapl(int arr[],int a_,int b_,int d);//astart, bstart
void swapr(int arr[],int a_,int b_,int d);

void swapl(int arr[], int a_,int b_,int d){
	for(int i=0;i<d;i++)
	{
		int temp=arr[a_+i];
		arr[a_+i]=arr[b_+i];
		arr[b_+i]=temp;
	}
}
void swapr(int arr[],int a_,int b_, int d){
	for(int i=0;i<d;i++)
	{
		int temp=arr[b_+i];
		arr[b_+i]=arr[a_+i];
		arr[a_+i]=temp;
	}
	
}

char*blockswap(int *ary, int d, int n){
	int d1=(d<0)?-d:d;
	char *temp=(int *)malloc(sizeof(char)*d1);

	if(d1==0||d1=n)
		return;//형태 그대로
	int a=d1;
	int b=n-d1;

	if(d<0){//반시계방향
		while(a!=b){
			if(a<b){
			swapl(ary, d1-a,d1+b-a,a);
			b-=a;
			}
			else{
			swapl(ary, d1-a,d1,b);
			a-=b;
			}
		
		}
		swapl(ary,d1-a,d1,a);

	}
	else{//시계방향
		while(a!=b){
		if(a<b){
			swapr(ary, d1-a,d1+b-a,a);
			b-=a;
		}
		else{
			swapr(ary, d1-a,d1,b);
			a-=b;

		}
	

	}
	swapr(ary,d1-a,d1,a);
	}
	return ary;
}
