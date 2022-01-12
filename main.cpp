#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

class lib
{
protected:
    char name[25][25];
    char wn[25][25];
    char code[25][15];
    char copy[25][15];
    
};

class fn:public lib
{
    int z;
    
    int id;
    char nam[30];
    
public:
    void add_(void);
    void add_player(void);
    void edit_player(void);
    void delete_(void);
    void display_(void);
    void display_players(void);
    void srch();
    
    void initial(){
        z=0;
    }
    
};

void fn :: add_(void)         //To add a new sports
{
    int m,n,k;
    
    
    fstream f1;
    f1.open("book1.txt",ios::out|ios::app);
    cout<<"\n\nEnter the Sports name   :";
    cin>>name[z];
    cout<<"Enter Sports ID    :";
    cin>>wn[z];
    cout<<"Enter the No. of players   :";
    cin>>code[z];
    cout<<"Enter the Number of Kits :";
    cin>>copy[z];
    
    int i;
    
    m=strlen(name[z]);
    n=strlen(wn[z]);
    k=strlen(code[z]);
    
    f1.seekg(0,ios::end);
    
    f1<<endl<<name[z];
    for(i=0;i<26-m;i++)
        f1<<" ";
    f1 <<wn[z];
    for(i=0;i<22-n;i++)
        f1<<" ";
    f1 <<code[z];
    for(i=0;i<17-k;i++)
        f1<<" ";
    f1 <<copy[z];
    f1.close();
    
    z++;
    
}

void fn :: add_player(void)         //To add new players to a list
{
    
    string sport,ply;
    int n;
    
    cout << "In which Sports You want to Add Player(c/f/b/v): ";
    cin >> sport;
    
    cout << "How many Players You want to Add:";
    cin >> n;
    
    for(int i=0;i<n;i++){
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Student Name: ";
        cin >> nam;
        
        if(sport=="c"){
            
            ofstream sdata;
            sdata.open("player1.txt",ios::app);
            sdata << id << "\t" << nam;
            sdata << endl;
            
            sdata.close();
        }
        
        else if (sport=="f"){
            
            ofstream sdata;
            sdata.open("player2.txt",ios::app);
            sdata << id << "\t" << nam;
            sdata << endl;
            
            sdata.close();
        }
        
        else if (sport=="b"){
            
            ofstream sdata;
            sdata.open("player3.txt",ios::app);
            sdata << id << "\t" << nam;
            sdata << endl;
            
            sdata.close();
        }
        
        else if (sport=="v"){
            
            ofstream sdata;
            sdata.open("player4.txt",ios::app);
            sdata << id << "\t" << nam;
            sdata << endl;
            
            sdata.close();
        }
        
        else{
            cout << "NOT FOUND" << endl;
        }
        
    }
    
}

