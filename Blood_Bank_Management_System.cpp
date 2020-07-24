#include<iostream>
#include<fstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include<unistd.h>
using namespace std;
class Blood_Management_system
{
	public:
		
		virtual void display()=0;
		virtual void id1()=0;
		virtual void add()=0;
		virtual void get_status()=0;
		virtual void credit()=0;
		virtual void view_records()=0;
		char stat[40];
		char name[40];
		char age[40];
		char gender[40];
		char phone[40];
		char email[40];
		char bg[40];
		char place[40];
		int b;
		char id[40];
		
		int D1count,R1count,RD1;
		int D2count;int R2count;int RD2;
		int D3count;int R3count;int RD3;
		int D4count;int R4count;int RD4;
		int D5count;int R5count;int RD5;
		int D6count;int R6count;int RD6;
		int D7count;int R7count;int RD7;
		int D8count;int R8count;int RD8;
		
		int CCount;
	
			
			
		
};

class implement:public Blood_Management_system
{
	public:
		void get_donor_details()
		{
//			id1();
//			cout<<"Your Unique ID(If new user)  : "<<b<<endl;
//			
//			cout<<"NOTE : KEEP YOUR UID CONFIDENTIAL"<<endl;
		
			cout<<"Enter your Unique ID : ";
			cin.getline(id,40);
			cout<<"Donor Name 			: ";
			cin.getline(name,40);
			cout<<"Blood Group 			: ";
			cin.getline(bg,40);
			cout<<"If donor,Enter '1'	: ";
			cin.getline(stat,40);
			cout<<"Age 					: ";
			cin.getline(age,40);
			cout<<"Gender 				: ";
			cin.getline(gender,40);
			
			cout<<"Place 				: ";
			cin.getline(place,40);
			cout<<"Mobile number 		: ";
			cin.getline(phone,40);
			cout<<"Email 				: ";
			cin.getline(email,40);	
			add();	
			cout<<"Record saved!";
			sleep(1);
		}
		void get_recipient_details()
		{
			id1();
		//	cout<<" Your Unique ID (if u have) : "<<UID<<endl;
		    cout<<"Enter your Unique ID : ";
			cin.getline(id,40);
			cout<<"Recipient Name 		: ";
			cin.getline(name,40);
			cout<<"Blood Group required : ";
			cin.getline(bg,40);
			cout<<"If recipient,Enter'0': ";
			cin.getline(stat,40);
			cout<<"Age 					: ";
			cin.getline(age,40);
			cout<<"Gender 				: ";
			cin.getline(gender,40);
			cout<<"Place 				: ";
			cin.getline(place,40);
			cout<<"Mobile number 		: ";
			cin.getline(phone,40);
			cout<<"Email 				: ";
			cin.getline(email,40);
			add();	
			cout<<"Record saved!";
			sleep(1);
		}
		void id1()
		{
			srand(time(0)); 
  			
    		
        	b=rand();
        
        	
    
			
		}
		
