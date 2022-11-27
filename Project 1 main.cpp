#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int c=0;


class food
{
	int choice,pchoice,pchoice1, quantity,total;
    ifstream fin;
    ofstream fout;

	public:
		food()
		{
			choice=0;
			total=0;

			ifstream in;
			in.open("c.txt");
			in>>c;
			in>>total;
			in.close();
		}
		void pizzas()
		{

            fout.open("food.txt",ios::app);
			B:

			cout<<"\n1) Chicken Fazita\n";
		    cout<<"2) Chicken bar BQ\n";
		    cout<<"3) Peri Peri\n";
		    cout<<"4) Creamy Max\n";
	     	cout<<"\nPlease Enter which Flavour would you like to have?:";
	     	cin>>pchoice;
		    if(pchoice>=1 && pchoice<5)
		    {
		    	A:
			   cout<<"\n1) Small Rs  :250\n"<<"2) Regular Rs  :500\n"<<"3) Large Rs  :900\n";
			   cout<<"\nChoose Size Please:";
			   cin>>pchoice1;
		    	if(pchoice1>=1 && pchoice1<=3)
		        {
					cout<<"\nPlease Enter Quantity: ";
		        	cin>>quantity;

			        switch(pchoice1)
			        {
			            case 1: choice = 250*quantity;
			            break;

			            case 2: choice = 500*quantity;
			            break;

			            case 3: choice = 900*quantity;
			            break;
	                }
	                total=total+choice;
			        system("CLS");
			        switch (pchoice1)
			        {
			            case 1:
			            cout<<"\t\t\t--------Your Order---------\n";
			            c++;
			            cout<<"Order number="<<c<<endl;
			            cout<<"\n "<<quantity<<" Chicken Fazita";
			            cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			            cout<<"\n\nThank you For Ordering From Hungry Helpers\n";
			            fout<<"\nOrder no. "<<c<<"\n";
			            fout<<quantity<<" Chicken Fazita\n";
			            fout<<"Total Bill= "<<choice<<"\n";
			            fout<<"\n--------------------------------------\n";
			            break;
			            case 2:
			            cout<<"\t\t--------Your Order---------\n";
			            c++;
			            cout<<"Order number="<<c<<endl;
			            cout<<" "<<quantity<<" Chicken Bar BQ ";
			            cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			            cout<<"\nThank you For Ordering From Hungry Helpers\n";
			            fout<<"\nOrder no. "<<c<<"\n";
			            fout<<quantity<<" Chicken Bar BQ\n";
			            fout<<"Total Bill= "<<choice<<"\n";
			            fout<<"\n--------------------------------------\n";
			            break;
			            case 3:
			            cout<<"\t\t--------Your Order---------\n";
			            c++;
			            cout<<"Order number="<<c<<endl;
			            cout<<" "<<quantity<<" Peri Peri";
			            cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			            cout<<"\nThank you For Ordering From Hungry Helpers\n";
			            fout<<"\nOrder no. "<<c<<"\n";
			            fout<<quantity<<" Peri Peri";
			            fout<<"Total Bill= "<<choice<<"\n";
			            fout<<"\n--------------------------------------\n";
			            break;
			            case 4:
			            cout<<"\t\t--------Your Order---------\n";
			            c++;
			            cout<<"Order number="<<c<<endl;
			            cout<<" "<<quantity<<" Creamy Max";
			            cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			            cout<<"\nThank you For Ordering From Hungry Helpers\n";
			            fout<<"\nOrder no."<<c<<"\n";
			            fout<<quantity<<" Creamy Max\n";
			            fout<<"Total Bill= "<<choice<<"\n";
			            fout<<"\n--------------------------------------\n";
			            break;
                    }

			    }
				else
				{
					cout<<"INVALID CHOICE RE-ENTER THE CHOICE\n";
					goto A;
				}
		    }
		    else
		    {
		    	cout<<"INVALID CHOICE RE-ENTER THE CHOICE\n";
		    	goto B;
			}
			fout.close();

		}