void fn :: delete_(void)         //To delete a player from a list
{
    
    int b,n;
    string sport;
    cout << "In which Sports you want to Delete Players(c/f/b/v): ";
    cin >> sport;
    
    if(sport=="c"){
        
        cout << "How many Players you want to Delete: ";
        cin >> n;
        
        for(int i=0;i<n;i++){
            
            cout << "Enter Player-ID to be Deleted: ";
            cin >> b;
            
            ifstream d;
            d.open("player1.txt");
            ofstream e;
            e.open("new1.txt");
            
            d>>id;
            d>>nam;
            
            while(!d.eof())
            {
                if(id!=b){
                    e<<id;
                    e<<endl;
                    e<<nam;
                    e<<endl;
                }
                else{
                    cout << "Record is Deleted" << endl;
                }
                
                d>>id;
                d>>nam;
                
            }
            e.close();
            d.close();
            
            if(remove("player1.txt")!=0){
                cout << "File does not Remove" << endl;
            }
            else
                cout << "OK" << endl;
            
            if(rename("new1.txt", "player1.txt")!=0){
                cout << "File does not Rename" << endl;
            }
            else
                cout << "OK" << endl;
            
        }
        
    }
    
    else if(sport=="f"){
        
        cout << "How many Players you want to Delete: ";
        cin >> n;
        
        for(int i=0;i<n;i++){
            
            cout << "Enter Player-ID to be Deleted: ";
            cin >> b;
            
            ifstream d;
            d.open("player2.txt");
            ofstream e;
            e.open("new2.txt");
            
            d>>id;
            d>>nam;
            
            while(!d.eof())
            {
                if(id!=b){
                    e<<id;
                    e<<endl;
                    e<<nam;
                    e<<endl;
                }
                else{
                    cout << "record is deleted" << endl;
                }
                
                d>>id;
                d>>nam;
                
            }
            e.close();
            d.close();
            
            if(remove("player2.txt")!=0){
                cout << "file does not remove" << endl;
            }
            else
                cout << "ok" << endl;
            
            if(rename("new2.txt", "player2.txt")!=0){
                cout << "file does not rename" << endl;
            }
            else
                cout << "ok" << endl;
            
        }
        
    }
    
    else if(sport=="b"){
        
        cout << "How many Players you want to Delete: ";
        cin >> n;
        
        for(int i=0;i<n;i++){
            
            cout << "Enter Player-ID to be Deleted: ";
            cin >> b;
            
            ifstream d;
            d.open("player3.txt");
            ofstream e;
            e.open("new3.txt");
            
            d>>id;
            d>>nam;
            
            while(!d.eof())
            {
                if(id!=b){
                    e<<id;
                    e<<endl;
                    e<<nam;
                    e<<endl;
                }
                else{
                    cout << "record is deleted" << endl;
                }
                
                d>>id;
                d>>nam;
                
            }
            e.close();
            d.close();
            
            if(remove("player3.txt")!=0){
                cout << "file does not remove" << endl;
            }
            else
                cout << "ok" << endl;
            
            if(rename("new3.txt", "player3.txt")!=0){
                cout << "file does not rename" << endl;
            }
            else
                cout << "ok" << endl;
            
        }
        
    }
    
    else if(sport=="v"){
        
        cout << "How many Players you want to Delete: ";
        cin >> n;
        
        for(int i=0;i<n;i++){
            
            cout << "Enter Player-ID to be Deleted: ";
            cin >> b;
            
            ifstream d;
            d.open("player4.txt");
            ofstream e;
            e.open("new4.txt");
            
            d>>id;
            d>>nam;
            
            while(!d.eof())
            {
                if(id!=b){
                    e<<id;
                    e<<endl;
                    e<<nam;
                    e<<endl;
                }
                else{
                    cout << "record is deleted" << endl;
                }
                
                d>>id;
                d>>nam;
                
            }
            e.close();
            d.close();
            
            if(remove("player4.txt")!=0){
                cout << "file does not remove" << endl;
            }
            else
                cout << "ok" << endl;
            
            if(rename("new4.txt", "player4.txt")!=0){
                cout << "file does not rename" << endl;
            }
            else
                cout << "ok" << endl;
            
        }
        
    }
    
    else{
        cout << "not found" << endl;
    }
    
}

void fn :: display_(void)          //To show the sports list
{
    
    string line;
    fstream f3;
    f3.open("book1.txt",ios::in|ios::app);
    f3.seekg(0);
    
    char a;
    
    cout<<"\n\n";
    cout<<"\t\t*************** SPORTS LIST ***************";
    cout<<"\n\n";
    cout<<"SportsName"<<setw(21)<<"SportsID"<<setw(21)<<"NoOfPlayers"<<setw(18)<<"NoOfKits"<<endl;
    cout<<"----------"<<setw(21)<<"--------"<<setw(21)<<"-----------"<<setw(18)<<"--------"<<endl;
    
    while(getline(f3,line))
    {
        cout<<line<<endl;
    }
    f3.close();
    
}

