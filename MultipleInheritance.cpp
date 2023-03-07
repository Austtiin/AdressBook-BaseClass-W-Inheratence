/*

Author: Austin Stephens

Date: 05/03/2022

FileName: ModifiedAdressBook.cpp

Purpous: Module 05: Multiple Inheritance

Input: Menu Selection Based on Input

Output: Either menu item or concepts of entering in adress information



Exceptiuons:

For this assignment create a program that uses multiple inheritance by creating two base classes - an Alien class and a Soldier class. 

Create three child classes from the Alien class and three child classes from the Soldier class. 

Use multiple inheritance to create five unique classes that each have a child Alien class and a child Soldier class as parents. 

Have the program print out each of the five class's characteristics when objects are created from the grandchildren classes.



*/



#include <iostream>
#include <vector>
#include <string>


using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------

class Alien
{
private:

public:
    bool IsAlien;
    string Name;
    bool Tired;
    int AlienId;
    bool SpeakEnglish;
};

class Soldier
{
private:

public:
    string First_Name;
    string Last_Name;
    bool OnDuty;
    bool InAction;
    int SoldierNumber;
};



//------------------------------------------------------------------------------------------------------------------------------------------------


class BabyAlien : public Alien
{
private:

public:
    vector<string> Words_Saying;
    void output();
    void ShowProfile();
};



class HandyAlien : public Alien
{
private:

public:
    vector<string> Words_Saying;
    void output();
       void ShowProfile();
};



class WorkingAlien : public Alien
{
private:

public:
    vector<string> Words_Saying;
    void output();
       void ShowProfile();
};



//----------------------------------------------------



class FrontLineSoldier : public Soldier
{
private:

public:
    vector<string> Words_Saying;
    void output();
       void ShowProfile();
};



class TankSoldier : public Soldier
{
private:

public:
    vector<string> Words_Saying;
    void output();
       void ShowProfile();
};



class CanteenSoldier : public Soldier
{
private:

public:
    vector<string> Words_Saying;
    void output();
       void ShowProfile();
};

//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------




void BabyAlien::output()
{
    cout << "waaaaaa " << endl;
}


void HandyAlien::output()
{
    cout << "I fix things " << endl;
}

void WorkingAlien::output()
{
    cout << "I Work too much " << endl;
}

void BabyAlien::ShowProfile()
{
    cout << "Name: ";
    cout << "\t" << BabyAlien::Name << endl;

    cout << "Is the Alien Tired?: ";
    if (BabyAlien::Tired = 0)
    {
        cout << "\tYes " << endl;
    }
    else
    {
        cout << "\tNo ";
    }
    
    cout << "Alien ID No.: ";
    cout << AlienId << endl;

    cout << "Is True Alien?: ";
    if (BabyAlien::IsAlien = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }


    cout << "Speak English?: ";
    if (BabyAlien::SpeakEnglish = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }

}

void HandyAlien::ShowProfile()
{
    cout << "Name: ";
    cout << "\t" << HandyAlien::Name << endl;


    cout << "Is the Alien Tired?: ";
    if (HandyAlien::Tired = 0)
    {
        cout << "   Yes " << endl;
    }
    else
    {
        cout << "   No " << endl;
    }
    
    cout << "Alien ID No.: ";
    cout << AlienId << endl;

    cout << "Is True Alien?: ";
    if (HandyAlien::IsAlien = 0)
    {
        cout << "   Yes " << endl;
    }
    else
    {
        cout << "   No " << endl;
    }


    cout << "Speak English?: ";
    if (HandyAlien::SpeakEnglish = 0)
    {
        cout << "   Yes " << endl;
    }
    else
    {
        cout << "   No " << endl;
    }
    
}

