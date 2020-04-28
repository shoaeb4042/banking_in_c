#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
FILE *fp,*fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*README;
	struct from{
    char un[200];
	char name[200];
	char adress[200];
	char phone[16];
	char sex[5]	;
	char act[30];
	char key[5];
	char pass[20];
	};
void serial();
void print();
void menu1();
void admin();
void user();
void login1();
void login2();
void signup();
void forget();
void menu2 ();
void delay ();
void cashin();
void cashout();
void cash();
void menu3();
void log();
void delete();
void taka();
void uinfo();
int main()
{
	int i;
    print();
    while(1){
    	system("cls");
        system("COLOR 4f");
        printf("\n\n\n\n");
        printf("\t**************************************************************\n");
        printf("\t*     DATE: %s                     TIME: %s   *\n",__DATE__,__TIME__);
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*                       MENU                                 *\n");
        printf("\t*                 __________________                         *\n");
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*               1. ADMIN MODE                                *\n");
        printf("\t*               2. USER MODE                                 *\n");
        printf("\t*               3. EXIT (any key)                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*               ENTER YOUR CHOICE  1/2/(any key)             *\n");
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t**************************************************************\n");
    	scanf("%d",&i);
    	switch(i){
    		case 1:
    			admin();
    			break;
    			case 2:
    			user();
    			break;
                default :
    			exit(0);
    			break;
    	}
    }

return 0;
}
void serial(){
int a,b;
char c;
fp7=fopen("C:/serial","r");
if(fp7!=NULL){
    fclose(fp7);
    system("cls");
    system("COLOR 4f");
}
else{
    fclose(fp7);
    system("cls");
    system("COLOR 4f");
    README=fopen("readme.txt","w");

        fprintf(README,"\n\n\n");
        fprintf(README,"\t**************************************************************\n");
        fprintf(README,"\t*                                                            *\n");
        fprintf(README,"\t*                  TERM OF CONDITION                         *\n");
        fprintf(README,"\t*                                                            *\n");
        fprintf(README,"\t*                                                            *\n");
        fprintf(README,"\t*        HI GUEST ......WELCOME TO MY PROJECT                *\n");
        fprintf(README,"\t*                                                            *\n");
        fprintf(README,"\t*        THIS PROGRAM IS CREATED BY ""CODE HUNTERS""         *\n");
        fprintf(README,"\t*            DAFFODIL INTERNATIONAL UNIVERSITY               *\n");
        fprintf(README,"\t*                     CSE 38TH BATCH                         *\n");
        fprintf(README,"\t*    IN THIS PROGRAM YOU CAN CREATE AND ACCESS YOUR ACCOUNT  *\n");
        fprintf(README,"\t*             DEPOSIT MONEY,CASH OUT                         *\n");
        fprintf(README,"\t*      YOU CAN ALSO BACKUP YOUR ACCOUNT USING KEY            *\n");
        fprintf(README,"\t*      REMEMBER DONT  USE SIMPLE PASSWORD AND KEY            *\n");
        fprintf(README,"\t*                                                            *\n");
        fprintf(README,"\t*               COPY RIGHT PROTECTED                         *\n");
        fprintf(README,"\t*                                                            *\n");
        fprintf(README,"\t*           FOR CONTACT PLEASE CALL 01680237961              *\n");
        fprintf(README,"\t*                                                            *\n");
        fprintf(README,"\t*             PRESS ANY KEY TO CONTINUE                      *\n");
        fprintf(README,"\t**************************************************************\n\a");
fclose(README);
README=fopen("readme.txt","r");
while(!feof(README))
   {
      for(a=0;a<=1;a++){
        for(b=0;b<1000000;b++);
        c = fgetc(README);
        printf("%c",c);
      }
   }
   getch();
   system("cls");
   system("COLOR 4f");
   fp7=fopen("C:/serial","w");
   fclose(fp7);


}
}
void print(){
    int i,j,a=10000000;
    system("cls");
    system("COLOR 4f");
    printf("\n\n\n\n\n\n\t\tLoading.");
    for(i=0;i<25;i++){
        for(j=0;j<a;j++);
        printf("%c",177);
    }
    system("cls");
    system("COLOR 4f");
    serial();
  printf("\n\n\n\n\n");
  printf("\t**************************************************************\n");
  printf("\t*                                                            *\n");
  printf("\t*                                                            *\n");
  printf("\t*                                                            *\n");
  printf("\t*              WELLCOME TO Virtual Bank PROJRCT              *\n");
  printf("\t*                            By                              *\n");
  printf("\t*                       CODE HUNTERS                         *\n");
  printf("\t*                                                            *\n");
  printf("\t*                                                            *\n");
  printf("\t*               Press any key to continue...                 *\n");
  printf("\t*                                                            *\n");
  printf("\t*                                                            *\n");
  printf("\t**************************************************************\n");
  getch();
}
void admin(){
char pass[20];
int i=3;
  while(i){
  system("cls");
  system("COLOR 4f");
  printf("\n\n\n\n\n");
  printf("\t**************************************************************\n");
  printf("\t*     DATE: %s                     TIME: %s   *\n",__DATE__,__TIME__);
  printf("\t*                                                            *\n");
  printf("\t*                           ADMIN MODE                       *\n");
  printf("\t*                                                            *\n");
  printf("\t**************************************************************\n");
  printf("\n\n\t      ENTER PASSWORD: ");
  scanf("%s",pass);
  //gets(pass);
  //gets(pass);
if(strcmp(pass,"nayeem2654")==0){
    system("cls");
    system("COLOR 4f");
    printf("\n\n\n\n\n\t    CORRECT PASSWORD... PRESS ANY KEY..");
    i=0;
    getch();
    menu3();
}
else{
    i--;
    printf("\n\t      INCORRECT PASSWORD, PLZ TRY AGAIN");
    printf("\n\t             TRAIL REMAINING %d",i);
    getch();
}
}

}
void menu3(){
int c;

while(1){
    system("cls");
    system("COLOR 4f");
    printf("\n\n");
    printf("\t**************************************************************\n");
    printf("\t*                                                            *\n");
    printf("\t*     DATE: %s                     TIME: %s   *\n",__DATE__,__TIME__);
    printf("\t*                                                            *\n");
    printf("\t*                                                            *\n");
    printf("\t*                       MENU                                 *\n");
    printf("\t*                 __________________                         *\n");
    printf("\t*                                                            *\n");
    printf("\t*                                                            *\n");
    printf("\t*               1. VIEW LOG                                  *\n");
    printf("\t*               2. BAN ACCOUNT                               *\n");
    printf("\t*               3. CASH IN                                   *\n");
    printf("\t*               4. LOG OUT(main menu)                        *\n");
    printf("\t*               5. EXIT                                      *\n");
    printf("\t*                                                            *\n");
    printf("\t*               ENTER YOUR CHOICE  1/2/3/4(any key)          *\n");
    printf("\t*                                                            *\n");
    printf("\t*                                                            *\n");
    printf("\t**************************************************************\n");
    scanf("%d",&c);
    switch(c){
    		case 1:
    			log();
    			break;
            case 2:
    			delete();
                break;
            case 3:
                taka();
                break;
                case 4:
                main();
                break;
            default :
                exit(0);
                break;

    	}
}
}
void log(){
    char text;
    system("cls");
    system("COLOR 4f");
    printf("\n\n\n\n\n\t   PRESS ANY KEY TO VIEW LOG: ");
    getch();
    system("cls");
    system("COLOR 4f");
    printf("\n\n\t*     DATE: %s                     TIME: %s   *\n",__DATE__,__TIME__);
    printf("\n\t                           **LOG**\n\n");
    fp3=fopen("C:/log","a+");
    fclose(fp3);
    fp3=fopen("C:/log","r");
    while(!feof(fp3))
   {
      text = fgetc(fp3);
      printf("%c",text);
   }
   fclose(fp3);
   printf("\n\t   PRESS ANY KEY TO RETURN ");
   getch();
   system("cls");
   system("COLOR 4f");
}
void delete(){
  char username[200];
  system("cls");
  system("COLOR 4f");
  printf("\n\n\n\t  ENTER USERNAME: ");
  scanf("%s",username);
  fp=fopen(username,"r");
  if(fp==NULL)
  {
   printf("\n\t     USER DOES NOT EXIST");
   goto end2;
  }
  fclose(fp);
  if(remove(username)==0)
  {
   printf("\n\n\t    ACCOUNT IS BANNED SUCCESSFULLY!");
   goto end2;
  }
  else
  printf("\n\t Error!\n");
  end2: printf("\n\n\t  PRESS ANY KEY TO CONTINUE...");
  getch();
  system("cls");
  system("COLOR 4f");
}
void taka(){
    float newtk;
    float total=1000000000000;
    system("cls");
    system("COLOR 4f");
    fp5=fopen("taka.txt","w");
    fprintf(fp5,"%f",total);
    printf("\n\n\t    ENTER THE AMOUNT: ");
    scanf("%f",&newtk);
    fscanf(fp5,"%f",&total);
    total=total+newtk;
    fprintf(fp5,"%f",total);
    printf("\n\n\t    CURRENT AMOUNT %f ",total);
    fclose(fp5);
    getch();
    system("cls");
    system("COLOR 4f");
}