void fn :: display_players(void)          //To show the players list
{
    string sport;
    
    cout << "which sports(c/f/b/v): ";
    cin >> sport;
    
    if(sport=="c"){
        ifstream tdata;
        tdata.open("player1.txt");
        
        tdata >> id;
        tdata >> nam;
        
        cout << "player" <<setw(10)<<"id" <<endl;
        cout << "------" <<setw(10)<<"--" <<endl;
        while(!tdata.eof()){
            
            cout << id << "         " << nam <<endl;
            
            
            tdata >> id;
            tdata >> nam;
        }
        
        tdata.close();
    }
    
    else if (sport=="f"){
        ifstream tdata;
        tdata.open("player2.txt");
        
        tdata >> id;
        tdata >> nam;
        
        cout << "player" <<setw(10)<<"id" <<endl;
        cout << "------" <<setw(10)<<"--" <<endl;
        while(!tdata.eof()){
            
            cout << id << "         " << nam <<endl;
            
            
            tdata >> id;
            tdata >> nam;
        }
        
        tdata.close();
    }
    
    else if (sport=="b"){
        ifstream tdata;
        tdata.open("player3.txt");
        
        tdata >> id;
        tdata >> nam;
        
        cout << "player" <<setw(10)<<"id" <<endl;
        cout << "------" <<setw(10)<<"--" <<endl;
        while(!tdata.eof()){
            
            cout << id << "         " << nam <<endl;
            
            tdata >> id;
            tdata >> nam;
        }
        
        tdata.close();
    }
    
    else if (sport=="v"){
        ifstream tdata;
        tdata.open("player4.txt");
        
        tdata >> id;
        tdata >> nam;
        
        cout << "player" <<setw(10)<<"id" <<endl;
        cout << "------" <<setw(10)<<"--" <<endl;
        while(!tdata.eof()){
            
            cout << id << "         " << nam <<endl;
            
            tdata >> id;
            tdata >> nam;
        }
        
        tdata.close();
    }
    
    else{
        cout << "not found" << endl;
    }
    
}

void fn :: srch ()          //To search a sports with its code from list
{
    int j,k=0;
    
    cout<<"\nPlease enter the Sports ID: ";
    cin>>j;
    
    fstream f4;
    f4.open("book1.txt",ios::in|ios::app);
    f4.seekg(0);
    
    char c[20],d[20];
    int n,p,e;
    
    while(f4.eof()==0)
    {
        f4>>c;
        f4>>e;
        f4>>n;
        f4>>p;
        
        if(e==j)
        {
            cout<<"  Sports name      : "<<c<<endl;
            cout<<"  Sports ID   : "<<e<<endl;
            cout<<"  No. of Players      : "<<n<<endl;
            cout<<"  No. Of Kits : "<<p<<endl<<endl;
            k++;
        }
        if(k==1)
            break;
    }
    
}

