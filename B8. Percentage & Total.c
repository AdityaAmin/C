int main()
{
	int Physics, Chemistry , Biology, Total;
	float Percentage;	
	printf("-------------------------\n");
    printf("        Marksheet        ");	 
	printf("\n-------------------------");
    printf("\n\nPhysics : ");
	scanf("%d",&Physics);
	printf("\nChemistry : ");
	scanf("%d",&Chemistry);
	printf("\nBiology : ");
	scanf("%d",&Biology);
	
	Total=Physics+Chemistry+Biology;      
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\nTotal = %d", Total);
	Percentage = (Total / 300.0) * 100;      
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\nPercentage = %.2f", Percentage);
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-");
}