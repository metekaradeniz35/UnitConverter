#include <stdio.h>



int main() {

  int option1,caseOption1,caseOption2,fahrenheit,celsius,kelvin;
  float sum = 0,usd,eur;

  printf("======== Unit Converter ========\n");
  printf("Which converter do you want to use(1.Heat 2.Money):\n");
  scanf("%d",&option1);
  if(option1 == 1){
    
      printf("Which turn do you want to convert(1. Fahrenheit -> Celsius 2.Celsius -> Fahrenheit 3.Kelvin -> Celsius 4.Kelvin -> Fahrenheit)");
      scanf("%d",&caseOption1);

      //Fahrenheit -> Celsius

      if(caseOption1 == 1){
        printf("Fahrenheit: ");
        scanf("%d",&fahrenheit);
        sum = (fahrenheit-32) * 0.5556;
        printf("Converted Celsius is %f",sum);

        // Celsius -> Fahrenheit

      } else if(caseOption1 == 2) {
        printf("Celsius: ");
        scanf("%d",&celsius);
        sum = (celsius*1.8)+32;
        printf("Converted Fahrenheit is %f",sum);
      }

      // Kelvin -> Celsius
      else if(caseOption1 == 3){
        printf("Kelvin: ");
        scanf("%d",&kelvin);
        sum = kelvin-273.15;
        printf("Converted Celsius is %f",sum);
      }

      //Kelvin -> Fahrenheit
      else if(caseOption1 == 4){
        printf("Kelvin: ");
        scanf("%d",&kelvin);
        sum = (kelvin-273.15) * 1.8 + 32;
        printf("Converted kelvin is %f",sum);
      }
    }
    else if(option1 == 2){
          printf("Which turn do you want to convert(1.USD -> EUR 2.EUR- > USD)");
          scanf("%d",&caseOption2);
          if(caseOption2 == 1) {
            printf("USD: ");
            scanf("%f",&usd);
            sum = usd*0.93; //This is the currency when i make the program
            printf("Converted USD is %f",sum);
          } else if(caseOption2 == 2) {
            printf("EUR: ");
            scanf("%f",&eur);
            sum = eur*1.07; //This is the currency when i make the program
            printf("Converted EUR is %f",sum);
          }
          }

}
