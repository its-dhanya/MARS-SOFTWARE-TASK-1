#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class Team { Electronics, Software, Mechanical, Science, Management };
enum class Position { CORE, JOINT_CORE, MEMBER };

class Person {
public:
  Person(const string& name, Team team, Position position) :
    name(name), team(team), position(position) {}

  string getName() const { return name; }
  Team getTeam() const { return team; }
  Position getPosition() const { return position; }

private:
  string name;
  Team team;
  Position position;
};

class SubTeam {
public:
  SubTeam(Team teamName) : team(teamName) {}

  void addMember(const Person& person) {
    if (person.getTeam() == team) {
      members.push_back(person);
    } else {
      cout << "Error: Person " << person.getName() << " belongs to a different team." << endl;
    }
  }

  // Function to check if a person can communicate with another person
  bool canCommunicate(const Person& person1, const Person& person2) const {
    // Everyone can communicate with CORE and JOINT-CORE of their own team
    if ((person1.getPosition() == Position::CORE || person1.getPosition() == Position::JOINT_CORE) &&
        person2.getTeam() == person1.getTeam()) {
      return true;
    }

    // Members can only communicate with people in their own sub-team
    return person1.getTeam() == person2.getTeam();
  }

private:
  Team team;
  vector<Person> members;
};

int main() {
  // Create sub-teams
  SubTeam electronics(Team::Electronics);
  SubTeam software(Team::Software);
  SubTeam mechanical(Team::Mechanical);
  SubTeam science(Team::Science);
  SubTeam management(Team::Management);

  // Add people with positions
  electronics.addMember(Person("Aaa", Team::Electronics, Position::CORE));
  electronics.addMember(Person("BBb", Team::Electronics, Position::JOINT_CORE));
  electronics.addMember(Person("Ccc", Team::Electronics, Position::MEMBER));

  software.addMember(Person("Ddd", Team::Software, Position::CORE));
  software.addMember(Person("Eee", Team::Software, Position::MEMBER));

  // Try adding someone to the wrong team
  electronics.addMember(Person("Ccc", Team::Software, Position::MEMBER));

  // Check communication scenarios
  if (electronics.canCommunicate(electronics.members[0], electronics.members[1])) {
    cout << "John (Electronics CORE) can communicate with Alice (Electronics JOINT-CORE)" << endl;
  }

  if (!electronics.canCommunicate(electronics.members[2], software.members[0])) {
    cout << "Bob (Electronics MEMBER) cannot communicate with David (Software CORE)" << endl;
  }

  return 0;
}
