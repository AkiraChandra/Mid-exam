#include <Stdio.h>
#include <stdlib.h>
#include <ctype.h>

char namadish[200];
int input;
long long int harga;
int quantity;
bool check;
char a;



void addDish()
{
do
{
    printf("insert the name of the dish : ");
    scanf("%s", &namadish);
    puts("");
    for(int i = 0; i < sizeof(namadish); i++){
    
        if(namadish[i]>='a' && namadish[i]<='z')check=true;
        else{
            check= false;
        }
    }
} while (check=false);
do
{
    printf("insert the price of the dish : ");
    scanf("%lld", &harga);
puts(""); 
} while (harga >= 50000 && harga <= 1000);
do
{
    printf("insert the price of the dish : ");
    scanf("%d", &quantity);
puts("");
} while (quantity >= 999 && quantity <= 1);
puts("the dish has been added");

puts("Press enter to continue");
getchar();

}

void mainMenu(){
do{
    puts("1. add dish");
    puts("2. Remove Dish");
    puts("3. Add Costumer");
    puts("4. Search customer");
    puts("5. View Warteg");
    puts("6. Order");
    puts("7. Payment");
    puts("8. exit warteg");
    printf(">>>");
    scanf("%d", &input);
    }while (input >8 && input <1);
  if (input ==1)
  {
    addDish();
  }
}

int main (){





    return 0;
}