#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include<fstream>
char ces[9][8][5][100]={
   {
     {"Calculus and Analytical Geometry","Functional English ","Applied Physics","Applied Chemistry","Engineering Statics"},
     {"Computer System and Programing","Electrical Engineering","Linear Algebra and Ordinary Differential Equations","Engineering Dynamics",
	 "Electrical Technology"},
     {"Complex Variables and Transform","Fluid Mechanics-I","Mechanics of Materials-I","Machine Design and CAD-I ","Thermodynamics-II "},
     {"Electronics Engineering","Numerical Analysis","Engineering Materials","Mechanics of Materials-II","Fluid Mechanics-II"},
     {"Engineering Economics","Technical Report Writing","Machine Design & CAD- II ","Heat and Mass Transfer ","Manufacturing Processes –I"},
     {"Management Elective-I","Control Engineering","Applied Statistics","Mechanics of Machines","Refrigeration and Air Conditioning"},
     {"Management Elective-II","Internal Combustion Engines","Manufacturing Processes-II ","Mechanical Vibrations","Technical Elective –I"},
     {"Social Sciences","Technical Elective –II ","Technical Elective –III","Technical Elective –IV","Design Project"},
	 },//mechanical engineering student
   {
     {"Engineering Drawing","Engineering Mechanics","Engineering Geology","Surveying-I","Mathematics-I"},
     {"Surveying-II","Engineering Materials","Professional Ethics","Mathematics-II","Professional English"},
     {"Fluid Mechanics-I","Properties of Concrete","Engineering Practice","Numerical Analysis and Computer Programming","Hazards and Disaster Management"},
     {"Theory of Structures-I","Strength of Materials-I","Soil Mechanics-I","Drawing, Estimation & Construction","Computer Applications"},
     {"Theory of Structures-II","Strength of Materials-II","Soil Mechanics-II","Construction Planning & Management ","Hydrology and Water Resources"},
     {"Environmental Engineering-I","Reinforced Concrete-I","Design of Steel Structures","Fluid Mechanics-II ","Transportation Engineering-I"},
     {"Environmental Engineering-II","Reinforced Concrete-II","Hydraulics Engineering","Foundation Engineering","Transportation Engineering-II"},
     {"Structural Engineering","Irrigation Engineering","Design of Structures","Computer Aided Design","Project"},
	 },//civil engineering student
	{
     {"Linear Circuit Analysis","Applied Physics","Functional English","Calculus & Analytical Geometry","Islamic Studies"},
     {"Electronic Devices & Circuits","Programming Fundamentals","Engineering Mechanics","Differential Equations","Pakistan Studies"},
     {"Electrical Machines","Digital Logic Design","Computing Elective","Complex Variables & Transforms","Communication Skills"},
     {"Electrical Network Analysis ","Microprocessors & Microcontrollers","Signals & Systems","Probability Methods in Engineering","Linear Algebra"},
     {"Linear Control Systems","Electromagnetic Field Theory","Applied Thermodynamics","Natural Science Elective","Technical Report Writing"},
     {"Communication Systems","Management Science Elective I","Social Science Elective I","Breadth Core I ","Breadth Core II "},
     {"Design Project","Management Science Elective II ","Social Science Elective II ","Depth Elective I ","Depth Elective I "},
     {"Senior Design Project ","Depth Elective III","Depth Elective IV","Depth Elective V","Depth Elective V Lab"},
	 },//electrical engineering student
	  {
     {"Functional English","Calculus & Analytical Geometry","Applied Physics","Computer Fundamentals & Programming","Linear Circuit Analysis"},
     {"Communication Skills","Linear Algebra","Solid-State Electronics","Object Oriented Programming","Electronic Devices & Circuits "},
     {"Differential Equations","Electronic Circuit Design","Digital Logic Design","Electrical Network Analysis","Instrumentation & Measurements"},
     {"Complex Variables & Transforms","Pakistan Studies ","Microprocessors & Microcontrollers","Electrical Machines","Integrated Electronics"},
     {"Social Sciences Elective I","Technical Report Writing","Probability & Random Variables","Electromagnetic Field Theory","Signals & Systems"},
     {"Islamic Studies","Social Sciences Elective II","Analog & Digital Communication","Control Systems","Digital Signal Processing"},
     {"Management Sciences Elective I","Elective-I ","Elective-II","Elective-I ","Electronic Engineering Project"},
     {"Management Sciences Elective II","Elective-IV","Elective-V","Electronic Engineering Project","Final Year Project -II"},
	 },//electronics engineering student  


	 {
     {"Introduction to Computing","Discrete Structures","Applied Physics","English I (Functional English)","Calculus and Analytical Geometry"},
     {"Introduction to Software Engineering","Digital Logical Design","Programming Fundamentals","Linear Algebra","Communication Skills"},
     {"Numerical and Symbolic Computing","Software Requirement and Specification ","Data Structures & Algorithm ","Pakistan Studies & Islamiyat",
	 "Technical Report Writing"},
     {"Operating Systems ","Software Architecture Design","Object Oriented Programming","Introduction to Database System ","Principles of Management"},
     {"Software Verification & Validation","Object Oriented Software Engineering","Software Engineering Economics","Probability & Statistics",
	 "Web Engineering"},
     {"Digital Image Processing","Computer Communication & Networks","Elective General*","Artificial Intelligence","Domain Specific Elective*"},
     {"Software Testing","Preliminary of Project Studies","Domain Specific Elective *","Software Project Management","Human Resource Management"},
     {"Human Computer Interaction","Design Project","Elective General *","Professional Practices","Marketing"},
	 },//software engineering student
	 {
     {"ICT","Programming Fundamentals","Calculus and analytical geometry","Functional English","Basic Electronics"},
     {"Object Oriented Programming","Discrete Structures","Technical and Business Writing","Probability & Statics","Islamic and Pak Studies"},
     {"Data Structures and Algorithms","Digital Logic and Design","English –III","University Elective – II","Linear Algebra and Differential Equations"},
     {"Operating Systems","Introduction to Software Engineering","Computer Architecture","CS Elective–I ","Introduction to Database Systems"},
     {"Human Computer Interaction","Theory of Automata & Formal Languages","Operations Research","CS Elective–II ","Design and Analysis of Algorithms"},
     {"CS Elective–VI","Data Warehousing","University Elective –III","Computer Communication and Networks ","Smart Application Development"},
     {"Software Design Project-I","CS Elective–VI","Compiler Construction","Big Data Analytics","Artificial Intelligence"},
     {"CS Elective- VII","Software Design Project-II","Wireless Networks","Software Quality Assurance","University Elective – IV"},
	 },//computer science student
	 {
     {"Functional English ","Introduction to Computing","Calculus & Analytical Geometry","Circuit Analysis","Applied Physics"},
     {"Communication Skills","Object Oriented Programming","Electrical Network Analysis","Differential Equations","Islamic Studies"},
     {"Electronic Devices and Circuits","Multivariable Calculus","Pakistan Studies","Engineering Economics","Linear Algebra"},
     {"Probability Methods in Engineering","Amplifiers & Oscillators","Signals & Systems","Digital Logic Design","Technical Report Writing & Presentation"},
     {"Electromagnetic Theory","Communication Systems","Control Systems","Microprocessors & Microcontrollers","Computer Communication Networks"},
     {"Digital Communication","Antennas & Wave Propagation","Wireless Communication & RF Planning","Digital Signal Processing","IDE Elective-II"},
     {"Microwave Engineering","Optical Fiber Communication","Final Year Design Project -I","MBC Depth Elective-I","Professional Practices"},
     {"Transmission & Switching Systems","Final Year Design Project -II","MBC Depth Elective-II","Social Science Elective","Entrepreneurship"},
	 },//telecommunication engineering student
	 {
     {"Computing Fundamentals","Basic Electrical Engineering.","Applied Physics ","Calculus & Analytical Geometry","English Language Proficiency"},
     {"Digital Logic Design ","Computer Programming","Circuit Analysis","Linear Algebra & Differential Equations","Islamic Studies"},
     {"Computer Organization","Data Structures & Algorithms","Computer Applications in Engineering Design","Electronic Circuits",
	 "Complex Analysis and Transform Methods"},
     {"Object Oriented Programming","Operating Systems","Microprocessor and Interfacing","Signals &Systems","Discrete Structures"},
     {"Microcontroller System Design","Computer Communication & Networks","Digital Signal Processing","Numerical Methods & Probability",
	 "Business Communication & Report Writing"},
     {"Digital System Design","Database Management Systems","Pakistan Studies","CEDE-I","IDEE-I"},
     {"Preliminary Project Studies","Computer Engineering Project Management","Engineering Economics","CEDE-II","IDEE-II"},
     {"Design Project","Entrepreneurship & Leadership","Management Information System","IDEE-III","CEDE-III"},
	 },//computer engineering student
	 {
     {"Introduction to Environmental Engineering","Environmental Chemistry","Engineering Calculus","Engineering Drawing",
	 "Fundamental of Computing and Programming"},
     {"Engineering Mechanics","Surveying and Leveling","Introduction to Microbiology","Linear Algebra and Differential Equations","Electrical Technology"},
     {"Environmental Microbiology 2","Strength of Materials","Soil Mechanics","Environment and Human Interaction","Numerical Analysis"},
     {"Environmental Engineering Lab. Techniques","Environmental Ecology","Transportation Engineering","Probability and Statistics","Fluid Mechanics"},
     {"Water Supply and Sewerage Network Design","Thermodynamics","Structural Analysis","Hydrology and Water Resource Management",
	 "Environmental Management System"},
     {"Water Treatment and Design","Engineering Economics","Environmental Impact Assessment and Management","Solid Waste Management","Technical Report Writing"},
     {"Environmental Modeling","Wastewater Treatment and Design","Occupational Health and Safety","Contaminated Site Remediation","Final Year Project -I"},
     {"Industrial Waste Management","Entrepreneurship","Renewable Energy Resources","Membrane Based Treatment Technologies","Final Year Project -II"},
	 },//environmental engineering student
	};
