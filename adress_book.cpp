// this is a array book program that can add delete modify and display array

#include <iostream>
#include <string>

using namespace std;

void display(string arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] == ""){
            cout << endl;
            return;
        }
        cout << "\'" << arr[i] << "\',";
    }    
}

int main() {

    string choice;
    int n = 1000;
    string book[n];
    cout << "\nwelcome to library \n";
    cout << "Instructions :-\nThis book can take upto 1000 entries, to increase the size of book type \'Size\'\n";
    cout << "type \"Exit\" to exit\n";
while (1){
    cout << "\nchoose \n1 to add new books\n2 to delete a perticular record\n3 to modify records\n4 to display record";
    cout << "enter your choice : ";
    cin >> choice;

// changes the size of book 
    if (choice == "Size" || choice == "size"){
        cout<<"\nEnter new size :";
        cin >> n;
        cout << "Done ! \n\n";
        continue;
    }

// exit condition
    if (choice == "exit" || choice == "Exit"){
        cout << "\nThank you!!\n";
        break;
    }

// To add entries
    if (choice == "1"){
        for (int i = 0; i < n; i++) {
            string item;
            cout << "Enter record : ";
            cin >> item;
            if (item == "exit" || item == "Exit"){
                break;
            }
            book[i] = item;
        }
        cout<<"Done !\n\n";
        continue;
    }

// to delete entries
    if (choice == "2"){
        string item; 
        display(book, n);
        cout << "Enter item to be deleted : ";
        cin >> item;
        int i;
        for (i = 0; i < n; i++)
            if (book[i] == item)
                break;
        
        if (i < n){
            n = n - 1;
            for (int j = i; j<n; j++){
                book[j] = book[j + 1];
            }
        }
        cout << "Done !\n\n";
        continue;
    }

// modify entries
    if (choice == "3"){
        string item, item2;
        display(book, n);
        cout << "Modify : ";
        cin >> item;
        cout << " --> To : ";
        cin >> item2;
        int i;
        for (i = 0; i < n; i++) 
            if (item == book[i])
                break;
        book[i] = item2;
        cout << "Done !\n\n";
        continue;
    }
    if (choice == "4"){
        display(book, n);
        continue;
    } else {
        cout << "Invalid Choice :|";
        continue;
    }
    
}

return 0;
}
