#include <iostream>
#include <cstring>
using namespace std;

class Drug
{
char category[10];
char date_of_manufacture[10];
char company[20];
public:
Drug();
void enterdrugdetails();
void showdrugdetails();
};
class Tablet : public Drug
{
protected:
char tablet_name[30];
char volume_label[20];
public:
float price;
Tablet();
void entertabletdetails();
void showtabletdetails ();
};
class PainReliever : public Tablet
{
int dosage_units;
char side_effects[20];
int use_within_days;
public:
PainReliever();
void enterdetails();
void showdetails();
};