class admin{
	private:
		char Name[30];
		char id[10];
		char password[30];
	public:
		void getdata(){
			int i,j,k;
			cout<<"Enter your name: ";
			cin>>Name;
			cout<<"Enter your ID: ";
			cin>>id;
			cout<<"Enter your Password: ";
			char a;//a Temp char
    		for(i=0;;)//infinite loop
    		{
        		a=getch();//stores char typed in a
	        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
	            //check if a is numeric or alphabet
        	{
           		password[i]=a;//stores a in pass
            	++i;
            	cout<<"*";
            	j++;
        	}
        	if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        	{	
            	cout<<"\b \b";//rub the character behind the cursor.
            	--i;
            	j--;
        	}
	        if(a=='\r')//if enter is pressed
	        {
	            password[i]='\0';//null means end of string.
	            break;//break the loop
	        }
    	}
	}
	void addData(){
		ofstream file;
		file.open("adm.txt", ios::app | ios::binary);
		if(!file)
			cout<<"File opening error";
		else
		{
			getdata();
			file.write((char*)this, sizeof(*this));
			file.close();
			cout<<"Data Entered Successfully"<<endl;
		}
		file.close(); 
	}
	void show_data(){
	//student::showdata();
		ifstream show;
		show.open("adm.txt", ios::in | ios::binary);
		show.read((char*)this,sizeof(*this));
		while(!show.eof())
		{
			//this->showdata();
			cout<<"The name of admin is: "<<Name<<endl;
			cout<<"The ID of admin is: "<<id<<endl;
			show.read((char*)this,sizeof(*this));
		}
		show.close();
	
}
bool search_data(){
		char ID[10];
		char p[32];
		ifstream search;
		search.open("adm.txt", ios::in | ios::binary);
		search.read((char*)this,sizeof(*this));
		int c=0;
		cout<<"\tEnter ID: ";
		cin>>ID;
		cout<<"Enter the password: ";
		char a;//a Temp char
		for(int i=0;;)//infinite loop
		{
    		a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
    	{
       		p[i]=a;//stores a in pass
        	++i;
        	cout<<"*";
        //	j++;
    	}
    	if(a=='\b'&&i>=1)//if user typed backspace
        //i should be greater than 1.
    	{	
        	cout<<"\b \b";//rub the character behind the cursor.
        	--i;
        	//j--;
    	}
        if(a=='\r')//if enter is pressed
        {
            p[i]='\0';//null means end of string.
            break;//break the loop
        }
    	}
		
		int result=strcmp(password,p);
		int r=strcmp(id,ID);
		while(!search.eof())
		{
			int result=strcmp(password,p);
			int r=strcmp(id,ID);
		    //cout<<result<<r;
				if(result!=0&&r!=0){
					
					search.read((char*)this,sizeof(*this));
					c=0;
				//	cout<<"a";
				}
					
				else if(result==0&&r==0)
				{
					cout<<"Data Found"<<endl;
				//	cout<<"a";
					c=1;
					break;
					
				}
		
		}
		//cout<<c;
			if(c==1){
				return true;
			}
			else if(c==0){
				return false;
			}
		search.close();
	}
	void deladmin(){
		char Id[10];
		ifstream fread;
		ofstream fwrite;
		fread.open("adm.txt", ios::in | ios::binary );
		fwrite.open("temp.txt", ios::app | ios::binary );	
		fread.read((char*)this,sizeof(*this));
	
		cout<<"\tEnter ID to delete";
				cin>>Id;
				
			while(!fread.eof())
				{
					if(strcmp(id,Id))
							fwrite.write((char*)this,sizeof(*this));
							fread.read((char*)this,sizeof(*this));
				}	
			fwrite.close();	
			fread.close();
			remove("adm.txt");
			rename("temp.txt","adm.txt");
	}
};
class student{
	public:
		char name[30];
		char reg_no[10];
		char pass[32];
		char department[30];
		int semester;
	//public:
		void getdata();
		void showdata();
		void addData();
		void show_data();
		void search_data();//for creating the list of student of class//
		void displist();//for displaying the student of class//
		void individual_search_data();
		void dispstudent();
		void delData();
		void editData();
		bool checkstudent();
		void change_password();
		
};
void student::getdata()
{
	cout<<"Enter student Name ";
	cin>>name;
	cout<<"Enter student Registration_No ";
	cin>>reg_no;
	cout<<"Enter student Password ";
	int i = 0,j=0;
    char a;//a Temp char
    for(i=0;;)//infinite loop
    {
        a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
        {
            pass[i]=a;//stores a in pass
            ++i;
            cout<<"*";
            j++;
        }
        if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        {
            cout<<"\b \b";//rub the character behind the cursor.
            --i;
            j--;
        }
        if(a=='\r')//if enter is pressed
        {
            pass[i]='\0';//null means end of string.
            break;//break the loop
        }
    }
    cout<<"Enter your department: ";
    cin>>department;
    cout<<"Enter the semester: ";
    cin>>semester;
    //file<<name<<endl<<reg_no<<endl<<pass;
    
    
    
    
}
void student::showdata()
{
	cout<<"\n                     The Name of the Student: "<<name;
	cout<<"\n               The Registration_No of the Student: "<<reg_no;
	cout<<"\n                 The department of student is: "<<department;
	cout<<"\n                       The semester is: "<<semester;
}

