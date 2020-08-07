/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<bits/stdc++.h>
using namespace std;

unordered_map<string,vector<vector<int>>> screens;
unordered_map<string,unordered_set<int>> aisle;

bool available(string name,int row,vector<int> &seats){
    if(screens.find(name)==screens.end())
        return false;
    if(row<1 || row>=(int)screens[name].size())
        return false;
    for(auto it:seats)
    {
        if(screens[name][row][it]==1)
            return false;
    }
    return true;
}

void getUnreservedSeat(string name,int row)
{
    vector<int> us;
    for(int i=0;i<screens[name][row].size();i++)
        if(screens[name][row][i]==0)
            us.push_back(i+1);
    for(int i=0;i<us.size();i++)
        cout<<us[i]<<" ";
    cout<<endl;
}

void suggestSeats(string name,int num_seats,int row,int choice){
    unordered_set<int> il = aisle[name];
    vector<int> col = screens[name][row];
    if(choice+num_seats-1<col.size())
    {
        bool flag=true;
        for(int i=choice;i<choice+num_seats;i++)
        {
            if(col[i]==1 or (il.find(i)!=il.end() && (i>choice || i<choice+num_seats-1)))
            {
                flag=false;
                break;
            }
        }
        if(flag){
            for(int i=choice;i<choice+num_seats;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            return ;
        }
    }


    if(choice-num_seats+1>0)
    {
        bool flag=true;
        for(int i=choice;i>choice-num_seats;i--)
        {
            if(col[i]==1 or (il.find(i)!=il.end() && (i<choice || i>choice-num_seats+1)))
            {
                flag=false;
                break;
            }
        }

        if(flag){
            for(int i=choice-num_seats+1;i<=choice;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            return ;
        }
    }
    cout<<"none\n";
}

void reserveSeats(string name,int row,vector<int> &seats){
    if(!available(name,row,seats))
    {
        cout<<"failure\n";
        return ;
    }
    for(auto it:seats)
        screens[name][row][it]=1;
    cout<<"success\n";
}



void addScreen(string name,int row,int col,unordered_set<int> as)
{
    if(screens.find(name)!=screens.end())
    {
        cout<<"failure\n";
        return ;
    }

    vector<vector<int>> screen(row+1,vector<int>(col+1,0));
    screens[name]=screen;
    aisle[name]=as;
    cout<<"success\n";
}

 

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string command;
        cin>>command;
        if(command=="add-screen")  
        {
            string name;
            int row,col,temp;
            unordered_set<int> as;
            cin>>name>>row>>col;
            while(cin>>temp){
                as.insert(temp);
            }
            addScreen(name,row,col,as);
        }
        else if(command=="reserve-seat")
        {
            string name;
            int row,temp;
            cin>>name>>row;
            vector<int> lst;
            while(cin>>temp)
            {
                lst.push_back(temp);
            }
            reserveSeats(name,row,lst);

        }
        else if(command=="get-unreserved-seat")
        {
            string name;
            int row;
            cin>>name>>row;
        }
        else if(command=="suggest-contiguous-seats")
        {
            string name;
            int numSeats,row,choice;
            cin>>name>>numSeats>>row>>choice;
            suggestSeats(name,numSeats,row,choice);

        }
    }
}