#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
  string name;
  string dob;
  string gender;
  vector<Person *> children;
};

struct FamilyTree
{
  Person *root;

  FamilyTree(string Name)
  {
    root = new Person();
    root->name = Name;
  }

  void addChild(string childName, string dob, string gender, Person *parent)
  {
    Person *newChild = new Person();
    newChild->name = childName;
    newChild->dob = dob;
    newChild->gender = gender;
    parent->children.push_back(newChild);
    cout << "\nThe " << childName << " is add to the family \n";
  }

  void addChildForChild(string childName, string dob, string childGender, string parentName, Person *node)
  {
    if (node->name == parentName)
    {
      if (node->gender == "M")
      {
        if (childGender == "M" || childGender == "F")
        {
          Person *newChild = new Person();
          newChild->name = childName;
          newChild->dob = dob;
          newChild->gender = childGender;
          node->children.push_back(newChild);
          cout << "\nThe " << childName << " is added to the family \n";
        }
        else
        {
          cout << "\nInvalid gender for the child\n";
        }
      }
      else if (node->gender == "F")
      {
        cout << "\nSorry! The child can only be added to the male parent\n";
      }
      return;
    }

    for (Person *child : node->children)
    {
      addChildForChild(childName, dob, childGender, parentName, child);
    }
  }

  void deleteChild(string childName, Person *parent)
  {
    for (int i = 0; i < parent->children.size(); i++)
    {
      if (parent->children[i]->name == childName)
      {
        parent->children.erase(parent->children.begin() + i);
        cout << "\nThe " << childName << " is removed from the Family. \n";

        break;
      }
      else if (parent->children[i]->name != childName)
      {
        cout << "\nThe " << childName << " is not the member of this Family. \n";
      }
      else
      {
        deleteChild(childName, parent->children[i]);
      }
    }
  }

  void searchChild(string childName, Person *node)
  {
    if (node->name == childName)
    {
      cout << "Name: " << node->name << endl;
      cout << "DOB: " << node->dob << endl;
      cout << "Gender: " << node->gender << endl;
      return;
    }
    bool found = false;
    for (Person *child : node->children)
    {
      searchChild(childName, child);
      if (child->name == childName)
      {
        found = true;
        break;
      }
    }
    if (!found)
    {
      cout << "The member is not found." << endl;
      return;
    }
  }

  void printFamilyTree(Person *node, int level)
  {
    // cout << root->name << " Family" << endl;

    for (int i = 0; i < level; i++)
    {
      cout << "    ";
    }
    int numofChild = root->children.size();
    if (numofChild == 0)
    {
      cout << "There is no member in the Family \n";
    }
    cout << node->name << endl;

    int numOfChildren = node->children.size();
    if (numOfChildren == 0)
    {
      return;
    }

    for (int i = 0; i < level; i++)
    {
      cout << "    ";
    }
    cout << "|" << endl;

    for (int i = 0; i < level; i++)
    {
      cout << "    ";
    }
    cout << "---";
    for (int i = 0; i < numOfChildren - 1; i++)
    {
      cout << "---";
    }
    cout << endl;

    for (int i = 0; i < numOfChildren; i++)
    {
      Person *child = node->children[i];
      printFamilyTree(child, level + 1);
      if (i < numOfChildren - 1)
      {
        for (int j = 0; j < level + 1; j++)
        {
          cout << "    ";
        }
        cout << "|" << endl;
      }
    }
  }
};
int main()
{
  cout << "\tEnter the Family name \n";
  string name;
  getline(cin, name);
  FamilyTree ft(name);

  string childName;
  string childDOB;
  string childGender;
  string parentName;
  int option = 0;
  do
  {
    cout << "\n \tFamily Tree Menu:" << endl;
    cout << "\t1. Add Child" << endl;
    cout << "\t2. Add Child for Child" << endl;
    cout << "\t3. Delete Child" << endl;
    cout << "\t4. Search Child" << endl;
    cout << "\t5. Print Family Tree" << endl;
    cout << "\t6. Exit" << endl;
    cout << "\tEnter option: ";
    cin >> option;
    cout << endl;
    switch (option)
    {
    case 1:
      cout << "Enter the name of the child \n(Combine two-word names with '_'): ";
      cin >> childName;
      cout << "Enter the DOB of the child (dd/mm/yy): ";
      cin >> childDOB;
      cout << "Enter the gender of the child (M/F): ";
      cin >> childGender;
      ft.addChild(childName, childDOB, childGender, ft.root);
      break;
    case 2:
      cout << "Enter the name of the child: ";
      cin >> childName;
      cout << "Enter the DOB of the child (dd/mm/yy) : ";
      cin >> childDOB;
      cout << "Enter the gender of the child (M/F) : ";
      cin >> childGender;
      cout << "Enter the name of the parent child: ";
      cin >> parentName;
      ft.addChildForChild(childName, childDOB, childGender, parentName, ft.root);
      break;
    case 3:
      cout << "Enter the name of the child: ";
      cin >> childName;
      ft.deleteChild(childName, ft.root);
      break;
    case 4:
      cout << "Enter the name of the child: ";
      cin >> childName;
      ft.searchChild(childName, ft.root);
      break;
    case 5:
      ft.printFamilyTree(ft.root, 0);
      break;
    case 6:
      break;
    default:
      cout << "Invalid option. Try again." << endl;
      break;
    }
  } while (option != 6);
  return 0;
}
