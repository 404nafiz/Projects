#include<stdio.h>

int carr=0,mc=0,c=0,count=0;
int ecrr=0,emc=0,ec=0,ecount=0;
int tamount=0;
int amount=0;
void car();
void ecar();
void motorcycle();
void emotorcycle ();
void cycle();
void ecycle ();
void status();
void del();
int choice;
int menu();
       void main()
{
    while(1)
   {

     system("cls");

   switch(menu())
   {
   case 1:
       {
           car();
           break;
       }
        case 2:
            {
                motorcycle();
                break;
            }
             case 3:
                 {
                     cycle();
                     break;
                 }
                  case 4:
                      {
                         ecar();
                       break;
                      }
                       case 5:
                           {
                           emotorcycle ();
                               break;
                           }
                           case 6:
                               {
                                  ecycle ();
                                   break;
                                }
                           case 7:
                               {
                                    del();
                                     break;
                               }
                           case 8:
                               {
                                  status();
                                   break;
                               }

                       case 9:
                        {
                            exit(0);
                        }
                           default:
                               {
                                   printf("Invalid Choice");
                                }


   }

   }
    getch();
}
int menu()
{
    printf(".....................Welcome to the Parking Management System.....................");
    printf("\n\n***************MENU***************");
    printf("\n\n\n----------Entry Section----------");
printf("\n1.Entry Car");
printf("\n2.Entry Motorcycle");
printf("\n3.Entry Cycle");
printf("\n--------------Exit Section-----------");
printf("\n4.Exit Car");
printf("\n5.Exit Motorcycle");
printf("\n6.Exit Cycle");
printf("\n-------------------------------------");
printf("\n7.Delete Data");
printf("\n8.Show Saved Data");
printf("\n9.Exit From The Programme ");
printf("\n\n Enter number for adding Entry or Exit information or do the others work:");
scanf("%d",&choice);
return choice;
}

void car()
{
  carr++;
 amount=amount+100;

  count++;
  printf("\nRegistration completed successfully ");
  printf("\nPress (ENTER) to go Main Menu ... ");
  getch();
}
void motorcycle ()
{
  mc++;
  amount=amount+50;
   count++;
  printf("\nRegistration completed successfully ");
     printf("\nPress (ENTER) to go Main Menu ... ");
     getch();

}
void cycle ()
{
  c++;
  amount=amount+20;
   count++;
   printf("\nRegistration completed successfully ");
     printf("\nPress (ENTER) to go Main Menu ... ");
   getch();

}
void status()
{
    printf("\n\n----------Entry Section----------");
  printf("\n%d Car parked in the parking lot ",carr);
   printf("\n%d Motorcycle parked in the parking lot ",mc);
    printf("\n%d Cycle parked in the parking lot ",c);
    printf("\n\n--------------Exit Section-----------");

    printf("\nToday %d Car exit from the parking lot ",ecrr);
        printf("\n Today %d Motorcycle exit from the parking lot ",emc);
             printf("\n Today %d Cycle exit from the parking lot ",ec);
             printf("\n\n-----------------------------------");
     printf("\nTotal parked vehical:%d",count);
     printf("\nTotal exited vehical:%d",ecount);
          printf("\n\n----------Payment Section----------");

     printf("\nTotal Earned Rent:%d tk",tamount);
     int fa;
     fa=(amount-tamount);
       printf("\nTotal Unearned Rent:%d tk",fa);
       printf("\nPress (ENTER) to go Main Menu ... ");
     getch();
}
void del()
{
    carr=0;
    mc=0;
    c=0;
    ecrr=0;
    emc=0;
    ec=0;
    count=0;
    amount=0;
    tamount=0;
      printf("\nSuccessfully Delete All Data");
      printf("\nPress (ENTER) to go Main Menu ... ");
      getch();

}
//exit section//
void ecar()
{
  carr--;
  ecrr++;
 tamount=tamount+100;
  count--;
  ecount++;
  printf("\nCar exit the parking plot successfully and complited all the payment");
   printf("\n100tk added in the wallet,Successfully!!");
  printf("\nFor watcthing the payment history,press (ENTER) and then press(8)");
 getch();
}
void emotorcycle ()
{
  mc--;
  emc++;
  tamount=tamount+50;
   count--;
   ecount++;
     printf("\nMotorcycle exit the parking plot successfully and complited all the payment");
      printf("\n50tk added in the wallet,Successfully!!");

  printf("\nFor watcthing the payment history,press (ENTER) and then press(8)");
     getch();
}
void ecycle ()
{
  c--;
  ec++;
 tamount=tamount+20;
   count--;
   ecount++;
    printf("\nCycle exit the parking plot successfully and complited all the payment");
    printf("\n20tk added in the wallet,Successfully!!");
    printf("\nFor watcthing the payment history,press (ENTER) and then press(8)");
     getch();
}





