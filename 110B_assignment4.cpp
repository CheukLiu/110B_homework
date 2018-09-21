#include <iostream>
using namespace std;


int main()
{
   int count,location, playTheGame;
   int const ARRAY_SIZE = 21;
   int const PILE_SIZE = 7;
   int pile1[PILE_SIZE];
   int pile2[PILE_SIZE];
   int pile3[PILE_SIZE];
   int pileCount1, pileCount2, pileCount3, arrayCount;
   int array21[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};


   cout << "There are 21 cards, numbered from 1 to 21 as shown below. Pick one but don't tell me what it is.";
   cout << "I will find it out\n\n";

   for(count = 0; count < ARRAY_SIZE; count++)
         cout << array21[count] << " ";
   cout << endl << endl;

   cout << "If you want to play this game, please enter 0 (zero) ";
   cin >> playTheGame;

   if(playTheGame == 0)
   {
      int number;

      cout << endl;
      cout << "Decide the number you want and enter this number ";
      cin >> number;
      cout << endl;

      // To distribute the 21 cards into 3 piles
      for(pileCount1 = 0, arrayCount = 0; pileCount1 < PILE_SIZE; pileCount1++,arrayCount+=3)
         pile1[pileCount1] = array21[arrayCount];
      for(pileCount2 = 0, arrayCount = 1; pileCount2 < PILE_SIZE; pileCount2++,arrayCount+=3)
         pile2[pileCount2] = array21[arrayCount];
      for(pileCount3 = 0, arrayCount = 2; pileCount3 < PILE_SIZE; pileCount3++,arrayCount+=3)
         pile3[pileCount3] = array21[arrayCount];

      cout << "The first pile numbers are show as follows: ";
         for(pileCount1 = 0; pileCount1 < PILE_SIZE; pileCount1++)
            cout << pile1[pileCount1] << " ";
      cout << endl;

      cout << "The second pile numbers are show as follows: ";
         for(pileCount2 = 0; pileCount2 < PILE_SIZE; pileCount2++)
            cout << pile2[pileCount2] << " ";
      cout << endl;

      cout << "The third pile numbers are show as follows: ";
         for(pileCount3 = 0; pileCount3 < PILE_SIZE; pileCount3++)
            cout << pile3[pileCount3] << " ";
      cout << endl;

      // To ask the user to enter which pile the card resides in
      cout << endl;
      cout << "Please, by entering 1 or 2 or 3, tell me which pile the card is resided in ";
      cout << "(pile 1 = 1, pile 2 = 2, pile 3 = 3): ";
      cin >> location;
      cout << endl;

      // To set the pile with the card as the middle(pile2) of the 21 array number
      if(location == 1)
      {
         int temp[PILE_SIZE];

         for(int count = 0; count < PILE_SIZE; count++)

            {
               temp[count] = pile2[count];
               pile2[count] = pile1[count];
               pile1[count] = temp[count];
            }

      }


       if(location == 3)
      {
         int temp[PILE_SIZE];
         for(int count = 0; count < PILE_SIZE; count++)

            {
               temp[count] = pile2[count];
               pile2[count] = pile3[count];
               pile3[count] = temp[count];
            }
      }

      // To regroup the three piles into one array
      for(pileCount1 = 0, arrayCount = 0; pileCount1 < PILE_SIZE; pileCount1++,arrayCount++)
         array21[arrayCount] = pile1[pileCount1];
      for(pileCount2 = 0, arrayCount = 7; pileCount2 < PILE_SIZE; pileCount2++,arrayCount++)
         array21[arrayCount] = pile2[pileCount2];
      for(pileCount3 = 0, arrayCount = 14; pileCount3 < PILE_SIZE; pileCount3++,arrayCount++)
         array21[arrayCount] = pile3[pileCount3];

      // To distribute the 21 cards into 3 piles second times
      for(pileCount1 = 0, arrayCount = 0; pileCount1 < PILE_SIZE; pileCount1++,arrayCount+=3)
         pile1[pileCount1] = array21[arrayCount];
      for(pileCount2 = 0, arrayCount = 1; pileCount2 < PILE_SIZE; pileCount2++,arrayCount+=3)
         pile2[pileCount2] = array21[arrayCount];
      for(pileCount3 = 0, arrayCount = 2; pileCount3 < PILE_SIZE; pileCount3++,arrayCount+=3)
         pile3[pileCount3] = array21[arrayCount];

      cout << "The first pile numbers are show as follows: ";
         for(pileCount1 = 0; pileCount1 < PILE_SIZE; pileCount1++)
            cout << pile1[pileCount1] << " ";
      cout << endl;

      cout << "The second pile numbers are show as follows: ";
         for(pileCount2 = 0; pileCount2 < PILE_SIZE; pileCount2++)
            cout << pile2[pileCount2] << " ";
      cout << endl;

      cout << "The third pile numbers are show as follows: ";
         for(pileCount3 = 0; pileCount3 < PILE_SIZE; pileCount3++)
            cout << pile3[pileCount3] << " ";
      cout << endl;

      // To ask the user to enter which pile the card resides in second times
      cout << endl;
      cout << "Please, by entering 1 or 2 or 3,tell me which pile the card is resided in ";
      cout << "(pile 1 = 1, pile 2 = 2, pile 3 = 3): ";
      cin >> location;
      cout << endl;

      // To set the pile with the card as the middle(pile2) of the 21 array number second times
      if(location == 1)
      {
         int temp[PILE_SIZE];

         for(count = 0; count < PILE_SIZE; count++)
         {
            temp[count] = pile2[count];
            pile2[count] = pile1[count];
            pile1[count] = temp[count];
         }

      }


       if(location == 3)
      {
         int temp[PILE_SIZE];

         for(count = 0; count < PILE_SIZE; count++)
         {
            temp[count] = pile2[count];
            pile2[count] = pile3[count];
            pile3[count] = temp[count];
         }

      }

      // To regroup the three piles into one array second times
      for(pileCount1 = 0, arrayCount = 0; pileCount1 < PILE_SIZE; pileCount1++,arrayCount++)
         array21[arrayCount] = pile1[pileCount1];
      for(pileCount2 = 0, arrayCount = 7; pileCount2 < PILE_SIZE; pileCount2++,arrayCount++)
         array21[arrayCount] = pile2[pileCount2];
      for(pileCount3 = 0, arrayCount = 14; pileCount3 < PILE_SIZE; pileCount3++,arrayCount++)
         array21[arrayCount] = pile3[pileCount3];

      // To distribute the21 cards into 3 piles third times
      for(pileCount1 = 0, arrayCount = 0; pileCount1 < PILE_SIZE; pileCount1++,arrayCount+=3)
         pile1[pileCount1] = array21[arrayCount];
      for(pileCount2 = 0, arrayCount = 1; pileCount2 < PILE_SIZE; pileCount2++,arrayCount+=3)
         pile2[pileCount2] = array21[arrayCount];
      for(pileCount3 = 0, arrayCount = 2; pileCount3 < PILE_SIZE; pileCount3++,arrayCount+=3)
         pile3[pileCount3] = array21[arrayCount];

      cout << "The first pile numbers are show as follows: ";
         for(pileCount1 = 0; pileCount1 < PILE_SIZE; pileCount1++)
            cout << pile1[pileCount1] << " ";
      cout << endl;

      cout << "The second pile numbers are show as follows: ";
         for(pileCount2 = 0; pileCount2 < PILE_SIZE; pileCount2++)
            cout << pile2[pileCount2] << " ";
      cout << endl;

      cout << "The third pile numbers are show as follows: ";
         for(pileCount3 = 0; pileCount3 < PILE_SIZE; pileCount3++)
            cout << pile3[pileCount3] << " ";
      cout << endl;

      // To ask the user to enter which pile the card resides in third times
      cout << endl;
      cout << "Please, by entering 1 or 2 or 3, tell me which pile the card is resided in ";
      cout << "(pile 1 = 1, pile 2 = 2, pile 3 = 3): ";
      cin >> location;
      cout << endl;

      // To set the pile with the card as the middle(pile2) of the 21 array number third times
      if(location == 1)
      {
         int temp[PILE_SIZE];

         for(count = 0; count < PILE_SIZE; count++)
         {
            temp[count] = pile2[count];
            pile2[count] = pile1[count];
            pile1[count] = temp[count];
         }

      }


       if(location == 3)
      {
         int temp[PILE_SIZE];

         for(count = 0; count < PILE_SIZE; count++)
         {
            temp[count] = pile2[count];
            pile2[count] = pile3[count];
            pile3[count] = temp[count];
         }

      }

      // To regroup the three piles into one array third times
      for(pileCount1 = 0, arrayCount = 0; pileCount1 < PILE_SIZE; pileCount1++,arrayCount++)
         array21[arrayCount] = pile1[pileCount1];
      for(pileCount2 = 0, arrayCount = 7; pileCount2 < PILE_SIZE; pileCount2++,arrayCount++)
         array21[arrayCount] = pile2[pileCount2];
      for(pileCount3 = 0, arrayCount = 14; pileCount3 < PILE_SIZE; pileCount3++,arrayCount++)
         array21[arrayCount] = pile3[pileCount3];

      // To show the answer to the user
      cout << "Is number " << pile2[3] << " your choice?" << endl;


   }
   else
   {
      cout << endl;
      cout << "Maybe, we play the game next time. Goodbye." << endl;
   }
   return 0;
}