void user(){
	int i;
    while(1){
	system("cls");
    system("COLOR 4f");
    printf("\n\n\n");
    printf("\t**************************************************************\n");
    printf("\t*     DATE: %s                     TIME: %s   *\n",__DATE__,__TIME__);
    printf("\t*                                                            *\n");
    printf("\t*                                                            *\n");
    printf("\t*                       WELCOME                              *\n");
    printf("\t*                 __________________                         *\n");
    printf("\t*                                                            *\n");
    printf("\t*                                                            *\n");
    printf("\t*               1. LOGIN                                     *\n");
    printf("\t*               2. FORGET PASSWORD                           *\n");
    printf("\t*               3. SIGN UP                                   *\n");
    printf("\t*               4. BACK(main menu)                           *\n");
    printf("\t*               5. EXIT (any key)                            *\n");
    printf("\t*                                                            *\n");
    printf("\t*                                                            *\n");
    printf("\t*               ENTER YOUR CHOICE  1/2/3/4(any key)          *\n");
    printf("\t*                                                            *\n");
    printf("\t*                                                            *\n");
    printf("\t**************************************************************\n");
	scanf("%d",&i);

	switch(i){
      case 1:
        login1();
        break;
      case 2:
        forget();
        break;
      case 3:
        signup();
        break;
        case 4:
         main();
         break;
     default :
        exit(0);
        break;

    }
}
getch();
system("cls");
system("COLOR 4f");
}
void signup(){
	struct from a;
	system("cls");
    system("COLOR 4f");
	printf("\n\n\tENTER A UNIC USERNAME(except : space ,*,#,-): ");
	scanf("%s",&a.un);
	fp=fopen(a.un,"r");
	if(fp == NULL){
    fclose(fp);
    fp3=fopen("C:/log","a+");
    fp=fopen(a.un,"w");

	printf("\n\tENTER NAME : ");
	fprintf(fp,"\n**USER NAME: ");
    gets(a.name);
    fputs(a.un,fp);
    gets(a.name);
    fprintf(fp,"\nNAME: ");
    fputs(a.name,fp);
    printf("\n\tENTER ADRESS : ");
    gets(a.adress);
    fprintf(fp,"\nADDRESS: ");
    fputs(a.adress,fp);
    printf("\n\tENTER PHONE NUMBER : ");
    gets(a.phone);
    fprintf(fp,"\nPHONE: ");
    fputs(a.phone,fp);
    printf("\n\tENTER SEX(male/female) : ");
    gets(a.sex);
    fprintf(fp,"\nSEX: ");
    fputs(a.sex,fp);
    loop:
    printf("\n\tENTER A PASS (except : space ,*,#,-): ");
    gets(a.pass);
    if(strcmp(a.pass,a.un)!=0){
    fprintf(fp3,"\n**USER NAME: ");
	fputs(a.un,fp3);
	fprintf(fp3,"\nPassword: ");
	fputs(a.pass,fp3);
	fprintf(fp3,"\nStatus active");
    fp2=fopen(a.pass,"w");
    fprintf(fp2,"0.00");
    fclose(fp2);
    fprintf(fp,"\nPassword: ");
    fputs(a.pass,fp);
    loop1:
    printf("\nENTER A KEY WORD HELP TO RECOVER YOUR ACCOUNT(except : space ,*,#,-): ");
    gets(a.key);
    if((strcmp(a.key,a.pass)!=0) && (strcmp(a.key,a.un)!=0)){
    fp4=fopen(a.key,"w");
    fprintf(fp4,"\nUsername: ");
    fputs(a.un,fp4);
    fprintf(fp4,"\npassword: ");
    fputs(a.pass,fp4);
    fclose(fp4);
    fclose(fp3);
    fprintf(fp,"\nKey: ");
    fputs(a.key,fp);
    fclose(fp);
    printf("\n\n\t\aSIGN UP SUCESSFULL NOW YOU CAN LOGIN\n\n");
    getch();
    }
    else{
        printf("\n\n\tKEY AND PASSWORD CANT BE SAME\n");
        getch();
        system("cls");
        system("COLOR 4f");
        goto loop1;
    }
    }

    else {

        printf("\n\n\tPASSWORD AND USERNAME CAN'T BE SAME.TRY AGAIN..");
        getch();
        system("cls");
        system("COLOR 4f");
        goto loop;
    }
	}
	else{
        fp3=fopen("C:/log","a+");
        fprintf(fp3,"\n\nstatus failed: ");
	    fputs(a.un,fp3);
	    fclose(fp3);
        printf("\n\n\tUSERNAME ALREADY EXIST\n\tTRY AGAIN...");
        fclose(fp);
        getch();
        system("cls");
        system("COLOR 4f");
        getch();
	}


}
void login1(){
    struct from a;
    char un1[200],pas1[200];
    system("cls");
    system("COLOR 4f");
    printf("\n\n\n\tENTER USER NAME: ");
    scanf("%s",un1);
    fp=fopen(un1,"r");
    if(fp==NULL){
        fclose(fp);
        printf("\n\tWrong user name..");
        getch();
        system("cls");
        system("COLOR 4f");
    }
    else{
    fclose(fp);
    system("cls");
    system("COLOR 4f");
    printf("\n\t  ACCEPTED GO ON ");

    printf("\n\n\n\t  ENTER PASSWORD: ");
    scanf("%s",pas1);
    fp2=fopen(pas1,"r");
    if(fp2==NULL){
        fclose(fp2);
        system("cls");
        system("COLOR 4f");
        printf("\n\tWRONG PASSWORD");
        getch();
        system("cls");
        system("COLOR 4f");
    }
    else{
            system("cls");
            system("COLOR 4f");
        printf("\n\n\n\n\n\t PRESS ANY KEY TO VIEW MENU ");
        getch();
        menu2();
    }
    }
}
void menu2(){
    int c;

    while(1){
    system("cls");
    system("COLOR 4f");
        printf("\n\n\n");
        printf("\t**************************************************************\n");
        printf("\t*     DATE: %s                     TIME: %s   *\n",__DATE__,__TIME__);
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*                       MENU                                 *\n");
        printf("\t*                 __________________                         *\n");
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*               1. CHECK BALANCE                             *\n");
        printf("\t*               2. CASH IN                                   *\n");
        printf("\t*               3. CASH OUT                                  *\n");
        printf("\t*               4. VIEW PROFILE                              *\n");
        printf("\t*               5. LOG OUT(main menu)                        *\n");
        printf("\t*               6. EXIT (any key)                            *\n");
        printf("\t*                                                            *\n");
        printf("\t*               ENTER YOUR CHOICE  1/2/3/4/5(any key)        *\n");
        printf("\t*                                                            *\n");
        printf("\t*                                                            *\n");
        printf("\t**************************************************************\n");

    scanf("%d",&c);
    switch (c){
    case 1:
        cash();
        break;
    case 2:
        cashin();
        break;
    case 3:
        cashout();
        break;
    case 4:
        uinfo();
        break;
     case 5:
       main();
       break;
    default :
        exit(0);
        break;
    }
    }
}
void cash(){
    float bal;
    int i=3;
    char pass[200];
    while(i){
     system("cls");
     system("COLOR 4f");
    printf("\n\tENTER PASSWORD AGAIN: ");
    scanf("%s",pass);
    fp2=fopen(pass,"r");
    if(fp2==NULL){
        i--;
        fclose(fp2);
        printf("\n\tWRONG PASSWORD..TRAIL REMAINING %d ..TRY AGAIN..",i);

        getch();
    }
    else{
            system("cls");
            system("COLOR 4f");
        printf("\n\n\tCORRECT PASSWORD..\n\n\tPRESS ANY KEY..");
        i=0;
        getch();
        system("cls");
        system("COLOR 4f");
        fscanf(fp2,"%f",&bal);
        fclose(fp2);
        printf("\n\tYOUR BALANCE BDT : %0.2f ",bal);
        getch();
        system("cls");
      system("COLOR 4f");
    }
}
    system("cls");
    system("COLOR 4f");
}