void student::addData(){
	  // employee::addData();
			ofstream file;
			
			file.open("acd.txt", ios::app | ios::binary);
			if(!file)
				cout<<"File opening error";
			else
			{
				getdata();
				file.write((char*)this, sizeof(*this));
				file.close();
				cout<<"Data Entered Successfully"<<endl;
			}
			file.close(); 
	
			
			
	
	
}
void student::show_data(){
			ifstream show;
			show.open("acd.txt", ios::in | ios::binary);
			show.read((char*)this,sizeof(*this));
			while(!show.eof())
			{
				this->showdata();
				show.read((char*)this,sizeof(*this));
			}
			show.close();
	
}
void student::search_data(){

			char depart[30];
			int s;
			ifstream search;
			search.open("acd.txt", ios::in | ios::binary);
			search.read((char*)this,sizeof(*this));
	
				cout<<"\tEnter DEPARTMENT:";
						cin>>depart;
						cout<<"\n\tEnter semester: ";
						cin>>s;
						int result=strcmp(department,depart);
				cout<<"\n\t\tThe list of students is: \n";
				cout<<"Name\t\t\tRegistration No\n";
				while(!search.eof())
				{
					int result=strcmp(department,depart);
						if(result!=0){
							search.read((char*)this,sizeof(*this));
						}
						else if(result==0)
					{
						if(s==semester){
							//cout<<"Data Found"<<endl;
						displist();
						search.read((char*)this,sizeof(*this));
						}
						
						//break;
					}
				}
			search.close();
		}
