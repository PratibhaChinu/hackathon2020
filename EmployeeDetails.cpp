#include<iostream>
using namespace std;
 class Employee
 {
    private:
            int emp_id;
            char emp_name[20];
            char address[20];
    public:
        void add()
        {
            cout<<"Enter emp_id, emp_name & address respectively";
            cin>>emp_id>>emp_name>>address;
            cout<<"Entered deatails are ";
            cout<<emp_id<<emp_name<<address;
        }

     void update()
      {
            cout<<"update the  emp_name & address please enter emp_id";
            cin>>emp_id;

            cout<<"Enter the new name & address";
            cin>>emp_name>>address;
            cout<<"Updated deatails of "<<emp_id<<"are " ;
            cout<<emp_name<<address;

      }
      void delete_rec()
      {
         cout<<"please enter emp_id whicvh y ou want to delete";
         cin>>emp_id;

      }

      void view_All()
      {


      }
      void view_Single()
      {

      }
      void Exit()
      {

      }



 };
 int main()
 {

     int choice;
     char ch;
     cout<<"1.Enter New Employee Record ";
     cout<<"\n 2.Update Employee Record ";
     cout<<"\n 3.Delete Employee Record ";
     cout<<"\n 4.View All Employee Records ";
     cout<<"\n 5.view single Employee Record ";
     cout<<" \n 6.Exit ";

     Employee e;
    do{

        cout<<" \n  Enter your choice between (1-6)";
        cin>>choice;
            switch(choice)
            {
                case 1:e.add();
                break;

                case 2:e.update();
                 break;
                case 3:e.delete_rec();
                 break;
                case 4:e.view_All();
                 break;
                case 5:e.view_Single();
                 break;
                case 6:e.Exit();
                 break;

            }

     cout<<"Do u want continue this process ";
     cin>>ch;
    }while(ch=='Y'||ch=='y');

 }
