void Find_Peri(int ,float *,float *);
void Find_AreaPeri(int radius,float *area,float *perimeter)
{
	*area=3.14*radius*radius;
	*perimeter=2*3.14*radius;
}

void main()
{
	int r;
	float a,p;
	printf("\n enter the radius=");
	scanf("%d",&r);
	Find_AreaPeri(r,&a,&p);
	printf("\n area=%f",a);
	printf("\n perimeter=%f",p);
}


