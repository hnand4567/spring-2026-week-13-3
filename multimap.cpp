#include <iostream>
#include <map>
#include <string>
using namespace std;
// Fork this repo
// Read: https://www.geeksforgeeks.org/cpp/multimap-associative-containers-the-c-standard-template-library-stl/
// If you have question about the code, please ask to the TA
// Implement a multimap to store student IDs and their names. A multimap allows multiple values for the same key,
//  which is useful in this case since multiple students can have the same ID.
// You can see more information: https://cplusplus.com/reference/map/multimap/
// Add a comment before main about what was the most easy and challenging part
// After you finish, type in the terminaL:
// git add .
// git commit -m "Implement multimap for student IDs and names"
// git push origin main

//the most easy part was inserting an element to the multimap, 
// and the most challenging part was trying to run this file and 
// figuring out how to display the students with their matching ids.
int main() {
    // Create a multimap where the key is student ID (int) and value is student name (string)
    multimap<int, string> students;

    // Insert students with their IDs into the multimap
   students.insert({1294309, "Hana"});

    // Display all students sorted by their student IDs
   std::cout << "ID \t Name" << std::endl;
   std::cout << "----------" << std::endl;

    for (const auto& [id, name] : students) {
        std::cout << id << " \t" << name << std::endl;
   }
   

    return 0;
}