		void add()
		{
			ofstream ob("bloodbank.txt",ios::app|ios::out);
			if(ob.is_open())
			{
				ob<<endl<<id<<endl<<bg<<endl<<stat<<endl<<name<<endl<<age<<endl<<gender<<endl<<place<<endl<<phone<<endl<<email<<endl;
			}
			else
			{
				cout<<"Error!"<<endl;
			}
			ob.close();
		}
		void display()
		{
			bool find = false;
			ifstream old("bloodbank.txt");
			string key;
			cout<<"Enter the UID :";
			cin>>key;
			while(old>>id>>bg>>stat>>name>>age>>gender>>place>>phone>>email)
			{
				if(key.compare(id)==0)
				{
					cout<<"Your Unique ID : "<<id<<endl;
					cout<<"Blood Group	  : "<<bg<<endl;
					cout<<"Status 		  : "<<stat<<endl;
					cout<<"Donor Name 	  : "<<name<<endl;
					cout<<"Age 			  : "<<age<<endl;
					cout<<"Gender 		  : "<<gender<<endl;
					cout<<"Place 		  : "<<place<<endl;
					cout<<"Mobile number  : "<<phone<<endl;
					cout<<"Email 		  : "<<email<<endl;
					
					find = true;
						
				}
				
			}
			if(find == false)
			{
				cout<<"UID does not exist!";
			}
		}
		void get_status()
		{
			ifstream rd("bloodbank.txt");
			
			string key1="o+";string key9="1";
			D1count=0;R1count=0;RD1=0;
			
			string key2="O-";
			D2count=0;R2count=0;RD2=0;
			
			string key3="A+";
			D3count=0;R3count=0;RD3=0;
			
			string key4="A-";
			D4count=0;R4count=0;RD4=0;
			
			string key5="B+";
			D5count=0;R5count=0;RD5=0;
			
			string key6="B-";
			D6count=0;R6count=0;RD6=0;
			
			string key7="AB+";
			D7count=0;R7count=0;RD7=0;
			
			string key8="AB-";
			D8count=0;R8count=0;RD8=0;
			
			fflush(stdin);
			
			while(rd>>id>>bg>>stat>>name>>age>>gender>>place>>phone>>email)
			{
				
				if(key1.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D1count++;
					}
					else if(key9.compare(stat)==1)
					{
					R1count++;
					}
				}
				
				
					if(key2.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D2count++;
					}
					else if(key9.compare(stat)==1)
					{
					R2count++;
					}
				}
				
				
					if(key3.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D3count++;
					}
					else if(key9.compare(stat)==1)
					{
					R3count++;
					}
				}
				
				
				
					if(key4.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D4count++;
					}
					else if(key9.compare(stat)==1)
					{
					R4count++;
					}
				}
				
					if(key5.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D5count++;
					}
					else if(key9.compare(stat)==1)
					{
					R5count++;
					}
				}
				
					if(key6.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D6count++;
					}
					else if(key9.compare(stat)==1)
					{
					R6count++;
					}
				}
				
					if(key7.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D7count++;
					}
					else if(key9.compare(stat)==1)
					{
					R7count++;
					}
				}
				
					if(key8.compare(bg)==0)
				{
					if(key9.compare(stat)==0)
					{
					
					D8count++;
					}
					else if(key9.compare(stat)==1)
					{
					R8count++;
					}
				}

				
			}
			RD1=D1count-R1count;
			cout<<" O+  :"<<ends<<RD1<<endl;
			
			RD2=D2count-R2count;
			cout<<" O-  :"<<ends<<RD2<<endl;
			
			RD3=D3count-R3count;
			cout<<" A+  :"<<ends<<RD3<<endl;
			
			RD4=D4count-R4count;
			cout<<" A-  :"<<ends<<RD4<<endl;
			
		    RD5=D5count-R5count;
			cout<<" B+  :"<<ends<<RD5<<endl;
			
			RD6=D6count-R6count;
			cout<<" B-  :"<<ends<<RD6<<endl;
			
			RD7=D7count-R7count;
			cout<<" AB+ :"<<ends<<RD7<<endl;
			
			RD8=D8count-R8count;
			cout<<" AB- :"<<ends<<RD8<<endl;
			getch();	
		}
		void credit()
		{
						string temp;
						string temp2="1";
						int Count=0;CCount=0;
						
						cout<<"Enter the UID : ";
						cin>>temp;
						ifstream old1("bloodbank.txt");
						while(old1>>id>>bg>>stat>>name>>age>>gender>>place>>phone>>email)
						{
							if(temp.compare(id)==0)
							{
								if(temp2.compare(stat)==0)
								{
									++Count;
								}
							}
						}
						CCount=Count*10;
						cout<<"Your credit score for "<<temp<<" is : "<<CCount<<endl;
						getch();
						
		}                          
		                               
		   void view_records()
		       {	char input3;
		       		string tem1="1";
		       		string tem2="0";
		      		cout<<"\t\t\t----------------------------Blood Bank Management---------------------------------\n\n";
        			cout<<"\t\t\t-----------------------------------Welcome---------------------------------------\n\n";
       				cout<<"\t\t\t1. Donars Records\n";
        			cout<<"\t\t\t2. Recipients Records\n";
        			cout<<"\t\t\t3. Exit\n";
        			ifstream vw1("bloodbank.txt");
		       		input3 = getche();
        			switch(input3)
        			{
					case '1':	
		           	
			
					while(vw1>>id>>bg>>stat>>name>>age>>gender>>place>>phone>>email)
		     		{
		     			if(tem1.compare(stat)==0)
		     			{     			
		     					
					cout<<"Your Unique ID : "<<id<<endl;
					cout<<"Blood Group 	  : "<<bg<<endl;
					cout<<"Status 		  : "<<stat<<endl;
					cout<<"Donor Name 	  : "<<name<<endl;
					cout<<"Age 			  : "<<age<<endl;
					cout<<"Gender 		  : "<<gender<<endl;
					cout<<"Place 		  : "<<place<<endl;
					cout<<"Mobile number  : "<<phone<<endl;
					cout<<"Email 		  : "<<email<<endl;
					cout<<endl<<endl<<endl;
						}
					
						
					}
					
					getch();
					break;
					
					case '2':
					
			
					while(vw1>>id>>bg>>stat>>name>>age>>gender>>place>>phone>>email)
		     		{
		     			if(tem2.compare(stat)==0)
		     			{     			
		     					
					cout<<"Your Unique ID : "<<id<<endl;
					cout<<"Blood Group 	  : "<<bg<<endl;
					cout<<"Status 		  : "<<stat<<endl;
					cout<<"Donor Name 	  : "<<name<<endl;
					cout<<"Age 			  : "<<age<<endl;
					cout<<"Gender 		  : "<<gender<<endl;
					cout<<"Place 		  : "<<place<<endl;
					cout<<"Mobile number  : "<<phone<<endl;
					cout<<"Email 		  : "<<email<<endl;
					cout<<endl<<endl<<endl;
						}
					
						
					}
					
					getch();
					break;
					
					case '3':
					system("cls");
					break;
						
				}
				
			}
										   
		
};