void student::individual_search_data(){
	char r[30];
	ifstream search;
	int c=0;
	search.open("acd.txt", ios::in | ios::binary);
	search.read((char*)this,sizeof(*this));
	
	cout<<"\tEnter Registration No. : ";
						cin>>r;
						int result=strcmp(reg_no,r);
				while(!search.eof())
				{
					int result=strcmp(reg_no,r);
						if(result!=0){
							search.read((char*)this,sizeof(*this));
							
						}
					    else
						{
							cout<<"Data Found"<<endl;
							c=1;
							showdata();
							search.read((char*)this,sizeof(*this));
							break;
						}
				}
				if(c==0){
					cout<<"\nThe Data does not found!";
				}
			search.close();
}
bool student::checkstudent(){
	char r[30];
	int c=0;
	ifstream search;
	search.open("acd.txt", ios::in | ios::binary);
	search.read((char*)this,sizeof(*this));
	cout<<"\tEnter Registration No: ";
						cin>>r;
						int result=strcmp(reg_no,r);
				while(!search.eof())
				{
					int result=strcmp(reg_no,r);
						if(result!=0){
							search.read((char*)this,sizeof(*this));
						}	
					else
					{
						cout<<"Data Found"<<endl;
						c=1;
						//showdata();
						search.read((char*)this,sizeof(*this));
						//break;
					}
				}
				if(c==0){
					return false;
				}
				else if(c==1){
					return true;
				}
		search.close();
}
void student::displist(){
	cout<<name<<"\t\t\t"<<reg_no<<endl;
}
void student::delData(){
	//void delData(){
		
		char reg[30];
		ifstream fread;
		ofstream fwrite;
		fread.open("acd.txt", ios::in | ios::binary );
		fwrite.open("temp.txt", ios::app | ios::binary );	
		fread.read((char*)this,sizeof(*this));
	
		cout<<"\tEnter registration no";
				cin>>reg;
				
			while(!fread.eof())
				{
					
					
					
					if(strcmp(reg_no,reg))
							fwrite.write((char*)this,sizeof(*this));
							fread.read((char*)this,sizeof(*this));
						
						
					
						
							
				}	
			fwrite.close();	
			fread.close();
			remove("acd.txt");
			rename("temp.txt","acd.txt");
	
}
void student::editData(){
	char reg[30];
		fstream file;
		file.open("acd.txt", ios::in |ios::out |ios::ate | ios::binary);
		file.seekp(0);
		file.read((char*)this,sizeof(*this));
	
				cout<<"\tEnter registration no";
				cin>>reg;
				//if()strcmp(reg_no,reg);
				//cout<<result;
				while(!file.eof())
				{
					if(strcmp(reg_no,reg)==0)
					{
						//cout<<"a";
						getdata();
						file.seekp(file.tellp()-sizeof(*this));
						file.write((char*)this,sizeof(*this));
						//c++;
						
					}
				file.read((char*)this,sizeof(*this));
							
				}	
	
}
void student::change_password(){
	char reg[30];
	char p[30];
		fstream file;
		file.open("acd.txt", ios::in |ios::out |ios::ate | ios::binary);
		file.seekp(0);
		file.read((char*)this,sizeof(*this));
	
				cout<<"\tEnter registration no";
				cin>>reg;
				//if()strcmp(reg_no,reg);
				//cout<<result;
				while(!file.eof())
				{
					if(strcmp(reg_no,reg)==0)
					{
						//cout<<"a";
						//getdata();
						cout<<"Enter old password: ";
						char a;//a Temp char
			    		for(int i=0;;)//infinite loop
			    		{
			        		a=getch();//stores char typed in a
				        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
				            //check if a is numeric or alphabet
			        	{
			           		p[i]=a;//stores a in pass
			            	++i;
			            	cout<<"*";
			            //	j++;
			        	}
			        	if(a=='\b'&&i>=1)//if user typed backspace
			            //i should be greater than 1.
			        	{	
			            	cout<<"\b \b";//rub the character behind the cursor.
			            	--i;
			            //	j--;
			        	}
				        if(a=='\r')//if enter is pressed
				        {
				            p[i]='\0';//null means end of string.
				            break;//break the loop
				        }
			    	}
						cout<<pass;
						if(strcmp(pass,p)==0){
							cout<<"Enter new password: ";
							char a;//a Temp char
				    		for(int i=0;;)//infinite loop
				    		{
				        		a=getch();//stores char typed in a
					        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
					            //check if a is numeric or alphabet
				        	{
				           		p[i]=a;//stores a in pass
				            	++i;
				            	cout<<"*";
				            //	j++;
				        	}
				        	if(a=='\b'&&i>=1)//if user typed backspace
				            //i should be greater than 1.
				        	{	
				            	cout<<"\b \b";//rub the character behind the cursor.
				            	--i;
				            //	j--;
				        	}
					        if(a=='\r')//if enter is pressed
					        {
					            p[i]='\0';//null means end of string.
					            break;//break the loop
					        }
				    	}
							strcpy(pass,p);
							file.seekp(file.tellp()-sizeof(*this));
						    file.write((char*)this,sizeof(*this));
						    cout<<name<<endl<<pass<<endl<<reg_no;
						}
						
						
						//c++;
						
					}
				file.read((char*)this,sizeof(*this));
							
				}
/*void student::change_pass(){
	char p[30];
	cout<<"\nEnter previous password!";
	cin>>p;
	if(strcmp(){
		cout<<"Enter New password!";
	}
}*/
	
}
class sub:public student
{
	public:
		//char department[30];
		char subjects[9][8][5][100];
		//int semester;
		int marks[5];
	//public:
		void getdata()
		{
			student::getdata();
			int k=0;
			//strcpy(department,depart);
			char dep[9][30]={"mechanical","civil","electrical","software","electronics","computer_science","telecommunication","computer","environmental"};
			int l=0,j=0;
			for(l=0;l<9;l++)
	{
		int result=strcmp(department,dep[l]);
		if(result==0){
		//cout<<true;
		break;
		}
		else{
			k++;
		}
		
	}
	//cout<<k;
			
			string sub[9][8][5];
				int c=0,i;
				while(c==0)
				{
					 for(i=0;i<=semester;i++)
					{
						if(i==semester)
					  {
					  	int m=i-1;
						for(int j=0;j<5;j++)
					    {
						strcpy(subjects[k][m][j],ces[k][m][j]);
					    }
					   c=1;
					}
				}
				int m=semester-1;
				for(int j=0;j<5;j++)
				{
				     cout<<"Enter the marks of "<<subjects[k][m][j]<<" :";
				     cin>>marks[j];
				}
				
			
		}
	}
		void showdata()
		{
			student::showdata();
		//	cout<<"\n             The Department of the student: "<<department<<endl;
	char dep[9][50]={"mechanical","civil","electrical","software","electronics","computer_science","telecommunication","computer","environmental"};
			int l=0,k=0;
				for(l=0;l<9;l++)
	{
		int result=strcmp(department,dep[l]);
		if(result==0){
		//cout<<true;
		break;
		}
		else{
			k++;
		}
		
	}	    
	int i=semester-1;
	for(int j=0;j<5;j++)
	{
		cout<<"           The marks of the "<<subjects[k][i][j]<<"\t\t\t"<<marks[j]<<endl;
	}
/*	int sum=0;
	for(a=0;a<5;a++){
		sum=sum+marks[a];
	}*/
}
void addData(){
	   //student::addData();
			ofstream file;
			
			file.open("markss.txt", ios::app | ios::binary);
			if(!file)
				cout<<"File opening error";
			else
			{
				getdata();
				file.write((char*)this, sizeof(*this));
				file.close();
				cout<<"Data Entered Successfully"<<endl;
			}
			file.close(); 
	
			
			
	
	
}
void show_data(){
	//student::showdata();
			ifstream show;
			show.open("markss.txt", ios::in | ios::binary);
			show.read((char*)this,sizeof(*this));
			while(!show.eof())
			{
				this->showdata();
				show.read((char*)this,sizeof(*this));
			}
			show.close();
	
}
void search_data(){
	char depart[30];
			ifstream search;
			search.open("markss.txt", ios::in | ios::binary);
			search.read((char*)this,sizeof(*this));
	
				cout<<"\tEnter Number";
						cin>>depart;
						int result=strcmp(department,depart);
				while(!search.eof())
				{
					int result=strcmp(department,depart);
						if(result!=0)
							search.read((char*)this,sizeof(*this));
					    else
					   {
					   	for(int i=1;i<=semester;i++)
					   	{
					   		if(i==semester)
					   		{
					   			//cout<<"Data Found"<<endl;
					   			cout<<"           WELLCOME TO THE DEPARTMENT "<<department<<endl;
								cout<<"The semester is:                               "<<semester<<endl;
						        displist();
						        search.read((char*)this,sizeof(*this));
							   }
						   }
						
						//break;
					   }
				}
			search.close();
}
void individual_search_data()
{
	char reg[30];
	char p[30];
	ifstream search;
	search.open("markss.txt", ios::in | ios::binary);
	search.read((char*)this,sizeof(*this));
	
	cout<<"\tEnter Registration No.: ";
						cin>>reg;
						cout<<"Enter your password: ";
						cin>>p;
						int result=strcmp(reg_no,reg);
						int r=strcmp(pass,p);
				while(!search.eof())
				{
					result=strcmp(reg_no,reg);
					r=strcmp(pass,p);
					if(result!=0&&r!=0){
							search.read((char*)this,sizeof(*this));
						}		
					else if(result==0&&r==0)
					{
						cout<<"Data Found"<<endl;
						showdata();
						search.read((char*)this,sizeof(*this));
						//break;
					}
				}
			search.close();
}
void delData(){
		
		char reg[30];
		ifstream fread;
		ofstream fwrite;
		fread.open("markss.txt", ios::in | ios::binary );
		fwrite.open("temp.txt", ios::app | ios::binary );	
		fread.read((char*)this,sizeof(*this));
	
		cout<<"\tEnter registration no";
				cin>>reg;
				
			while(!fread.eof())
				{
					
					
					
					if(strcmp(reg_no,reg))
							fwrite.write((char*)this,sizeof(*this));
							fread.read((char*)this,sizeof(*this));
						
						
					
						
							
				}	
			fwrite.close();	
			fread.close();
			remove("markss.txt");
			rename("temp.txt","markss.txt");
	}
	void editData(){
		char reg[30];
		fstream file;
		file.open("markss.txt", ios::in |ios::out |ios::ate | ios::binary);
		file.seekp(0);
		file.read((char*)this,sizeof(*this));
	
				cout<<"\tEnter registration no";
				cin>>reg;
				//if()strcmp(reg_no,reg);
				//cout<<result;
				while(!file.eof())
				{
					if(strcmp(reg_no,reg)==0)
					{
						//cout<<"a";
						getdata();
						file.seekp(file.tellp()-sizeof(*this));
						file.write((char*)this,sizeof(*this));
						///c++;
						
					}
				file.read((char*)this,sizeof(*this));
							
				}	
	}

		
};


