#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "🎉 Welcome to 'Who Am I?' A fun guessing game!" << endl << endl;
    cout << "🧠 Think smart and ask 5 Yes/No questions to figure out who I'm thinking of!" << endl;
    cout << "Let's begin!" << endl << endl;

    // Secret character details
    string secretName = "Albert Einstein";
    bool isHuman = true;
    bool isAlive = false;
    bool isFictional = false;
    bool isReal = true;
    bool isScientist = true;
    string profession = "scientist";
    string country = "germany";
    string famousFor = "Theory of Relativity";
    string gender = "male";
    int birthYear = 1879;

    string userQuestion;
    int maxQuestions = 5;

    for (int i = 1; i <= maxQuestions; i++) {
        cout << "❓ Question " << i << ": ";
        getline(cin, userQuestion);

        // Convert to lowercase
        transform(userQuestion.begin(), userQuestion.end(), userQuestion.begin(), ::tolower);

        // Smart keyword detection
        if (userQuestion.find("human") != string::npos) {
            cout << "Answer: " << (isHuman ? "yes" : "no") << endl;
        }
        else if (userQuestion.find("alive") != string::npos || userQuestion.find("living") != string::npos) {
            cout << "Answer: " << (isAlive ? "yes" : "no") << endl;
        }
        else if ((userQuestion.find("real") != string::npos && userQuestion.find("person") != string::npos) ||
                 userQuestion.find("real") != string::npos) {
            cout << "Answer: " << (isReal ? "yes" : "no") << endl;
        }
        else if (userQuestion.find("fictional") != string::npos || userQuestion.find("unreal") != string::npos ||
                 userQuestion.find("robot") != string::npos) {
            cout << "Answer: " << (isFictional ? "yes" : "no") << endl;
        }
        else if (userQuestion.find("scientist") != string::npos || userQuestion.find("science") != string::npos ||
                 userQuestion.find("profession") != string::npos) {
            cout << "Answer: " << (isScientist ? "yes" : "no") << endl;
        }
        else if (userQuestion.find("country") != string::npos || userQuestion.find("germany") != string::npos) {
            cout << "Answer: " << (country == "germany" ? "yes" : "no") << endl;
        }
        else if (userQuestion.find("male") != string::npos || userQuestion.find("female") != string::npos ||
                 userQuestion.find("gender") != string::npos) {
            cout << "Answer: " << (gender == "male" ? "male" : "female") << endl;
        }
        else if (userQuestion.find("born") != string::npos || userQuestion.find("birth") != string::npos ||
                 userQuestion.find("year") != string::npos) {
            cout << "Answer: Around " << birthYear << endl;
        }
        else {
            cout << "Answer: I can't answer that. Try a yes/no style question." << endl;
        }

        cout << endl;
    }

    // Final hint
    cout << "🧩 ==== HINT ==== 🧩" << endl;
    cout << "Hint: This person developed the '" << famousFor << "' and was born in " << country << "." << endl;
    cout << endl;

    // Final guess
    string guess;
    cout << "🎯 Your Guess: ";
    getline(cin, guess);

    // Lowercase comparison
    transform(guess.begin(), guess.end(), guess.begin(), ::tolower);
    string correctAnswer = "albert einstein";

    if (guess == correctAnswer) {
        cout << "🎉 Correct! You guessed it right!" << endl;
    } else {
        cout << "❌ Oops! Wrong guess. The correct answer was: " << secretName << endl;
    }

    cout << "🎮 Thanks for playing!" << endl;

    return 0;
}
