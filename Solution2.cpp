# include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    string name;
     int age;
     int valid_ticket;
  
    int issueTicket()
    {  
        static int ticket = 20213;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;

        ticket++;
        valid_ticket = ticket;
        return ticket;

    }
    void validateticket(int ticket)
    {
        if(valid_ticket==ticket){
        cout<<name<<" ";
        cout<<age<<" "<<endl;
        ticket--;
        }
        else
        {
            cout<<"Warning: ticket is used in past already";
        }

    }

};
int main()
{
    int n;
      int id;
      int t;
    solution s;
    cout<<" 1.Issue Ticket\n 2.Validate Ticket \n 3.To exit<<endl" ;
    
    while(1)
    {
        cout<<"Choose the option: ";
        cin>>n;
      
        
        switch (n)
        {
        case 1:  t=s.issueTicket();
                cout<<"Your Ticket Id: "<<t<<endl;
            break;
        case 2: cout<<"Enter Ticket ID: ";
                 cin>>id;
                s.validateticket(id);
            break;
        case 3: exit(0);
            break;
        
        default: cout<<"invalid Choice: ";
               break;
        }


    }
    return 0;

}