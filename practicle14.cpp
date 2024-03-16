#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int size;
//void login()
//{
//	private:
//		char username[200],password[200];
//		
//		public:
//			void setusername(char username[])
//			{
//				strcpy(this->username,username);
//			}
//			char *getusername()
//			{
//				return username;
//			}
//			void setpass(char password[])
//			{
//				strcpy(this->password,password);
//			}
//			char *getpass()
//			{
//				return password;
//			}
	
//};
int verify(char username1[],char password1[])
{
	char username[200]="sharda",password[200]="123";
	
	if(strcmp(username,username1)==0&&strcmp(password,password1)==0)
				return 1;
				else
				return 0;
//	private:
//		login l;
//		public:
//			void accesslogin(login l)
//			{
//				this->l=l;
//			}
//			
//			int verification(char username1[],char password1[])
//			{
//				if(strcmp(l.getusername(),username1)==0&&strcmp(l.getpass(),password1)==0)
//				return 1;
//				else
//				return 0;
//			}
}
class employee
{
	private:
		int id,sal,temp;
		char name[200],email[200],contact[200],add[200];
		public:
			void setid(int id)
			{
				this->id=id;
			}
			int getid()
			{
				return id;
			}
			void setsal(int sal)
			{
				this->sal=sal;
			}
			int getsal()
			{
				return sal;
			}
			
			void setname(char name[])
			{
				strcpy(this->name,name);
			}
			
			char *getname()
			{
				return name;
			}
			
			void setemail(char email[])
			{
				strcpy(this->email,email);
			}
			
			char *getemail()
			{
				return email;
			}
			
			void setcontact(char contact[])
			{
				strcpy(this->contact,contact);
			}
			
			char *getcontact()
			{
				return contact;
			}
			
			void setadd(char add[])
			{
				strcpy(this->add,add);
			}
			
			char *getadd()
			{
				return add;
			}
};

class compuny
{
	private:
		employee *e;
	public:
		void accept(employee e[])
		{
			this->e=e;
		}
		void show()
		{
			cout<<"id"<<"\t\t"<<"Name:"<<"\t\t"<<"sal:"<<"\t\t\t"<<"contact"<<"\t\t"<<"Gmail:"<<"\t\t"<<"Address:"<<"\n";
			for(int i=0;i<size;i++)
			{
				cout<<e[i].getid()<<"\t\t"<<e[i].getname()<<"\t\t"<<e[i].getsal()<<"\t\t"<<e[i].getcontact()<<"\t\t"<<e[i].getemail()<<"\t\t"<<e[i].getadd()<<"\n";
			}
		}
		
		void searchid(int sid)
		{
			for(int i=0;i<size;i++)
			{
				if(sid==e[i].getid())
				{
					cout<<e[i].getid()<<"\t\t"<<e[i].getname()<<"\t\t"<<e[i].getsal()<<"\t\t"<<e[i].getcontact()<<"\t\t"<<e[i].getemail()<<"\t\t"<<e[i].getadd()<<"\n";
					break;
				}else
				{
					cout<<"\n Given Id Not found\n";
				}
			}
		}
		
		void searchname(char sname[])
		{
			for(int i=0;i<size;i++)
			{
				if(strcmp(sname,e[i].getname())==0)
				{
					cout<<e[i].getname()<<"\t"<<sname;
					cout<<e[i].getid()<<"\t\t"<<e[i].getname()<<"\t\t"<<e[i].getsal()<<"\t\t"<<e[i].getcontact()<<"\t\t"<<e[i].getemail()<<"\t\t"<<e[i].getadd()<<"\n";
					break;
				}else
				{
					cout<<"\nGiven name's Employee not found\n";
				}
			}
		}
		
