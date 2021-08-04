//to detecting Punctuations/Symbols, Operators, digit, Conditional operator, Keywords, Boolean
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int status=0,i=0,count=0;
    char ch;
    FILE *f;
    f = fopen("akash.txt","r");
    char c,string[350];
    printf("Symbols : ");
    while((c=fgetc(f))!= EOF)
    {
        if(c==','||c=='"'||c==';'||c=='?'||c=='!')
        {
            printf("%c ",c);
        }
    }
    fclose(f);
    f = fopen("akash.txt","r");

    printf("\nOperators : ");
    while((c=fgetc(f))!= EOF)
    {
        if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='=')
        {
            printf("%c ",c);
        }
    }
    fclose(f);
    f = fopen("akash.txt","r");

    printf("\nDigit : ");
    while((c=fgetc(f))!= EOF)
    {
        if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9')
        {
            printf("%c ",c);
        }
    }
    fclose(f);
    f=fopen("akash.txt","r");

    printf("\nKeywords are \n");
    printf("------------------\n");
    while(fgets(str, sizeof(str), f)!=NULL)
    {
        i=0;
        while((ch=str[i])!='\0')
        {
// for auto
            if((ch=='a')&&(status==0))
            {
                status=1;
            }
            else if((ch=='u')&&(status==1))
            {
                status=2;
            }
            else if((ch=='t')&&(status==2))
            {
                status=3;
            }
            else if((ch=='o')&&(status==3))
            {
                printf("auto\n");
                status=0;
                count++;
            }
// for break
            else if((ch=='b')&&(status==0))
            {
                status=4;
            }
            else if((ch=='r')&&(status==4))
            {
                status=5;
            }
            else if((ch=='e')&&(status==5))
            {
                status=6;
            }
            else if((ch=='a')&&(status==6))
            {
                status=7;
            }
            else if((ch=='k')&&(status==7))
            {
                printf("break\n");
                status=0;
                count++;
            }
// for case
            else if((ch=='c')&&(status==0))
            {
                status=8;
            }
            else if((ch=='a')&&(status==8))
            {
                status=9;
            }
             else if((ch=='s')&&(status==9))
            {
                status=10;
            }
            else if((ch=='e')&&(status==10))
            {
                printf("case\n");
                status=0;
                count++;
            }
// for case
            else if((ch=='h')&&(status==8))
            {
                status=11;
            }
             else if((ch=='a')&&(status==11))
            {
                status=12;
            }
            else if((ch=='r')&&(status==12))
            {
                printf("char\n");
                status=0;
                count++;
            }
// for const
            else if((ch=='o')&&(status==8))
            {
                status=13;
            }
             else if((ch=='n')&&(status==13))
            {
                status=14;
            }
            else if((ch=='s')&&(status==14))
            {
                status=15;
            }
            else if((ch=='t')&&(status==15))
            {
                printf("const\n");
                status=0;
                count++;
            }
// for continue
            else if((ch=='t')&&(status==14))
            {
                status=16;
            }
             else if((ch=='i')&&(status==16))
            {
                status=17;
            }
            else if((ch=='n')&&(status==17))
            {
                status=18;
            }
            else if((ch=='u')&&(status==18))
            {
                status=19;
            }
            else if((ch=='e')&&(status==19))
            {
                printf("continue\n");
                status=0;
                count++;
            }
// for default
            else if((ch=='d')&&(status==0))
            {
                status=20;
            }
             else if((ch=='e')&&(status==20))
            {
                status=21;
            }
            else if((ch=='f')&&(status==21))
            {
                status=22;
            }
            else if((ch=='a')&&(status==22))
            {
                status=23;
            }
            else if((ch=='u')&&(status==23))
            {
                status=24;
            }
            else if((ch=='l')&&(status==24))
            {
                status=25;
            }
            else if((ch=='t')&&(status==25))
            {
                printf("default\n");
                status=0;
                count++;
            }
// for double
            else if((ch=='o')&&(status==20))
            {
                status=26;
            }
            else if((ch=='u')&&(status==26))
            {
                status=27;
            }
            else if((ch=='b')&&(status==27))
            {
                status=28;
            }
            else if((ch=='l')&&(status==28))
            {
                status=29;
            }
            else if((ch=='e')&&(status==29))
            {
                printf("double\n");
                status=0;
                count++;
            }
// for do
            else if(((ch==' ')||(ch=='\n'))&&(status==26))
            {
                printf("do\n");
                status=0;
                count++;
            }

// for else
            else if((ch=='e')&&(status==0))
            {
                status=30;
            }
            else if((ch=='l')&&(status==30))
            {
                status=31;
            }
            else if((ch=='s')&&(status==31))
            {
                status=32;
            }
            else if((ch=='e')&&(status==32))
            {
                printf("else\n");
                status=0;
                count++;
            }
// for enum
            else if((ch=='n')&&(status==30))
            {
                status=33;
            }
            else if((ch=='u')&&(status==33))
            {
                status=34;
            }
            else if((ch=='m')&&(status==34))
            {
                printf("enum\n");
                status=0;
                count++;
            }
// for extern
            else if((ch=='x')&&(status==30))
            {
                status=35;
            }
            else if((ch=='t')&&(status==35))
            {
                status=36;
            }
            else if((ch=='e')&&(status==36))
            {
                status=37;
            }
            else if((ch=='r')&&(status==37))
            {
                status=38;
            }
            else if((ch=='n')&&(status==38))
            {
                printf("extern\n");
                status=0;
                count++;
            }
// for float
            else if((ch=='f')&&(status==0))
            {
                status=39;
            }
            else if((ch=='l')&&(status==39))
            {
                status=40;
            }
            else if((ch=='o')&&(status==40))
            {
                status=41;
            }
            else if((ch=='a')&&(status==41))
            {
                status=42;
            }
            else if((ch=='t')&&(status==42))
            {
                printf("float\n");
                status=0;
                count++;
            }
// for keyword for
            else if((ch=='o')&&(status==39))
            {
                status=43;
            }
            else if((ch=='r')&&(status==43))
            {
                printf("for\n");
                status=0;
                count++;
            }
// for goto
            else if((ch=='g')&&(status==0))
            {
                status=44;
            }
            else if((ch=='o')&&(status==44))
            {
                status=45;
            }
            else if((ch=='t')&&(status==45))
            {
                status=46;
            }
            else if((ch=='o')&&(status==46))
            {
                printf("goto\n");
                status=0;
                count++;
            }
// for if
            else if((ch=='i')&&(status==0))
            {
                status=47;
            }
            else if((ch=='f')&&(status==47))
            {
                printf("if\n");
                status=0;
                count++;
            }
//for int
            else if((ch=='n')&&(status==47))
            {
                status=48;
            }
            else if((ch=='t')&&(status==48))
            {
                printf("int\n");
                status=0;
                count++;
            }
// for long
            else if((ch=='l')&&(status==0))
            {
                status=49;
            }
            else if((ch=='o')&&(status==49))
            {
                status=50;
            }
            else if((ch=='n')&&(status==50))
            {
                status=51;
            }
            else if((ch=='g')&&(status==51))
            {
                printf("long\n");
                status=0;
                count++;
            }
// for register
            else if((ch=='r')&&(status==0))
            {
                status=52;
            }
            else if((ch=='e')&&(status==52))
            {
                status=53;
            }
            else if((ch=='g')&&(status==53))
            {
                status=54;
            }
            else if((ch=='i')&&(status==54))
            {
                status=55;
            }
            else if((ch=='s')&&(status==55))
            {
                status=56;
            }
            else if((ch=='t')&&(status==56))
            {
                status=57;
            }
            else if((ch=='e')&&(status==57))
            {
                status=58;
            }
            else if((ch=='r')&&(status==58))
            {
                printf("register\n");
                status=0;
                count++;
            }
//for return
            else if((ch=='t')&&(status==53))
            {
                status=59;
            }
            else if((ch=='u')&&(status==59))
            {
                status=60;
            }
            else if((ch=='r')&&(status==60))
            {
                status=61;
            }
            else if((ch=='n')&&(status==61))
            {
                printf("return\n");
                status=0;
                count++;
            }
// for short
            else if((ch=='s')&&(status==0))
            {
                status=62;
            }
            else if((ch=='h')&&(status==62))
            {
                status=63;
            }
            else if((ch=='o')&&(status==63))
            {
                status=64;
            }
            else if((ch=='r')&&(status==64))
            {
                status=65;
            }
            else if((ch=='t')&&(status==65))
            {
                printf("short\n");
                status=0;
                count++;
            }
// for sizeof
            else if((ch=='i')&&(status==62))
            {
                status=66;
            }
            else if((ch=='z')&&(status==66))
            {
                status=67;
            }
            else if((ch=='e')&&(status==67))
            {
                status=68;
            }
            else if((ch=='o')&&(status==68))
            {
                status=69;
            }
            else if((ch=='f')&&(status==69))
            {
                printf("sizeof\n");
                status=0;
                count++;
            }
// for signed
            else if((ch=='g')&&(status==66))
            {
                status=70;
            }
            else if((ch=='n')&&(status==70))
            {
                status=71;
            }
            else if((ch=='e')&&(status==71))
            {
                status=72;
            }
            else if((ch=='d')&&(status==72))
            {
                printf("signed\n");
                status=0;
                count++;
            }
//for static
            else if((ch=='t')&&(status==62))
            {
                status=72;
            }
            else if((ch=='a')&&(status==72))
            {
                status=73;
            }
            else if((ch=='t')&&(status==73))
            {
                status=74;
            }
            else if((ch=='i')&&(status==74))
            {
                status=75;
            }
            else if((ch=='c')&&(status==75))
            {
                printf("static\n");
                status=0;
                count++;
            }
// for struct
            else if((ch=='r')&&(status==72))
            {
                status=76;
            }
            else if((ch=='u')&&(status==76))
            {
                status=77;
            }
            else if((ch=='c')&&(status==77))
            {
                status=78;
            }
            else if((ch=='t')&&(status==78))
            {
                printf("struct\n");
                status=0;
                count++;
            }
// for switch
            else if((ch=='w')&&(status==62))
            {
                status=79;
            }
            else if((ch=='i')&&(status==79))
            {
                status=80;
            }
            else if((ch=='t')&&(status==80))
            {
                status=81;
            }
            else if((ch=='c')&&(status==81))
            {
                status=82;
            }
            else if((ch=='h')&&(status==82))
            {
                printf("switch\n");
                status=0;
                count++;
            }
// for typedef
            else if((ch=='t')&&(status==0))
            {
                status=83;
            }
            else if((ch=='y')&&(status==83))
            {
                status=84;
            }
            else if((ch=='p')&&(status==84))
            {
                status=85;
            }
            else if((ch=='e')&&(status==85))
            {
                status=86;
            }
            else if((ch=='d')&&(status==86))
            {
                status=87;
            }
            else if((ch=='e')&&(status==87))
            {
                status=88;
            }
            else if((ch=='f')&&(status==88))
            {
                printf("typedef\n");
                status=0;
                count++;
            }
// for union
            else if((ch=='u')&&(status==0))
            {
                status=89;
            }
            else if((ch=='n')&&(status==89))
            {
                status=90;
            }
            else if((ch=='i')&&(status==90))
            {
                status=91;
            }
            else if((ch=='o')&&(status==91))
            {
                status=92;
            }
            else if((ch=='n')&&(status==92))
            {
                printf("union\n");
                status=0;
                count++;
            }
// for unsigned
            else if((ch=='s')&&(status==90))
            {
                status=93;
            }
            else if((ch=='i')&&(status==93))
            {
                status=94;
            }
            else if((ch=='g')&&(status==94))
            {
                status=95;
            }
            else if((ch=='n')&&(status==95))
            {
                status=96;
            }
            else if((ch=='e')&&(status==96))
            {
                status=97;
            }
            else if((ch=='d')&&(status==97))
            {
                printf("unsigned\n");
                status=0;
                count++;
            }
// for void
            else if((ch=='v')&&(status==0))
            {
                status=98;
            }
            else if((ch=='o')&&(status==98))
            {
                status=99;
            }
            else if((ch=='i')&&(status==99))
            {
                status=100;
            }
            else if((ch=='d')&&(status==100))
            {
                printf("void\n");
                status=0;
                count++;
            }
// for void
            else if((ch=='l')&&(status==99))
            {
                status=101;
            }
            else if((ch=='a')&&(status==101))
            {
                status=102;
            }
            else if((ch=='t')&&(status==102))
            {
                status=103;
            }
            else if((ch=='i')&&(status==103))
            {
                status=104;
            }
            else if((ch=='l')&&(status==104))
            {
                status=105;
            }
            else if((ch=='e')&&(status==105))
            {
                printf("volatile\n");
                status=0;
                count++;
            }
// for while
            else if((ch=='w')&&(status==0))
            {
                status=106;
            }
            else if((ch=='h')&&(status==106))
            {
                status=107;
            }
            else if((ch=='i')&&(status==107))
            {
                status=108;
            }
            else if((ch=='l')&&(status==108))
            {
                status=109;
            }
            else if((ch=='e')&&(status==109))
            {
                printf("while\n");
                status=0;
                count++;
            }
            else
            {
                status=0;
            }
            i++;
        }
    }
    fclose(f);

    //////////////////////////////////////////////////////////////////////////////////////////////////////
f=fopen("akash.txt","r");

    printf("\nBooleans are \n");
    printf("--------------- \n");

    while(fgets(str, sizeof(str), f)!=NULL)
    {
        i=0;
        while((ch=str[i])!='\0')
        {
// for True
            if((ch=='T')&&(status==0))
            {
                status=1;
            }
            else if((ch=='r')&&(status==1))
            {
                status=2;
            }
            else if((ch=='u')&&(status==2))
            {
                status=3;
            }
            else if((ch=='e')&&(status==3))
            {
                printf("True\n");
                status=0;
                count++;
            }
// for False
            else if((ch=='F')&&(status==0))
            {
                status=4;
            }
            else if((ch=='a')&&(status==4))
            {
                status=5;
            }
            else if((ch=='l')&&(status==5))
            {
                status=6;
            }
            else if((ch=='s')&&(status==6))
            {
                status=7;
            }
            else if((ch=='e')&&(status==7))
            {
                printf("False\n");
                status=0;
                count++;
            }else
            {
                status=0;
            }
            i++;
        }
    }
    fclose(f);

  return 0;




}
