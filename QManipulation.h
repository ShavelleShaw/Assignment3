#include <iostream>
#include <queue>


using namespace std;


void move_to_rear(queue <string> Names){

  //moves the front element to the rear

  string temp;
  
  temp= Names.front();
  cout << "The current first element is: " << temp << endl;
  cout << "The current REAR element is: " << Names.back() << endl <<endl;

  Names.pop(); // removes element (from front based on FIFO method of queue)

  Names.push(temp); // adds element to the queue(to the rear based on queue operations)

  
  cout << "The new first element is: " << Names.front() << endl;

  cout << "The rear element is: " << Names.back() << endl << endl;
  
}