		void searchemail(char semail[])
		{
			for(int i=0;i<size;i++)
			{
				if(strcmp(semail,e[i].getemail())==0)
				{
					cout<<e[i].getid()<<"\t\t"<<e[i].getname()<<"\t\t"<<e[i].getsal()<<"\t\t"<<e[i].getcontact()<<"\t\t"<<e[i].getemail()<<"\t\t"<<e[i].getadd()<<"\n";
					break;
				}else
				{
					cout<<"\nGiven Email's Employee not found\n";
				}
			}
		}
		
		void searchesadd(char sadd[])
		{
			for(int i=0;i<size;i++)
			{
				if(strcmp(sadd,e[i].getadd())==0)
				{
					cout<<e[i].getid()<<"\t\t"<<e[i].getname()<<"\t\t"<<e[i].getsal()<<"\t\t"<<e[i].getcontact()<<"\t\t"<<e[i].getemail()<<"\t\t"<<e[i].getadd()<<"\n";
					break;
				}
			}
		}
		
		
		void searchssal(int ssal)
		{
			for(int i=0;i<size;i++)
			{
				if(ssal==e[i].getsal())
				{
					cout<<e[i].getid()<<"\t\t"<<e[i].getname()<<"\t\t"<<e[i].getsal()<<"\t\t"<<e[i].getcontact()<<"\t\t"<<e[i].getemail()<<"\t\t"<<e[i].getadd()<<"\n";
					break;
				}else
				{
					cout<<"\n Given sal' record 'Not found\n";
				}
			}
		}
		
		void delid(int sid)
		{
			for(int i=0;i<size;i++)
			{
				if(sid==e[i].getid())
				{
					for(int k=i;k<size;k++)
					{
						e[k]=e[k+1];
					}
					size--;
					break;
				}
			}
		}
		
		void delname(char sname[])
		{
			for(int i=0;i<size;i++)
			{
				if(strcmp(sname,e[i].getname())==0)
				{
					for(int k=i;k<size-1;k++)
					{
						e[k]=e[k+1];
					}
					size--;
				}
			}
		}
		
		void delsemail(char semail[])
		{
			for(int i=0;i<size;i++)
			{
				if(strcmp(semail,e[i].getemail())==0)
				{
					for(int k=i;k<size;k++)
					{
						e[k]=e[k+1];
					}
					size--;
				}
			}
		}
		
		void delissal(int ssal)
		{
			for(int i=0;i<size;i++)
			{
				if(ssal==e[i].getsal())
				{
					for(int k=i;k<size;k++)
					{
						e[k]=e[k+1];
					}
					size--;
				}
			}
		}
		
		
		void delsadd(char sadd[])
		{
			for(int i=0;i<size;i++)
			{
				if(strcmp(sadd,e[i].getadd())==0)
				{
					for(int k=i;k<size;k++)
					{
						e[k]=e[k+1];
					}
					size--;
				}
			}
		}
		
