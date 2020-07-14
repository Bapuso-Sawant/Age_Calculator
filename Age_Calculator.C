// Developer : BAPUSO SAWANT
//Project : AGE CALCULATOR

#include<stdio.h>
#include<conio.h>

void no_of_days();
void loading();
void choices();
void leapyr();
void border();

void main()
{
	clrscr();
	loading();
	delay(250);
	clrscr();
	border();
	choices();
	getch();
}

void no_of_days()
{
	int d1,m1,y1,d2,m2,y2;
	int y,td=0,c=0,total_days,no=0;
	int i,newdate,nd,result,total_month;
	clrscr();
	border();

	// for 1st block
	gotoxy(10,4);
	textcolor(12);
	cprintf("Enter first date:\n");
	gotoxy(30,5);
	textcolor(10);
	cprintf("%c",218);
	for(i=1;i<=20;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",191);
	gotoxy(51,6);
	cprintf("%c",179);
	gotoxy(30,7);
	cprintf("%c",192);
	for(i=1;i<=20;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",217);
	gotoxy(30,6);
	cprintf("%c",179);

	//for 2nd block
	gotoxy(10,10);
	textcolor(12);
	cprintf("Enter second date:\n");
	gotoxy(30,11);
	textcolor(10);
	cprintf("%c",218);
	for(i=1;i<=20;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",191);
	gotoxy(51,12);
	cprintf("%c",179);
	gotoxy(30,13);
	cprintf("%c",192);
	for(i=1;i<=20;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",217);
	gotoxy(30,12);
	cprintf("%c",179);
	gotoxy(32,6);
	scanf("%d%d%d",&d1,&m1,&y1);
	gotoxy(32,12);
	scanf("%d%d%d",&d2,&m2,&y2);

	//for result
	gotoxy(3,14);
	textcolor(9);
	for(i=3;i<=77;i++)
	{
		cprintf("-");
	}
	if(y1<y2 && d1>0 && d2>0 && m1>0 && m2>0 && y1>0 && y2>0)
	{
		textcolor(13);
		gotoxy(4,16);
		cprintf("Details:\n");
	}

	// first month of first date is less than second
	if(y1<y2 && d1>0 && d2>0 && m1>0 && m2>0 && y1>0 && y2>0)
	{
		if(m1<m2)
		{
			if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
			{
				nd=31-d1;
			}
			else if(m1==4||m1==6||m1==9||m1==11)
			{
				nd=30-d1;
			}
			else if(m1==2)
			{
				if(y1%4==0)
				{
					nd=29-d1;
				}
				else
				{
					nd=28-d1;
				}
			}
			for(i=m1+1; i<=m2; i++)
			{
				if(i==m2)
				{
					newdate=nd+d2;
				}
				else
				{
					if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					{
						nd+=31;
					}
					else if(i==4||i==6||i==9||i==11)
					{
						nd+=30;
					}
					else if(i==2)
					{
						if(y1%4==0)
						{
							nd+=29;
						}
						else
						{
							nd+=28;
						}
					}
				}
			}
			for(i=y1+1; i<=y2; i++) //problem in considering y1 or y2
			{
				if(i%4==0)
				{
					if(i%100==0)
					{
						if(i%400==0)
						{
						    c++;
						}
						else
						{
							td+=365;
						}
					}
					else
					{
						c++;
					}
				}
				else
				{
					td+=365;
				}
			}
			total_days=td+(c*366);
			result=total_days+newdate;
			gotoxy(4,18);
			textcolor(6);
			cprintf("No of days= %d",result);
		}

	       // for second month of second date less than first
	       else if(m1>m2)
	       {
			if(m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)
			{
				nd=31-d2;
			}
			else if(m2==4||m2==6||m2==9||m2==11)
			{
				nd=30-d2;
			}
			else if(m2==2)
			{
				if(y2%4==0)
				{
					nd=29-d2;
				}
				else
				{
					nd=28-d2;
				}
			}
			for(i=m2+1; i<=m1; i++)
			{
				if(i==m1)
				{
					newdate=nd+d1;
				}
				else
				{
					if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					{
						nd+=31;
					}
					else if(i==4||i==6||i==9||i==11)
					{
						nd+=30;
					}
					else if(i==2)
					{
						if(y2%4==0)
						{
							nd+=29;
						}
						else
						{
							nd+=28;
						}

					}
				}
			}
			for(i=y1+1; i<=y2; i++)//problem in considering y1 or y2
			{
				if(i%4==0)
				{
					if(i%100==0)
					{
						if(i%400==0)
						{
						    c++;
						}
						else
						{
							td+=365;
						}
					}
					else
					{
						c++;
					}
				}
				else
				{
					td+=365;
				}
			}
			total_days=td+(c*366);
			result=total_days-newdate;
			gotoxy(4,18);
			textcolor(6);
			cprintf("No of days= %d",result);
	       }

		// for same dates & same month
        else if(d1==d2 && m1==m2)
		{
			for(i=y1+1; i<=y2; i++) // solved problem
			{
				if(i%4==0)
				{
					if(i%100)
					{
						if(i%400)
						{
							c++;
						}
						else
						{
							no+=365;
						}
					}
					else
					{
						c++;
					}
				}
				else
				{
					no+=365;
				}
			}
			result=no+c*366;
			gotoxy(4,18);
			textcolor(6);
			cprintf("No of days= %d ",result);
		}

		// for both same months
		else if(m1==m2)
		{
			if(d1>d2)
			{
				nd=d1-d2;
			}
			else
			{
				nd=d2-d1;
			}

			for(i=y1+1; i<=y2; i++) //problem in considering y1 or y2
			{
				if(i%4==0)
				{
					if(i%100==0)
					{
						if(i%400==0)
						{
						    c++;
						}
						else
						{
							td+=365;
						}
					}
					else
					{
						c++;
					}
				}
				else
				{
					td+=365;
				}
			}
			if(d1<d2)                 //imp conditions
			{
				total_days=td+(c*366);
				result=total_days+nd;
			}
			else
			{
				total_days=td+(c*366);
				result=total_days-nd;

			}
			gotoxy(4,18);
			textcolor(6);
			cprintf("No of days= %d",result);
		}
		else if(m1==m2 && y1==y2)
		{
				if(d1>d2)
				{
				       result=d1-d2;
				}
				if(d2>d1)
				{
				       result=d2-d1;
				}
				gotoxy(4,18);
				textcolor(6);
				cprintf("No of days= %d",result);
		}

		//for total months & yr
		y=y2-y1;
		total_month=y*12;
		if(m1!=1&&m2!=1)
		{
			total_month-=m1;
			total_month+=m2;
			gotoxy(4,19);
			textcolor(6);
			cprintf("Total month= %d",total_month);
			gotoxy(4,20);
			cprintf("Total year= %d",y);
		}
		else if(m1==1&&m2!=1)
		{
			total_month+=m2-m1;
			gotoxy(4,19);
			textcolor(6);
			cprintf("Total month= %d",total_month);
			gotoxy(4,20);
			cprintf("Total year= %d",y);
		}
		else if(m1!=1&&m2==1)
		{
			total_month-=m1-m2;// may be problemable
			gotoxy(4,19);
			textcolor(6);
			cprintf("Total month= %d",total_month);
			gotoxy(4,20);
			cprintf("Total year= %d",y);
		}
		else
		{
			gotoxy(4,19);
			textcolor(6);
			cprintf("Total month= %d",total_month);
			gotoxy(4,20);
			cprintf("Total year= %d",y);
		}

		// for leap yr
		textcolor(6);
		if(y1%4==0)
		{
			if(y1%100==0)
			{
				if(y1%400==0)
				{
					gotoxy(4,21);
					cprintf("You have born in leap year");
				}
				else
				{
					gotoxy(4,21);
					cprintf("You have born in non leap year");
				}
			}
			else
			{
				gotoxy(4,21);
				cprintf("You have born in leap year");
			}
		}
		else
		{
			gotoxy(4,21);
			cprintf("You have born in non leap year");
		}
	}
	else
	{
		textcolor(14);
		gotoxy(6,16);
		cprintf("Caution:\n");
		textcolor(4);
		gotoxy(6,18);
		cprintf("1.First date must be less than second...");
		gotoxy(6,19);
		cprintf("2.Date must be positive...");
	}
}

void loading()
{
	int i,j;
	clrscr();
	border();
	gotoxy(30,12);
	textcolor(10);
	cprintf("Loading...");
	textcolor(14);
	for(i=30,j=10;i<40;i++,j=j+10)
	{
		gotoxy(i,13);
		delay(500);
		cprintf("%c",219);
		gotoxy(42,13);
		printf("%d%",j);
	}
	gotoxy(33,14);
	printf("Completed !!");
}

void border()
{
	int i;
	clrscr();
	gotoxy(1,1);
	textcolor(11);
	cprintf("%c",218);
	for(i=1;i<=77;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",191);
	for(i=2;i<=24;i++)
	{
		gotoxy(1,i);
		cprintf("%c",179);
	}
	gotoxy(1,25);
	cprintf("%c",192);
	for(i=1;i<=77;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",217);
	for(i=2;i<=24;i++)
	{
		gotoxy(79,i);
		cprintf("%c",179);
	}
}

void leapyr()
{
	int yr,i;
	clrscr();
	border();
	gotoxy(10,4);
	textcolor(12);
	cprintf("Enter the date:\n");
	gotoxy(30,5);
	textcolor(10);
	cprintf("%c",218);
	for(i=1;i<=20;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",191);
	gotoxy(51,6);
	cprintf("%c",179);
	gotoxy(30,7);
	cprintf("%c",192);
	for(i=1;i<=20;i++)
	{
		cprintf("%c",196);
	}
	cprintf("%c",217);
	gotoxy(30,6);
	cprintf("%c",179);
	scanf("%d",&yr);
	gotoxy(3,8);
	textcolor(9);
	for(i=3;i<=77;i++)
	{
		cprintf("-");
	}
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			{
				gotoxy(10,10);
				printf("Enterd year is Leap");
			}
			else
			{
				gotoxy(10,10);
				printf("Enterd year is Not leap");
			}
		}
		else
		{
			gotoxy(10,10);
			printf("Enterd year is Leap");
		}
	}
	else
	{
		gotoxy(10,10);
		printf("Enterd year is Not leap");
	}
}

void choices()
{
	int n;
	gotoxy(22,6);
	textcolor(12);
	cprintf("!--------ENTER YOUR CHOICE:--------!\n\n");
	gotoxy(18,9);
	textcolor(14);
	cprintf("1.Check how old you are:\n");
	gotoxy(18,11);
	cprintf("2.Check the yr which is leap or not:\n");
	gotoxy(18,13);
	cprintf("3.Exit:\n\n");

	scanf("%d",&n);
	switch(n)
	{
		case 1:   	no_of_days();
				break;
		case 2 :	leapyr();
				break;
		case 3:		exit(0);
				break;
		default:	gotoxy(5,17);
				textcolor(13);
				cprintf("Invalid choice");
	}
}
