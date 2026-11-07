# include <stdio.h>
int main()
{   float km, m ,cm, ft, inch;
    printf("distance between two cities : \n");
    scanf("%f",&km);
    m = 1000*km ;
    cm = 100*m ;
    ft = 30.48*cm ;
    inch = 0.08*ft ;
    printf("distance between two cities in meter : %f\n",m);
    printf("distance between two cities in centimeter : %f\n",cm);
    printf("distance between two cities in feet :%f \n",ft);
    printf("distance between two cities in inches :%f \n",inch);
            return 0;
    
}
