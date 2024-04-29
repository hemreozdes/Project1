#include <stdio.h>
void entries(int,int);
void output(int);
int aList[100];int bList[100];int cList[100];
int g2,g1,cA=0,cB=0,out,cC=0,counter=0;
int main()
{
    int A,B,C,i;
    printf("Enter the first number:");scanf("%d",&A);printf("Enter the second number:");scanf("%d",&B);
    C=A+B;
    if(A==0){
    	aList[0]=A;
	}
    else{
		while(A>0){
        	aList[cA]=A%10;
        	A=A/10;
        	cA++;
    	}
	}
    if(B==0){
    	bList[0]=B;
	}
	else{
		while(B>0){
        	bList[cB]=B%10;
        	B=B/10;
        	cB++;
    	}
	}
    while(C>0){
        cList[cC]=C%10;
        C=C/10;
        cC++;
    }
    entries(cA,cB);
    output(cC);
    printf("\n");
    int combination[cA+cB];
    for(i=0; i<cA; i++)
    {
        combination[counter]=aList[i];
        counter++;
    }
    for(i=0; i<cB; i++)
    {
        combination[counter]=bList[i];
        counter++;
    }
	for(i=0; i<counter; i++){
        printf("%d ",i+1,combination[i]);
    }
    int lap, k=0, hold;
	for(lap=0;lap<counter;lap++){
		for(k=lap+1;k<counter;k++){
			if(combination[lap]>combination[k]){
				hold=combination[lap];
				combination[lap]=combination[k];
				combination[k]=hold;
			}
		}
	}	
	printf("\nSorted list = ");
	for(k=0;k<counter;k++){
		printf("%d ",combination[k]);
	}
	float y;
	if(counter%2==0)
		y=((combination[counter/2]+combination[(counter-1)/2])/2.0);
	else
		y=(float)combination[(counter-1)/2];
	printf("\nMedian= %f",y);
    return 0;}   
	void entries(int cA,int cB){
    	printf("The first list= ");
    	for(g1=0;g1<cA;g1++){
        	printf("%d ",aList[g1]);
    	}
    	printf("\n");
    	printf("The second list= ");
    	for(g2=0;g2<cB;g2++){
        	printf("%d ",bList[g2]);
    	}
    	printf("\n");	} 
	void output(cC){
    	printf("The output= ");
    	for(out=0;out<cC;out++){
        	printf("%d ",cList[out]);
    	}
	}