main()
{
	implement bm;
	while(1)
    {
        system("cls");
        label123:
        char input;
        cout<<"\t\t\t-----------------------------Blood Bank Management---------------------------------\n\n";
        cout<<"\t\t\t-----------------------------------Welcome---------------------------------------\n\n";
        cout<<"\t\t\t1. Admin\n";
        cout<<"\t\t\t2. Donor\n";
        cout<<"\t\t\t3. Status\n";
        cout<<"\t\t\t4. Exit\n";
        cout<<"\t\t\t----------------------------What you want to do?---------------------------------\n\n";
        fflush(stdin);
        input = getche();
        switch(input)
        {
        case '1':
        while(1)
    		{
		        system("cls");
		        string pass ="";
   				char ch;
   				cout << "Enter password : ";
   				ch = _getch();
   				while(ch != 13)
				   {
      			pass.push_back(ch);
      			cout << '*';
      			ch = _getch();
  					}
				   if(pass == "nomercy")
				   	{
				   	cout<<endl;
				    cout << "\nAccess granted :P\n";
				    sleep(1);
				    
				    system("cls");
				   	
		        //label:
		        char input1;
		        cout<<"\t\t\t1. Add a new donor record\n";
		        cout<<"\t\t\t2. View records\n";
		        cout<<"\t\t\t3. Search for donor details\n";
		        cout<<"\t\t\t4. Add a recipients record\n";
		        cout<<"\t\t\t5. Current Status\n";
		        cout<<"\t\t\t6. Exit\n";
		        cout<<"\t\t\t----------------------------What you want to do?---------------------------------\n\n";
		        fflush(stdin);
		        input1=getche();
        			switch(input1)
        				{
        					case '1':
        						
        						char input4;
        						system("cls");
        						cout<<"\t\t\t1. Existing Donor\n";
		        				cout<<"\t\t\t2. New Donor\n";
        						fflush(stdin);
		        				input4=getche();
		        				switch(input4)
		        				{
		        					case'1':
		        						
		        					system("cls");
			        				bm.get_donor_details();
			        				break;
		        						
								
		        					case '2':
		        						
			        				
			        				bm.id1();
			        				system("cls");
									cout<<"Your Unique ID(If new donor)  : "<<bm.b<<endl;
									cout<<"NOTE : KEEP YOUR UID CONFIDENTIAL !!"<<endl;
			        				bm.get_donor_details();
			        				break;
			        			}
        		
        		            case '2':
        		           	system("cls");
        		           	bm.view_records();
        		           	break;
							   
							   	
				        	case '3':
				        	system("cls");	
							bm.display();
							system("pause");
							break;
			
							case '4':
							system("cls");	
							bm.get_recipient_details();
							break;
			
							case '5':
							system("cls");
							cout<<"\t\t\t------------------------- Current Blood Group Status---------------------------------\n\n";
							cout<<"\t\t\t-----------------------------------Welcome---------------------------------------\n\n";	
							bm.get_status();
							break;
						
							case '6':
							sleep(1);
							system("cls");
							goto label123;	
        	
						}
						}	
				   else
				   {
				      cout << "\nAccess aborted...\n";
				   }
        		
			}
			
		case '2':
		while(1)
			{
				system("cls");
				char input2;
				cout<<"\t\t\t1. Status of the available blood groups \n";
				cout<<"\t\t\t2. Credit points\n";
				cout<<"\t\t\t3. Back\n";
				cout<<"\t\t\t----------------------------What you want to do?---------------------------------\n\n";
				fflush(stdin);
		        input2=getche();
		        	switch(input2)
		        	{
		        		case '1':
		        		system("cls");
		        		cout<<"\t\t\t------------------------- Current Blood Group Status-------------------------------------\n\n";
						cout<<"\t\t\t-----------------------------------Welcome---------------------------------------\n\n";	
						bm.get_status();
						break;
						
						case '2':
						system("cls");
						bm.credit();
						break;
						
						case '3':
						sleep(1);
						system("cls");
						goto label123;
						
		        		
		        		
					}
		        
				
				
			}
			case '3':
			while(1)
			{
							system("cls");
							cout<<"\t\t\t------------------------ -Current Blood Group Status-------------------------------------\n\n";
							cout<<"\t\t\t-----------------------------------Welcome---------------------------------------\n\n\n";
							cout<<"Loading please wait.... . . ."<<endl;
							sleep(2);
							system("cls");
							cout<<"\t\t\t------------------------- Current Blood Group Status-------------------------------------\n\n";
							cout<<"\t\t\t-----------------------------------Welcome---------------------------------------\n\n\n";							
							bm.get_status();
							break;	
			}
			case '4':
			system("cls");
			cout<<endl<<endl;
			cout<<"\t\t-------------------------------------THANKYOU-------------------------------------------\n\n";	
			getch();
			break;
				
			
			
		}
	}
}