void cashin(){
    float bal,bal2,bal3;
    int i=3;
    char pass[200];
    while(i){
     system("cls");
     system("COLOR 4f");
    printf("\n\tENTER PASSWORD AGAIN : ");
    scanf("%s",pass);
    fp2=fopen(pass,"r");
    if(fp2==NULL){
        i--;
        fclose(fp2);
        printf("\n\tWRONG PASSWORD..TRAIL REMAINING %d ..TRY AGAIN..",i);

        getch();
    }
    else{
        system("cls");
        system("COLOR 4f");
        printf("\n\tCORRECT PASSWORD..");
        i=0;
        fscanf(fp2,"%f",&bal);
        fclose(fp2);
        printf("\n\n\tENTER THE AMOUNT YOU WANNA DEPOSIT: ");
        scanf("%f",&bal2);
        bal3=bal+bal2;
        fp2=fopen(pass,"w");
        fprintf(fp2,"%0.2f",bal3);
        fclose(fp2);

        printf("\n\tYOUR NEW BALANCE BDT : %0.2f ",bal3);

        getch();
        system("cls");
        system("COLOR 4f");
    }
}

}


void cashout(){
    float bal,bal2,bal3;
    int i=3;
    char pass[200];
    while(i){
    system("cls");
    printf("\n\tENTER PASSWORD AGAIN ");
    scanf("%s",pass);
    fp2=fopen(pass,"r");
    if(fp2==NULL){
        i--;
        fclose(fp2);
        printf("\n\tWRONG PASSWORD..TRAIL REMAINING %d ..TRY AGAIN..",i);
        getch();
    }
    else{
        system("cls");
        system("COLOR 4f");
        printf("\n\tCORRECT PASSWORD..");
        i=0;
        fscanf(fp2,"%f",&bal);
        fclose(fp2);
        printf("\n\tYOUR CURENT BALANCE BDT : %0.2f ",bal);
        printf("\n\n\tENTER THE CASHOUT AMOUNT : ");

        scanf("%f",&bal2);
        if(bal>=bal2){
        bal3=bal-bal2;
        fp2=fopen(pass,"w");
        fprintf(fp2,"%0.2f",bal3);
        fclose(fp2);

        printf("\n\tYOUR NEW BALANCE BDT : %0.2f ",bal3);

        getch();
        system("cls");
        system("COLOR 4f");
        }

        else {
            system("cls");
            system("COLOR 4f");
            printf("\nWrong Amount...");
            getch();
            i=1;
        }
    }
    system("cls");
    system("COLOR 4f");
}

}
void forget(){
    int i=3;
    char k[200],text;

while(i){
    system("cls");
    system("COLOR 4f");
    system("cls");
    printf("\n\n\tENTER THE SECRET KEY: ");
    scanf("%s",k);
    fp6=fopen(k,"r");
    if(fp6!=NULL){
    system("cls");
    system("COLOR 4f");
    while(!feof(fp6))
   {
      text = fgetc(fp6);
      printf("%c",text);
   }

   fclose(fp6);
   getch();
   i=0;
    system("cls");
    system("COLOR 4f");
    }
    else{
        i--;
        printf("\n\n\t WRONG SECRET KEY..TARIL REMAINING %d ..TRY AGAIN",i);
        getch();
        system("cls");
        system("COLOR 4f");

    }
}

}
 void uinfo(){
     char n[200],text;
     int i=3;

     while(i){
    system("cls");
    system("COLOR 4f");
 printf("\n\tENTER YOUR USER NAME: ");
 scanf("%s",n);
 fp=fopen(n,"r");
 if(fp!=NULL){
        system("cls");
        system("COLOR 4f");
  while(!feof(fp))
   {
      text = fgetc(fp);
      printf("%c",text);
   }
   fclose(fp);
   getch();
   i=0;
 }

 else{
    i--;
    printf("\n\tUSER NOT FOUND TRAIL REMAIN %d..TRY AGAIN",i);
    getch();

    system("cls");
    system("COLOR 4f");
 }
 }
 }