void WorkingAlien::ShowProfile()
{
    cout << "Name: ";
    cout << "\t" << WorkingAlien::Name << endl;

    cout << "Is the Alien Tired?: ";
    if (WorkingAlien::Tired = 0)
    {
        cout << "   Yes " << endl;
    }
    else
    {
        cout << "   No ";
    }
    
    cout << "Alien ID No.: ";
    cout << AlienId << endl;

    cout << "Is True Alien?: ";
    if (WorkingAlien::IsAlien = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }


    cout << "Speak English?: ";
    if (WorkingAlien::SpeakEnglish = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }
    

}


//-------------------------------------------------------------------

void FrontLineSoldier::output()
{
    cout << "Pew Pew Pew Pew " << endl;
}

void TankSoldier::output()
{
    cout << "Fire in the hole! " << endl;
}

void CanteenSoldier::output()
{
    cout << "Come get some grub! " << endl;
}

void lines()
{
    cout << "---------------------------" << endl;
}

void FrontLineSoldier::ShowProfile()
{  
    cout << "\t" << FrontLineSoldier::First_Name << " " << FrontLineSoldier::Last_Name << endl;

    cout << "On Duty?: ";
    if (FrontLineSoldier::OnDuty = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }

    cout << "Dog Tag Number: " << FrontLineSoldier::SoldierNumber << endl;

    cout << "Currently Under Fire?: ";
    if (FrontLineSoldier::InAction = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }


}

void TankSoldier::ShowProfile()
{
    cout << "\t" << TankSoldier::First_Name << " " << TankSoldier::Last_Name << endl;

    cout << "On Duty?: ";
    if (TankSoldier::OnDuty = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }

    cout << "Dog Tag Number: " << TankSoldier::SoldierNumber << endl;

    cout << "Currently Under Fire?: ";
    if (TankSoldier::InAction = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }


}

void CanteenSoldier::ShowProfile()
{
    cout << "\t" << CanteenSoldier::First_Name << " " << CanteenSoldier::Last_Name << endl;

    cout << "On Duty?: ";
    if (CanteenSoldier::OnDuty = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }

    cout << "Dog Tag Number: " << CanteenSoldier::SoldierNumber << endl;

    cout << "Currently Under Fire?: ";
    if (CanteenSoldier::InAction = 0)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No " << endl;
    }


}


/*

    bool InAction;
    int SoldierNumber;
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    
int Choice;

BabyAlien BA;
HandyAlien HA;
WorkingAlien WA;
FrontLineSoldier FLS;
TankSoldier TS;
CanteenSoldier CS;

BA.Name = "Baby Alien ";
BA.Tired = true;
BA.AlienId = 1001;
BA.IsAlien = true;
BA.SpeakEnglish = false;

HA.Name = "Handy Alien ";
HA.Tired = false;
HA.AlienId = 76;
HA.IsAlien = true;
HA.SpeakEnglish = false;


WA.Name = "Working Alien ";
WA.Tired = true;
WA.AlienId = 9712;
WA.IsAlien = false;
WA.SpeakEnglish = true;




FLS.First_Name = "John ";
FLS.Last_Name = "Smith ";
FLS.OnDuty = 1;
FLS.InAction = 1;

TS.First_Name = "Johnny ";
TS.Last_Name = "Rocket ";
TS.OnDuty = 1;
TS.InAction = 0;

CS.First_Name = "Bobby ";
CS.Last_Name = "Wilmet ";
CS.OnDuty = 0;
CS.InAction = 0;



while (1)
{
    cout << "Please Choose What Children to display\n " << endl;
    cout << "1. Alien  |  2. Soldiers " << endl;
    cin >> Choice;

    switch (Choice)
    {
    case 1:
        lines();
        BA.ShowProfile();
        BA.output();
        lines();
        HA.ShowProfile();
        HA.output();
        lines();
        WA.ShowProfile();
        WA.output();
        lines();

        break;

    case 2:

        lines();
        FLS.ShowProfile();
        FLS.output();
        lines();
        TS.ShowProfile();
        TS.output();
        lines();
        CS.ShowProfile();
        CS.output();
        lines();
    
    default:
        break;
    }
}




    return 0;
}

