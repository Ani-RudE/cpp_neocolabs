// Wrtie a Program to design a student class representing student roll number
// and a test class (derived class of student) representing the
// scores of the student in various subjects and sports class representing the score in sports.
// The sports and test class should be inherited by a result class
// having functionality to add the scores and display the final result for a student

// #include <bits/stdc++.h>
// using namespace std;

// class student{
//     protected:
//     int roll;
    
//     public:
//     void getroll(int n)
//     {
//         roll=n;
//     }
//     void displayroll()
//     {
//         cout<<"Roll Number: "<<roll<<endl;
//     }
// };

// class test:public student{
//     protected:
//     int score1, score2, score3, score4;

//     public:
//     void getscores(int t1, int t2, int t3, int t4)
//     {
//         score1=t1;
//         score2=t2;
//         score3=t3;
//         score4=t4;
//     }
//     void displayscores()
//     {
//         cout<<"Marks: "<<score1<<" "<<score2<<" "<<score3<<" "<<score4<<endl;
//     }

// };

// class sports{
//     protected:
//     int scoreSports;

//     public:
//     void getsports(int s)
//     {
//         scoreSports=s;
//     }
//     void displaysports()
//     {
//         cout<<"Sports score: "<<scoreSports<<endl;
//     }
// };

// class result:public test, public sports
// {
//     private:
//     int total;

//     public:
//     void displayTotal()
//     {
//         total=scoreSports+score1+score2+score3+score4;
//         displayroll();
//         displayscores();
//         displaysports();
//         cout<<"Total scores: "<<total<<endl;

//     }
// };

// int main()
// {
//     result X;
//     X.getroll(123);
//     X.getscores(15, 15, 12, 18);
//     X.getsports(20);
//     X.displayTotal();

//     return 0;
// }

// https://cdn.discordapp.com/attachments/1014537337356697750/1042657306166439956/image.png

#include <bits/stdc++.h>
using namespace std;

class student{
    protected:
    int roll;
    
    public:
    void setRoll(int n)
    {
        this->roll=n;
    }
    
    void displayRoll()
    {
        cout<<"Roll No:"<<roll<<endl;
    }
};

class test:public student{
    protected:
    int score1, score2;
    
    public:
    void setScores(int s1, int s2)
    {
        this->score1=s1;
        this->score2=s2;
    }
    
    void displayScores()
    {
        cout<<"Marks obtained"<<endl;
        cout<<"part1 ="<<score1<<endl;
        cout<<"part2 ="<<score2<<endl;
    }
};

class sports{
    protected:
    int s;
    
    public:
    void setS(int x)
    {
        this->s=x;
    }
    
    void displaySports()
    {
        cout<<"Sports wt:"<<s<<endl;
    }
};

class result:public test, public sports{
    private:
    int t;
    
    public:
    void displayTotal()
    {
        t=score1+score2+s;
        displayRoll();
        displayScores();
        displaySports();
        cout<<endl;
        cout<<"Total Score:"<<t;
    }
};

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    result K;
    K.setRoll(a);
    K.setScores(b,c);
    K.setS(d);
    K.displayTotal();
    
    return 0;
}