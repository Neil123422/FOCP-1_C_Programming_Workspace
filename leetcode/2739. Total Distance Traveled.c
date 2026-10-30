#include <stdio.h>
int distanceTraveled(int mainTank, int additionalTank) {
        int total = 0;
        int used = 0;

        while (mainTank != 0) {
            mainTank--;
            total += 10;
            used++;
            if (used % 5 == 0) {
                if (additionalTank) {
                    mainTank += 1;
                    additionalTank -= 1;
                }
            }
        }
        return total;    
    
}

int main()
{
int mainTank,additionalTank; 
printf("Enter the volume of gas in Main Tank (in litres):");
scanf("%d",&mainTank);
printf("Enter the volume of gas in Additional Tank (in litres):");
scanf("%d",&additionalTank);
printf("The total distance travelled is, %d",distanceTraveled(mainTank,additionalTank));
}