		void burgers()
		{
			fout.open("food.txt",ios::app);

			C:

		 	cout<<"\n1 Zinger Burger    : Rs.180"<<"\n";
		    cout<<"2 Chicken Burger   : Rs.150"<<"\n";
		    cout<<"3 veg Burger       : Rs.160"<<"\n";
		    cout<<"\nPlease Enter which Burger you would like to have?: ";
		    cin>>pchoice1;
		    if(pchoice1>=1 && pchoice1<=3)
		    {

			    cout<<"\nPlease Enter Quantity: ";
			    cin>>quantity;
			    switch(pchoice1)
			    {
			        case 1: choice = 180*quantity;
			        break;

			        case 2: choice = 150*quantity;
			        break;

       			    case 3: choice = 160*quantity;
	     		    break;

			    }
			    total=total+choice;
			    system("CLS");
			    switch (pchoice1)
			    {
			        case 1:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" Zinger Burger";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers \n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Zinger Burger\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
        		    case 2:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" chicken Burger";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Chiken Burger\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
			        case 3:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" veg Burger";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Veg burger\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			       break;
			    }
		    }
		    else
		    {
		    	cout<<"INVALID CHOICE RE-ENTER THE CHOICE\n";
		    	goto C;
			}
			fout.close();
	    }

	    void sandwich()
		{
			fout.open("food.txt",ios::app);

			D:

			cout<<"\n1 Club Sandwich            : Rs.240"<<"\n";
		    cout<<"2 Chicken Crispy Sandwich  : Rs.160"<<"\n";
		    cout<<"3 Extream Veg Sandwich     : Rs.100"<<"\n";
		    cout<<"\nPlease Enter which Sandwich you would like to have?:";
		   cin>>pchoice1;
		   if(pchoice1>=1 && pchoice1<=3)
		   {

		     	cout<<"\nPlease Enter Quantity: ";
			    cin>>quantity;
			    switch(pchoice1)
			    {
			        case 1: choice = 240*quantity;
			        break;

			        case 2: choice = 160*quantity;
			        break;

			        case 3: choice = 100*quantity;
			        break;

			    }
			    total=total+choice;
			    system("CLS");
			    switch (pchoice1)
			    {
			        case 1:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
 			        cout<<" "<<quantity<<" Club Sandwich";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Club Sandwich\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
        			case 2:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
 			        cout<<" "<<quantity<<" Chicken Crispy Sandwich";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
        			cout<<"\nThank you For Ordering From Hungry Helpers\n";
        			fout<<"\nOrder no."<<c<<"\n";
			        fout<<quantity<<" Chicken Crispy Sandwich\n";
			        fout<<"Total Bill= "<<choice<<"\n";
					fout<<"\n--------------------------------------\n";
			        break;
			        case 3:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" Extream Veg Sandwich";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Extream Veg Sandwich\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
                }
            }
            else
            {
            	cout<<"\n INVALID CHOICE RE-ENTER THE CHOICE\n";
            	goto D;
			}
			fout.close();
		}

