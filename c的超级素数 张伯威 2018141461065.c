#include<stdio.h>
int main()
{
	int arr[899];
	int i,j,k=0,number=100;
	int b[100]={0};
	int a0,a1,a2,b0,b1,b2;		
	for(i=0;i<899;i++){
		arr[i]=number;
		number++;
		a0=arr[i]%10;
		a1=arr[i]/10%10;
		a2=arr[i]/100%10;
		b0=a0+a1+a2;
		b1=a0*a1*a2;
		b2=a0*a0+a1*a1+a2*a2;
		int flag=1;
		for(j=2;j<arr[i];j++){
			if(arr[i]%j==0){
				flag=0;
				break;
			}
		}
	if(flag==1){
	if(b1==0){
			flag=0;
		}	
	if(flag==1){	
		for(j=2;j<b0;j++){
			if(b0%j==0){
				flag=0;
				break;
			}			
		}
	}
	if(flag==1){
		for(j=2;j<b1;j++){
			if(b1%j==0){
				flag=0;
				break;
			}			
		}
	}
	if(flag==1){	
		for(j=2;j<b2;j++){
			if(b2%j==0){
				flag=0;
				break;
			}			
		}		
	}
	}
	if(flag==1){
		b[k]=arr[i];
		k++;
	}	
	}
	int sum=0,max;
	for(i=0;i<k;i++){
		sum=sum+b[i];
		max=b[i];	
	}
	printf("the max is %d\nthe sum is %d\ntotally have %d numbers",max,sum,k);
	return 0;
 } 