void fn :: edit_player()        //to edit player list
{
    int b;
    int g;
    char h[30];
    string sport;
    cout << "in which sports you want to edit players(c/f/b/v): ";
    cin >> sport;
    
    if(sport=="c"){
        
        cout << "enter player id to be edited:";
        cin >> b;
        
        ifstream d;
        d.open("player1.txt");
        ofstream e;
        e.open("new1.txt");
        
        d>>id;
        d>>nam;
        
        while(!d.eof())
        {
            if(id!=b){
                e<<id;
                e<<endl;
                e<<nam;
                e<<endl;
            }
            else{
                cout << "Enter new player-id: " << endl;
                cin >> g;
                cout << "Enter new player-name: " << endl;
                cin >> h;
                
                e << g;
                e << endl;
                e << h;
                e << endl;
                
            }
            
            d>>id;
            d>>nam;
            
        }
        e.close();
        d.close();
        
        if(remove("player1.txt")!=0){
            cout << "file does not remove" << endl;
        }
        else
            cout << "ok" << endl;
        
        if(rename("new1.txt", "player1.txt")!=0){
            cout << "file does not rename" << endl;
        }
        else
            cout << "ok" << endl;
        
    }
    
    else if(sport=="f"){
        
        cout << "enter player id to be edited:";
        cin >> b;
        
        ifstream d;
        d.open("player2.txt");
        ofstream e;
        e.open("new2.txt");
        
        d>>id;
        d>>nam;
        
        while(!d.eof())
        {
            if(id!=b){
                e<<id;
                e<<endl;
                e<<nam;
                e<<endl;
            }
            else{
                cout << "Enter new player-id: " << endl;
                cin >> g;
                cout << "Enter new player-name: " << endl;
                cin >> h;
                
                e << g;
                e << endl;
                e << h;
                e << endl;
                
            }
            
            d>>id;
            d>>nam;
            
        }
        e.close();
        d.close();
        
        if(remove("player2.txt")!=0){
            cout << "file does not remove" << endl;
        }
        else
            cout << "ok" << endl;
        
        if(rename("new2.txt", "player2.txt")!=0){
            cout << "file does not rename" << endl;
        }
        else
            cout << "ok" << endl;
        
    }
    
    else if(sport=="b"){
        
        cout << "enter player id to be edited:";
        cin >> b;
        
        ifstream d;
        d.open("player3.txt");
        ofstream e;
        e.open("new3.txt");
        
        d>>id;
        d>>nam;
        
        while(!d.eof())
        {
            if(id!=b){
                e<<id;
                e<<endl;
                e<<nam;
                e<<endl;
            }
            else{
                cout << "Enter new player-id: " << endl;
                cin >> g;
                cout << "Enter new player-name: " << endl;
                cin >> h;
                
                e << g;
                e << endl;
                e << h;
                e << endl;
                
            }
            
            d>>id;
            d>>nam;
            
        }
        e.close();
        d.close();
        
        if(remove("player3.txt")!=0){
            cout << "file does not remove" << endl;
        }
        else
            cout << "ok" << endl;
        
        if(rename("new3.txt", "player3.txt")!=0){
            cout << "file does not rename" << endl;
        }
        else
            cout << "ok" << endl;
        
    }
    
    else if(sport=="v"){
        
        cout << "enter player id to be edited:";
        cin >> b;
        
        ifstream d;
        d.open("player4.txt");
        ofstream e;
        e.open("new4.txt");
        
        d>>id;
        d>>nam;
        
        while(!d.eof())
        {
            if(id!=b){
                e<<id;
                e<<endl;
                e<<nam;
                e<<endl;
            }
            else{
                cout << "Enter new player-id: " << endl;
                cin >> g;
                cout << "Enter new player-name: " << endl;
                cin >> h;
                
                e << g;
                e << endl;
                e << h;
                e << endl;
                
            }
            
            d>>id;
            d>>nam;
            
        }
        e.close();
        d.close();
        
        if(remove("player4.txt")!=0){
            cout << "file does not remove" << endl;
        }
        else
            cout << "ok" << endl;
        
        if(rename("new4.txt", "player4.txt")!=0){
            cout << "file does not rename" << endl;
        }
        else
            cout << "ok" << endl;
        
    }
    
    else{
        cout << "not found" << endl;
    }
    
}


int main ()             //Main function
{
    int i;
    
    fn f;
    f.initial();
    
    while(1)
    {
        
        cout<<"\n\n***----- WELLCOME TO SPORTS MANAGEMENT PROGRAM -----***";
        cout<<"\n\nWhat do you want to do?"<<endl;
        cout<<"\n1: Add a new sports to the list.";
        cout<<"\n2: Add a new players to the list.";
        cout<<"\n3: Display the Sports list.";
        cout<<"\n4: Display the Players list.";
        cout<<"\n5: Edit a player from list.";
        cout<<"\n6: Delete players from a list";
        cout<<"\n7: Search a Sports from list.";
        cout<<"\n8: Exit ."<<endl;
        cout<<"\nInput your choice:";
        cin>>i;
        
        switch(i)
        {
            case 1:
            {
                f.add_();
                break;
            }
                
            case 2:
            {
                f.add_player();
                break;
            }
                
            case 3:
            {
                f.display_();
                break;
            }
                
            case 4:
            {
                f.display_players();
                break;
            }
                
            case 5:
            {
                f.edit_player();
                break;
            }
                
            case 6:
            {
                f.delete_();
                break;
            }
                
            case 7:
            {
                f.srch();
                break;
            }
                
            case 8:
            {
                cout<<"Thank you.";
                break;
            }
        }
        
        if (i==8)
            break;
    }
    
    return 0;
    
}