int main(){
	//	sub s1;
	//	s1.editData();
	//student s1;
	

	sub st1;
	int choice,ch,c=0,n=0;
	char cha,cho;
	bool b;
	admin ad;
	student s1;
	system("COLOR 70");
	s1.show_data();
	
	cout<<endl<<endl<<endl;
	cout<<"         __________________________________________________________________________________________\n";
	cout<<"         |                   WELLCOME TO UNIVERSITY OF ENGINEERING AND TECHNOLOGY                  |\n";
	cout<<"         |_________________________________________________________________________________________|\n";
	cout<<"\n";
		cout<<endl<<endl<<endl;
		cout<<"         __________________________________________________________________________________________\n";
		cout<<"        |                                                                                          |\n";
		cout<<"        |                                                                                          |\n";
		cout<<"        |------------------------------------ENTER YOUR CHOICE-------------------------------------|\n";
		cout<<"        |---------------------------------[1]   ADDING A RECORD!-----------------------------------|\n";
		cout<<"        |---------------------------------[2]  DELETING A RECORD!----------------------------------|\n";
		cout<<"        |---------------------------------[3] CREATING A MARKSHEET---------------------------------|\n";
		cout<<"        |---------------------------------[4]     VIEW RECORDS!------------------------------------|\n";
		cout<<"        |---------------------------------[5]    VIEW MARKSHEET!-----------------------------------|\n";
		cout<<"        |---------------------------------[6]      MODIFY DATA!------------------------------------|\n";
		cout<<"        |---------------------------------[ ]        exit!-----------------------------------------|\n";
		cout<<"        |                                                                                          |\n";
		//cout<<"        |                                                                                          |\n";
		cout<<"        |__________________________________________________________________________________________|\n";
		cout<<"                                        ";
		cin>>choice;
		cout<<"\n\n";
		if(choice==1){
			cout<<"                                   :ENTER YOUR CHOICE:";
			cout<<"\n                                 [1]   ENTER ADMIN: ";
			cout<<"\n                                 [2]  ENTER STUDENT: ";
			cin>>ch;
			cout<<"\n\n\n";
			if(ch==1){
				ad.addData();
			}
			else{
				b=ad.search_data();
				while(n==0){
				    if(b==true){
				    	cout<<"Enter your choice y to add record and n to back!";
				    	cin>>cho;
						while(cho=='y'||cho=='Y'){
						s1.addData();
						cout<<"Enter your choice y to add record and n to back!";
						cin>>cho;
				       }
				       n=1;
					}
				    else if(b==false){
				   	while(b==false){
					   cout<<"Enter valid ID & Password!";
					   b=ad.search_data();
					   if(b==1){
					   	break;
					   }
				   }
				   
			    }
			}
		}
				
				
				}
			
		else if(choice==2){
			cout<<"                                   :ENTER YOUR CHOICE:";
			cout<<"\n                                 [1]   DELETE ADMIN: ";
			cout<<"\n                                 [2]  DELETE STUDENT: ";
			cout<<"\n\n\n";
			cin>>ch;
			if(ch==1){
				int opt;
				cout<<"\nThe admin of Entry purpose are: ";
				ad.show_data();
			    ad.deladmin();
			    cout<<"if you want to delete furthor record!\n";
				cout<<"press 1 other than press 2";
				cin>>opt;
				while(opt==1){
				  ad.deladmin();
				  cout<<"if you want to delete furthor record!\n";
				  cout<<"press 1 other than press 2";
				  cin>>opt;
				}
			    ad.show_data();
			}
			else{
				b=ad.search_data();
				int n=0;
	            while(n==0){
	            if(b==true){
	    	        cout<<"Enter your choice y to delete record and any other to back!";
			    	cin>>cho;
					while(cho=='y'||cho=='Y'){
					s1.delData();
					cout<<"Enter your choice y to delete record and any other to back!";
					cin>>cho;
					n=1;
	           }
		}
	    else if(b==false){
	   		while(b==false){
		    cout<<"Enter valid ID & Password!";
		    b=ad.search_data();
		    if(b==1){
		   	break;
		   }
	   }
	   
    }
  }
				
			}
		}
		else if(choice==3){
			b=ad.search_data();
			cout<<"Enter your choice y to create a marksheet and n to back!";
			cin>>cho;
	    	c=s1.checkstudent();
			while(n==0){
			    if(b==true){
			    	
			    	if(c==true){
			    	    while(cho=='y'||cho=='Y'&&c==true){
						st1.addData();
						cout<<"Enter your choice y to create a marksheet and n to back!";
						cin>>cho;
						if(cho=='y'||cho=='Y'){
							c=s1.checkstudent();
						}
			          }
					  n=1;	
					}
					else if(c==false){
						while(c==false){
				            cout<<"Enter valid Registration NO.!";
						    c=s1.checkstudent();
						    if(c==1){
						   	   break;
						   }
			          }
						
					}
				}
			    else if(b==false){
			    	while(b==false){
					    cout<<"Enter valid ID & Password!";
					    b=ad.search_data();
					    if(b==1){
					   		break;
				   }
			   }
		}
	}
}
		else if(choice==4){
			cout<<"                                    :ENTER YOUR CHOICE:";
			cout<<"\n                              [1]   VIEW THE CLASS DATA: ";
			cout<<"\n                              [2]  VIEW A SINGLE STUDENT: ";
			cin>>ch;
			cout<<"\n\n\n";
			if(ch==1){
				b=ad.search_data();
				while(n==0){
				    if(b==true){
				    	s1.search_data();
				    	n=1;
				       }
				    else if(b==false){
				   	while(b==false){
					   cout<<"Enter valid ID & Password!";
					   b=ad.search_data();
					   if(b==1){
					   	break;
					   }
				   }
			    }
			  }
			}
			else if(ch==2){
				b=ad.search_data();
				while(n==0){
				    if(b==true){
				    	s1.individual_search_data();
				    	n=1;
				       }
				    else if(b==false){
				   	while(b==false){
					   cout<<"Enter valid ID & Password!";
					   b=ad.search_data();
					   if(b==1){
					   	break;
					   }
				   }
			    }
 			 }
			}
			
		}
		else if(choice==5){
			st1.individual_search_data();
		}
		else if(choice==6){
			cout<<"                                    :ENTER YOUR CHOICE:";
			cout<<"\n                              [1]   CHANGE THE PASSWORD: ";
			cout<<"\n                              [2]  CHANGE THE COMPLETE DATA: ";
			cin>>ch;
			if(ch==1){
				b=ad.search_data();
				while(n==0){
				    if(b==true){
				    	s1.change_password();
				    	n=1;
				       }
				    else if(b==false){
				   	while(b==false){
					   cout<<"Enter valid ID & Password!";
					   b=ad.search_data();
					   if(b==1){
					   	break;
					   }
				   }
			    }
 			 }
			}
			
			else if(ch==2){
				cout<<"a";
				b=ad.search_data();
				int n=0;
				while(n==0){
				    if(b==true){
				    	s1.editData();
				    	n=1;
				       }
				    else if(b==false){
				   	while(b==false){
					   cout<<"Enter valid ID & Password!";
					   b=ad.search_data();
					   if(b==1){
					   	break;
					   }
				   }
			    }
 			 }
			}
			
	}
		else{
			cout<<"\n          SORRY! WRONG CHOICE: ";
		
		}
		
    

}

