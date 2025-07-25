#include<iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string day;
    string mood;
    int time_free;
    string activity;

    cout << "Hello! I'm your Smart Assistant." << endl;
    cout << "Let's help you plan your day better" << endl << endl;

    cout << "What's the day today? (Mon-Sun): ";
    getline(cin, day);

    cout << "How are you feeling today? (Neutral/Tired/Stressed/Energetic): ";
    getline(cin, mood);

    cout << "How much free time do you have? (in minutes): ";
    cin >> time_free;
    cin.ignore(); // to clear newline from buffer

    cout << "Do you prefer Indoor or Outdoor activities? (Indoor/Outdoor/Creative/Any): ";
    getline(cin, activity);

    // convert all inputs to lowercase
    for (int i = 0; i < day.length(); i++) day[i] = tolower(day[i]);
    for (int i = 0; i < mood.length(); i++) mood[i] = tolower(mood[i]);
    for (int i = 0; i < activity.length(); i++) activity[i] = tolower(activity[i]);

    cout << "\nProcessing your preferences...\n" << endl;

    if(day == "monday"){
        if(mood == "energetic"){
            if(time_free >= 60){
                if(activity == "creative"){
                    cout << "Suggested Task: Start a new coding project or design your weekly planner!" << endl;
                }
                else if(activity == "indoor"){
                    cout << "Suggested Task: Clean your workspace and write top 3 goals (also try to do it)!" << endl;
                }
                else {
                    cout << "Suggested Task: Use your energy to organize your environment or start something new!" << endl;
                }
            }
            else if(time_free <30){
                cout << "Suggested Task: Write a quick todo list for the week!" << endl;
            }
        }
        else if(mood == "tired"){
            if(time_free >= 120){
                if(activity == "indoor"){
                    cout << "Suggested Task: Do light tasks like checking mails or watching tutorials!" << endl;
                }
                else {
                    cout << "Suggested Task: Choose a calming indoor activity like journaling or light reading!" << endl;
                }
            }
            else if(time_free>60 && time_free <120){
                cout << "Suggested Task: Take a break or journal your thoughts!" << endl;
            }
            else if(time_free<=60){
                cout << "Suggested Task: Listen to soft music, stretch lightly, or revise something casually." << endl;
            }
        }
        else if(mood == "stressed"){
            cout << "Suggested Task: Do breathing exercises or plan only 1 task for today!" << endl;
        }
        else if(mood == "neutral"){
            cout << "Suggested Task: Review last week and set simple goals!" << endl;
        }
    }

    else if(day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        if(mood == "energetic"){
            if(time_free > 60){
                if(activity == "creative"){
                    cout << "Suggested Task: Work on major tasks like projects or learning new frameworks!" << endl;
                }
                else if(activity == "outdoor"){
                    cout << "Suggested Task: Take a walk while listening to a podcast on productivity!" << endl;
                }
                else {
                    cout << "Suggested Task: Use your energy to finish something on your to-do list!" << endl;
                }
            }
            else if(time_free <= 60){
                cout << "Suggested Task: Check tasks list and complete one mini task!" << endl;
            }
        }
        else if(mood == "tired"){
            if(time_free > 120){
                if(activity == "indoor"){
                    cout << "Suggested Task: Study passively or do hands-on with minimal effort!" << endl;
                }
                else {
                    cout << "Suggested Task: Choose relaxing indoor tasks like reviewing notes or watching tutorials." << endl;
                }
            }
            else if( time_free>60 && time_free <= 120){
                cout << "Suggested Task: Watch an inspiring short video or write reflection!" << endl;
            }
            else if(time_free<=60){
                cout << "Suggested Task: Do a simple indoor activity like listening to a podcast." << endl;
            }
        }
        else if(mood == "stressed"){
            cout << "Suggested Task: Do a guided meditation or organize your digital files." << endl;
        }
        else if(mood == "neutral"){
            cout << "Suggested Task: Explore a new tool or try a creative coding challenge!" << endl;
        }
    }

    else if(day == "saturday" || day == "sunday"){
        if(mood == "energetic"){
            if(time_free > 60){
                if(activity == "creative"){
                    cout << "Suggested Task: Do a hobby like painting, reading, writing, or cooking!" << endl;
                }
                else if(activity == "outdoor"){
                    cout << "Suggested Task: Take a solo trip, walk in nature or visit a café!" << endl;
                }
                else {
                    cout << "Suggested Task: Try a fun weekend challenge or do a DIY project!" << endl;
                }
            }
            else if(time_free<=60){
                cout << "Suggested Task: Do something refreshing that fits your mood!" << endl;
            }
        }
        else if(mood == "tired"){
            if(activity == "indoor"){
                cout << "Suggested Task: Sleep more, watch a movie, or lie down and rest!" << endl;
            }
            else {
                cout << "Suggested Task: Do something light like listening to music or journaling!" << endl;
            }
        }
        else if(mood == "stressed"){
            cout << "Suggested Task: Light music, slow yoga or take a digital detox!" << endl;
        }
        else if(mood == "neutral"){
            cout << "Suggested Task: Reflect on the week, plan your Sunday goals, or call a friend!" << endl;
        }
    }

    else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
