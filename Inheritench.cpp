#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
    private:
    vector<int>marks;
        int sum=0, subs=0;
        double avg=0.0;
public:
      Student(string firstname,string lastname,int id,vector<int>v): Person(firstname,lastname,id){
        this->marks = v;
        subs=marks.size();
    }
    char calculate(){
        char ch;
        for(int i=0;i<subs;i++){
            sum+=marks[i];
        }
        avg = sum/subs;
        if(avg<40)ch='T';
        else if(avg>=40&&avg<55)ch='D';
        else if(55<=avg && avg<70)ch='P';
        else if(70<=avg && avg<80)ch='A';
        else if(80<=avg && avg<90)ch='E';
        else if(90<=avg && avg<=100)ch='O';
        return ch;
    }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
