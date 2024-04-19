
#include <iostream>

using namespace std;

int main() {
cout << "Choose a Partner" << endl;
cout << "Select gender (1.Male, 2.Female): "<< endl;
int Gender;
cin >> Gender;

cout << "Select height (1.Tall, 2.Short): "<< endl;
int Height;
cin >> Height;

cout << "Select hobby (1.Indoors, 2.Outdoors): "<< endl;
int Hobby;
cin >> Hobby;


if (Gender == 1) {
if (Height == 1 && Hobby == 1) {
cout << "Looking for a man who is tall and loves being indoors!" << endl;}
else if (Hobby == 1 && Height == 2) {
cout << " Looking for a man who is short and loves being indoors!" << endl;}
else if (Hobby == 2 && Height == 1) {
cout << " Looking for a man who is tall and loves being  outdoors!" << endl;}
 else if (Hobby == 2 && Height == 2) {
cout << " Looking for a man who is short and loves being outdoors!" << endl;}
else {
cout << "Sorry no partner for." << endl;}
}

else if (Gender == 2) {
if (Height == 1 && Hobby == 1) {
cout << " Looking for a woman who is tall and loves being indoors!" << endl;}
else if (Height == 2 && Hobby == 1) {
cout << " Looking for a woman who is short and loves being indoors!" << endl;}
 else if (Height == 1 && Hobby== 2) {
cout << " Looking for a woman who is tall and loves being outdoors!" << endl;}
 else if (Height == 2 && Hobby== 2) {
cout << " Looking for a woman who is short and loves being outdoors!" << endl;}
else {
cout << "Sorry no partner for." << endl;}

return 0;
}
}