		void rolls()
		{
			fout.open("food.txt",ios::app);

			E:

			cout<<"\n1 Chicken Chatni Roll    : Rs.150"<<"\n";
		    cout<<"2 Chicken Mayo Roll      : Rs.100"<<"\n";
     		cout<<"3 Veg Roll With Fries    : Rs.120"<<"\n";

		    cout<<"\nPlease Enter which you would like to have?: ";
		    cin>>pchoice1;
		    if(pchoice1>=1 && pchoice1<=3)
		    {
			    cout<<"\nHow Much Rolls Do you want: ";
			    cin>>quantity;
			    switch(pchoice1)
			    {
			        case 1: choice = 150*quantity;
			        break;

			        case 2: choice = 100*quantity;
			        break;

   			        case 3: choice = 120*quantity;
			        break;

			    }
			    total=total+choice;
			    system("CLS");
			    switch (pchoice1)
			    {
			        case 1:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" Chicken Chatni Roll";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Chicken Chatni Roll\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
			        case 2:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" Chicken Mayo Roll";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Chicken Mayo Roll\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
			        case 3:
			         cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" Veg Roll With Fries";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Veg Roll With Fries\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
                }
            }
            else
            {
            	cout<<"\nINVALID CHOICE RE-ENTER THE CHOICE\n";
            	goto E;
			}
			fout.close();
		}
		void biryani()
		{
			fout.open("food.txt",ios::app);

			F:

			cout<<"\n1 Chicken Biryani   : Rs.160"<<"\n";
		    cout<<"2 Prawn Biryani     : Rs.220"<<"\n";
		    cout<<"3 veg Biryani       : Rs.140"<<"\n";
		    cout<<"\nPlease Enter which Biryani you would like to have?:";
		    cin>>pchoice1;
		    if(pchoice1>=1 && pchoice1<=3)
		    {
      			cout<<"\nPlease Enter Quantity: ";
			    cin>>quantity;
    			switch(pchoice1)
	    		{
        			case 1: choice = 160*quantity;
		        	break;

        			case 2: choice = 220*quantity;
	        		break;

         			case 3: choice = 140*quantity;
 			        break;

     			}
     			total=total+choice;
	     		system("CLS");
     			switch (pchoice1)
     			{
        			case 1:
         		    cout<<"\t\t--------Your Order---------\n";
         		    c++;
			        cout<<"Order number="<<c<<endl;
         			cout<<" "<<quantity<<" Chicken Biryani";
        			cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
        			cout<<"\nThank you For Ordering From Hungry Helpers \n";
        			fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Chicken Biryani\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
		        	break;
			        case 2:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" Prawn Biryani";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Prawn Biryani\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
 			        break;
        			case 3:
			        cout<<"\t\t--------Your Order---------\n";
			        c++;
			        cout<<"Order number="<<c<<endl;
			        cout<<" "<<quantity<<" veg Biryani";
			        cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			        cout<<"\nThank you For Ordering From Hungry Helpers\n";
			        fout<<"\nOrder no. "<<c<<"\n";
			        fout<<quantity<<" Veg Biryani\n";
			        fout<<"Total Bill= "<<choice<<"\n";
			        fout<<"\n--------------------------------------\n";
			        break;
                }
			}
			else
			{
				cout<<"\n INVALID CHOICE RE-ENTER THE CHOICE\n";
				goto F;
			}
			fout.close();
		}
		void all()
		{
			fin.open("food.txt");
			char ch;

			ch=fin.get();
			while(ch!=-1)
			{
				cout<<ch;
				ch=fin.get();
			}
			fin.close();
		}
		void t()
		{
			cout<<"\nTotal Money Earned="<<total;
		}
		~food()
		{
			ofstream out;

			out.open("c.txt");
			out<<c;
			out<<" "<<total;
			out.close();
		}
};
int main()
{
	int choice;
	food *f;
	char name[30],b;


	f=new food;

	cout<<"Are you a  CUSTOMER ?? (y/n)";
	cin>>b;

	if(b=='Y' || b=='y')
	{
		cout<<"\t\t\t----------Hungry Helpers-----------\n\n";
		cout<<"\n**WELCOME**\n";
    	cout<<"Please Enter Your Name: ";
    	fflush(stdin);
        cin.getline(name, 20);
       	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";
     	do
    	{
		    system("CLS");

	        cout<<"\t\t\t\t--------Menu--------\n\n";

        	cout<<"1) Pizzas\n";
        	cout<<"2) Burgers\n";
         	cout<<"3) Sandwich\n";
	        cout<<"4) Rolls\n";
	        cout<<"5) Biryani\n";
	        cout<<"6) Exit\n\n";
	        cout<<"\nPlease Enter your Choice: ";
	        cin>>choice;

	        switch(choice)
	       {
	    	    case 1:f->pizzas();break;
	    	    case 2:f->burgers();break;
	    	    case 3:f->sandwich();break;
	    	    case 4:f->rolls();break;
	    	    case 5:f->biryani();break;
    	    	case 6:cout<<"\n(: GOOD BYE :)";break;

	         	default:cout<<"\n INVALID CHOICE";
		   }
		   getch();
	    }while(choice!=6);
    }
    else
    {
    	do
    	{
    		system("cls");
    	    cout<<"1) All orders\n";
	        cout<<"2) Total Money\n";
	        cout<<"3) Exit\n\n";
	        cout<<"\nPlease Enter your Choice: ";
	        cin>>choice;
	        switch(choice)
	        {
	        	case 1:f->all();break;
	    	    case 2:f->t();break;
    	    	case 3:cout<<"\n(: GOOD BYE :)";break;

	         	default:cout<<"\n INVALID CHOICE";
			}
			getch();
		}while(choice!=3);
	}
	delete f;
}