		void sortid()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=i+1;j<size;j++)
				{
					int p=e[i].getid();
					int n=e[j].getid();
					cout<<p<<"\t"<<n;
					if(p>n)
					{
					  employee temp=e[i];
						e[i]=e[j];
						e[j]=temp;
					}
				}
			}
		}
		
		void sortsal()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=i+1;j<size;j++)
				{
					int p=e[i].getsal();
					int n=e[j].getsal();
					if(p<n)
					{
					employee temp=e[i];
						e[i]=e[j];
						e[j]=temp;
					}
				}
			}
		}
		
		void  upid(int sid,int nid,int nsal,char nname[],char ncontact[],char nemail[],char nadd[])
		{
			int flag=0;
			for(int i=0;i<size;i++)
			{
				if(sid==e[i].getid())
				{
					cout<<"\nEnter details you want to update\n";
					cin>>nid>>nname>>nsal>>ncontact>>nemail>>nadd;
					e[i].setid(nid);
					e[i].setsal(nsal);
					e[i].setadd(nadd);
					e[i].setname(nname);
					e[i].setemail(nemail);
					e[i].setcontact(ncontact);
					flag=1;
				}
		   }
		   if(flag==1)
		   {
		   	     cout<<"Update successfully....";
		   }
		   else
		   {
		   	   cout<<"data Not Update....";
		   }
					
	}
	
	
	void  upname(char sname[],int nid,int nsal,char nname[],char ncontact[],char nemail[],char nadd[])
		{
			int flag=0;
			for(int i=0;i<size;i++)
			{
				if(strcmp(e[i].getname(),sname)==0)
				{
					cout<<"\nEnter details you want to update\n";
					cin>>nid>>nname>>nsal>>ncontact>>nemail>>nadd;
					e[i].setid(nid);
					e[i].setsal(nsal);
					e[i].setadd(nadd);
					e[i].setname(nname);
					e[i].setemail(nemail);
					e[i].setcontact(ncontact);
					flag=1;
				}
		   }
		   if(flag==1)
		   {
		   	     cout<<"Update successfully....";
		   }
		   else
		   {
		   	   cout<<"data Not Update....";
		   }
					
	}
	
	
	
	void  upsal(int ssal,int nid,int nsal,char nname[],char ncontact[],char nemail[],char nadd[])
		{
			int flag=0;
			for(int i=0;i<size;i++)
			{
				if(ssal==e[i].getsal())
				{
					cout<<"\nEnter details you want to update\n";
					cin>>nid>>nname>>nsal>>ncontact>>nemail>>nadd;
					e[i].setid(nid);
					e[i].setsal(nsal);
					e[i].setadd(nadd);
					e[i].setname(nname);
					e[i].setemail(nemail);
					e[i].setcontact(ncontact);
					flag=1;
				}
		   }
		   if(flag==1)
		   {
		   	     cout<<"Update successfully....";
		   }
		   else
		   {
		   	   cout<<"data Not Update....";
		   }
					
	}
	
	void  upcontact(char scontact[],int nid,int nsal,char nname[],char ncontact[],char nemail[],char nadd[])
		{
			int flag=0;
			for(int i=0;i<size;i++)
			{
				if(strcmp(e[i].getcontact(),scontact)==0)
				{
					cout<<"\nEnter details you want to update\n";
					cin>>nid>>nname>>nsal>>ncontact>>nemail>>nadd;
					e[i].setid(nid);
					e[i].setsal(nsal);
					e[i].setadd(nadd);
					e[i].setname(nname);
					e[i].setemail(nemail);
					e[i].setcontact(ncontact);
					flag=1;
				}
		   }
		   if(flag==1)
		   {
		   	     cout<<"Update successfully....";
		   }
		   else
		   {
		   	   cout<<"data Not Update....";
		   }
					
	}
	
	void  upEmail(char semail[],int nid,int nsal,char nname[],char ncontact[],char nemail[],char nadd[])
		{
			int flag=0;
			for(int i=0;i<size;i++)
			{
				if(strcmp(e[i].getemail(),semail)==0)
				{
					cout<<"\nEnter details you want to update\n";
					cin>>nid>>nname>>nsal>>ncontact>>nemail>>nadd;
					e[i].setid(nid);
					e[i].setsal(nsal);
					e[i].setadd(nadd);
					e[i].setname(nname);
					e[i].setemail(nemail);
					e[i].setcontact(ncontact);
					flag=1;
				}
		   }
		   if(flag==1)
		   {
		   	     cout<<"Update successfully....";
		   }
		   else
		   {
		   	   cout<<"data Not Update....";
		   }
					
	}
	
	
	void  upAdd(char sadd[],int nid,int nsal,char nname[],char ncontact[],char nemail[],char nadd[])
		{
			int flag=0;
			for(int i=0;i<size;i++)
			{
				if(strcmp(e[i].getadd(),sadd)==0)
				{
					cout<<"\nEnter details you want to update\n";
					cin>>nid>>nname>>nsal>>ncontact>>nemail>>nadd;
					e[i].setid(nid);
					e[i].setsal(nsal);
					e[i].setadd(nadd);
					e[i].setname(nname);
					e[i].setemail(nemail);
					e[i].setcontact(ncontact);
					flag=1;
				}
		   }
		   if(flag==1)
		   {
		   	     cout<<"Update successfully....";
		   }
		   else
		   {
		   	   cout<<"data Not Update....";
		   }
					
	}
			
					
					
		void highsal()
		{
			int max;
			for(int i=0;i<size;i++)
			{
				 max=e[0].getsal();
				if(max<e[i].getsal())
				{
					max=e[i].getsal();
				}
			}
			cout<<"Max Salary:"<<max;
		}
	
		void secondmax()
		{
			int count=1;
			for(int i=0;i<size;i++)
			{
				if(e[i].getsal()!=e[i+1].getsal())
				count++;
				if(count==2)
				{
					cout<<"\nSecond Max salary is: "<<e[i+1].getsal();
					break;
				}
			}
		}
		
		void range()
		{
			for(int i=0;i<size;i++)
			{
				if(e[i].getsal()>10000&&e[i].getsal()<=50000)
				{
					cout<<e[i].getid()<<"\t\t"<<e[i].getname()<<"\t\t"<<e[i].getsal()<<"\t\t"<<e[i].getcontact()<<"\t\t"<<e[i].getemail()<<"\t\t"<<e[i].getadd()<<"\n";
				}
			}
		}
		
};
int main()
{
	char username[200],password[200];
//	login l;
//	cout<<"\nEnter username in class:-\nPaaword in class:-\n";
//	cin>>username>>password;
	cout<<"-----------------------------------------Welcome to Login-------------------------------------------\n";
	int id,sal,sid,ssal,temp,x;
	int ch,flag=0;
		char name[200],email[200],contact[200],add[200],sname[200],semail[200],sadd[200],scontact[400];
	
	employee *e;

	compuny c;
	
	 int nid,nsal;
	 char nname[200],ncontact[200],nemail[200],nadd[200];
	int choice,y;
	//verify v;
	char username1[200], password1[200];

	do
	{
	cout<<"\nEnter username :-\nPaaword :-\n";
	cin>>username1>>password1;
	if(verify( username1,password1)==1)
	{
	
	do
	{
		cout<<"\n----------------------------Welcome to Employee Management System-------------------------\n";
	
	do
	{
		printf("\n1-Add\n2-Display\n3-search\n4-Deletion\n5-Updation\n6-sort\n7-Highest Salary employee\n8-Secound highest salary Employee\n9-Salary Range 10000-50000\n");
		cout<<"\nEnter your choice\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"\nEnter the size";
				cin>>size;
				e=(employee*)malloc(sizeof(employee)*size);
					for(int i=0;i<size;i++)
					{
						e[i]=employee();
						cout<<"\nEnter id:\nName:\nSalary :\nContact:\nEmail:\nAddress:\n";
						cin>>id>>name>>sal>>contact>>email>>add;
						e[i].setid(id);
						e[i].setname(name);
						e[i].setsal(sal);
						e[i].setcontact(contact);
						e[i].setemail(email);
						e[i].setadd(add);
			
					}
					c.accept(e);
				break;
			case 2:
				c.show();
				break;
			
			case 3:
				cout<<"\n*******************************Welcome to Searching Operation************************\n";
				do
				{
				
				printf("\n1Search by id\n2search by name\n3searchbyemail\n4searchbysalary\n5searchbyaddress\n");
				cout<<"\nEnter your choice\n";
				cin>>ch;
				switch(ch)
				{
					case 1:
						cout<<"\nEnter search id";
						cin>>sid;
						c.searchid(sid);
						break;
					case 2:
						cout<<"\nEnter name whose detail you want to search\n";
						cin>>sname;
						c.searchname(sname);
						break;
					case 3:
						cout<<"\nEnter Email whose detail you want to search\n";
						cin>>semail;
						c.searchemail(semail);
						break;
					case 4:
						cout<<"\nEnter salary whose detail you want to search\n";
						cin>>ssal;
						c.searchssal(ssal);
						break;
					case 5:
						cout<<"\nEnter Address whose detail you want to search\n";
						cin>>sadd;
						c.searchesadd(sadd);
						break;
					
					   	
					}	
				}while(ch!=6);
				break;
				
			case 4:
				
				cout<<"\n**************************Welcome to deletion opertaion************************************\n";
				printf("\n1Deletebyid\n2deletebyname\n3deletebyEmail\n4deletebysalary\n5deletebyaddress\n");
				printf("\nEnter your choice\n");
				scanf("%d",&ch);
				
				switch(ch)
				{
					case 1:
						cout<<"\nEnter  id whose record you want to delete\n";
						cin>>sid;
						c.delid( sid);
						
						break;
					case 2:
						cout<<"\nEnter name whose detail you want to delete\n";
						cin>>sname;
						c.delname( sname);
						break;
					case 3:
						cout<<"\nEnter Email whose detail you want to delete\n";
						cin>>semail;
						c.delsemail(semail);
						break;
					case 4:
						cout<<"\nEnter salary whose detail you want to delete\n";
						cin>>ssal;
						c.delissal(ssal);
						break;
					case 5:
						cout<<"\nEnter Address whose detail you want to search\n";
						cin>>sadd;
						c.delsadd( sadd);
						break;
				}
				break;
			case 5:
				cout<<"\n1UpdateById\n2UpdateByName\n3UpdateBySalary\n4UpdateByContact\n5UpdateByEmail\n6UpdateByAddress\n";
				cout<<"\nEnter your choice\n";
				cin>>ch;
				switch(ch)
				{
					case 1:
						cout<<"\nEnter  id whose record you want to update\n";
						cin>>sid;
						c.upid(sid, nid,nsal, nname,ncontact, nemail,nadd);
						break;
					case 2:
						cout<<"\nEnter  name whose record you want to update\n";
						cin>>sname;
						c.upname(sname, nid,nsal, nname, ncontact, nemail, nadd);
						break;
					case 3:
						cout<<"\nEnter  name whose record you want to update\n";
						cin>>ssal;
						c.upsal(ssal, nid,nsal, nname,ncontact, nemail,nadd);
						break;
					case 4:
						cout<<"\nEnter  contact whose record you want to update\n";
						cin>>scontact;
						c.upcontact(scontact, nid,nsal, nname,ncontact, nemail,nadd);
						break;
					case 5:
						cout<<"\nEnter  Email whose record you want to update\n";
						cin>>semail;
						c.upEmail(semail, nid,nsal, nname,ncontact, nemail,nadd);
						break;
					case 6:
						cout<<"\nEnter  Address whose record you want to update\n";
						cin>>sadd;
						c.upAdd(sadd, nid,nsal, nname,ncontact, nemail,nadd);
						break;
				}
			
				break;
				
			case 6:
				{
				
				printf("\n1sortAsendingbyid\n2sort Decendingbysal\n");
				printf("\nEnter your choice");
				cin>>ch;
				
				switch(ch)
				{
					
					case 1:
						
						
						c.sortid();
						c.show();
						break;
					case 2:
						c.sortsal();
						c.show();
						break;
				}
			}
				break;
		case 7:
			c.highsal();
			break;
			
		case 8:
			c.secondmax();
			break;
		case 9:
			c.range();
			break;		
				
		}
		
	}while(choice!=10);
	cout<<"\nDo you want to continue press (yes-1-no-0)\n";
	cin>>y;
}while(y!=0);
}else
{
	cout<<"\n----Ivalid Credential---\n";
	cout<<"\n-----Please Enter Valid Username And Password------\n";
	
}
cout<<"\nDo you want to continue press (yes-1-no-0)\n";
	cin>>x;
}while(x!=0);
	cout<<"\n---------------------------------Application End!!!------------------------------------------\n";
	return 0;
		
}