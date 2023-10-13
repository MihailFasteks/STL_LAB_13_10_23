//
//  main.cpp
//  STL LAB
//
//  Created by Michalis on 13.10.2023.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
    int userChoice;
    string word1;
    string word2;
    string userChoiceS;
    typedef pair<string,string> MyPair;
    map<string, string> arrMap;
   
    
    for (auto it=arrMap.begin();it!=arrMap.end();it++)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }
    do{
        do{
            cout<<"MENU:"<<endl;
            cout<<"1. ADD"<<endl;
            cout<<"2. DELETE"<<endl;
            cout<<"3. EDIT"<<endl;
            cout<<"4. FIND"<<endl;
            cout<<"0. EXIT"<<endl;
            
            cout<<"Input your choice: ";
            cin>>userChoice;
            if (userChoice<0 || userChoice>4)
            {
                cout<<"Wrong input!Try again!"<<endl;
            }
        }while(userChoice<0 || userChoice>4);
        
        switch (userChoice)
        {
            case 1:
            {
                cout<<"Addind..."<<endl;
                cout<<"How many words: ";
                int size;
                cin>>size;
                cout<<endl;
                for (int i=0; i<size;i++)
                {
                    cout<<"Input key word: ";
                    cin>>word1;
                    cout<<"Input 2-nd word: ";
                    cin>>word2;
                    arrMap.insert(MyPair(word1, word2));
                }
                cout<<endl;
                cout<<"SHOW:"<<endl;
                for (auto it=arrMap.begin();it!=arrMap.end();it++)
                {
                    cout<<it->first<<" - "<<it->second<<endl;
                }
                cout<<endl;
                break;
            }
            case 2:
            {
                cout<<"Deleting..."<<endl;
                cout << "Input deleting word: ";
                  cin >> userChoiceS;
                if (arrMap.find(userChoiceS) == arrMap.end())
                    cout << "Такого слова нет!" << endl;
                  else {
                      arrMap.erase(arrMap.find(userChoiceS));
                    cout << "Элемент удалён" << endl;
                  }
                cout<<"SHOW:"<<endl;
                for (auto it=arrMap.begin();it!=arrMap.end();it++)
                {
                    cout<<it->first<<" - "<<it->second<<endl;
                }
                cout<<endl;

                break;
            }
            case 3:
            {
                cout<<"Editing..."<<endl;
                cout << "Input editing word: ";
                  cin >> userChoiceS;
                if (arrMap.find(userChoiceS) == arrMap.end())
                {
                    cout << "Такого слова нет!" << endl;
                }
                  else {
                      auto it=arrMap.find(userChoiceS);
                      string newTranslate;
                      cin>>newTranslate;
                      it->second=newTranslate;

                      cout<<it->first<<" - "<<it->second<<endl;
                      cout<<"Translate is edited";
                  }
                cout<<endl;
                break;
            }
            case 4:
            {
                cout<<"Finding..."<<endl;
                cout << "Input finding word: ";
                  cin >> userChoiceS;
    
                if (arrMap.find(userChoiceS) == arrMap.end())
                    cout << "Такого слова нет!" << endl;
                  else {
                      auto it=arrMap.find(userChoiceS);
                      cout<<it->first<<" - "<<it->second<<endl;
                      cout<<"Word is founded";
                  }
                cout<<endl;
                break;
            }
            case 0:
            {
                cout<<"See you!"<<endl;
                break;
            }
        }
    }while(userChoice!=0);
    
    
    
    
    
    return 0;
}
