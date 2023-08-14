#include <iostream>

using namespace std;

//  ฅ^•ﻌ•^ฅ

// Node
struct Node{
    int data;
    int height;

    Node* left;
    Node* right;

    Node(int DATA) : data(DATA), height(1), left(nullptr), right(nullptr) {}

};

// Create AVL tree
Node* root = nullptr;

// Lay chieu cao cua Node
int getHeight(Node* cha){
    if(cha == nullptr)
        return 0;

    return cha->height;
}


int getBAL(Node* cha){
    if(cha == nullptr)
        return 0;

    return getHeight(cha->left) - getHeight(cha->right);
}

Node* getMinNode(Node* cha){
    Node* cur = cha;
    while(cur->left)
        cur = cur->left;

    return cur;
}

Node* singleRotateLeft(Node* cha){
    Node* newRoot = cha->right;
    cha->right = newRoot->left;
    newRoot->left = cha;

    cha->height = max(getHeight(cha->left), getHeight(cha->right)) + 1;
    newRoot->height = max(getHeight(newRoot->left), getHeight(newRoot->right)) + 1;
    
    return newRoot;
}


Node* singleRotateRight(Node* cha){
    Node* newRoot = cha->left;
    cha->left = newRoot->right;
    newRoot->right = cha;

    cha->height = max(getHeight(cha->left), getHeight(cha->right)) + 1;
    newRoot->height = max(getHeight(newRoot->left), getHeight(newRoot->right)) + 1;
    
    return newRoot;
}


Node* doubleRotateLeft(Node* cha){
    cha->right = singleRotateRight(cha->right);

    return singleRotateLeft(cha);
}


Node* doubleRotateRight(Node* cha) {
    cha->left = singleRotateLeft(cha->left);
    
    return singleRotateRight(cha);
}


Node* insert(Node* cha, int data){
    if(cha == nullptr)
        return new Node(data);

    if(data < cha->data){
        cha->left = insert(cha->left, data);
    }
    else if(data > cha->data){
        cha->right = insert(cha->right, data);
    }
    else 
        return cha;

    cha->height = max(getHeight(cha->left), getHeight(cha->right)) + 1;

    if(getBAL(cha) > 1){
        if(data < cha->left->data)
            return singleRotateRight(cha);
        else
            return doubleRotateRight(cha);
    }
    else if(getBAL(cha) < -1){
        if(data > cha->right->data)
            return singleRotateLeft(cha);
        else
            return doubleRotateLeft(cha);
    }

    return cha;
}


Node* Delete(Node* cha, int data){
    if(cha == nullptr)
        return cha;

    if(data < cha->data){
        cha->left = Delete(cha->left, data);
    }
    else if(data > cha->data){
        cha->right = Delete(cha->right, data);
    }
    else{
        if(cha->left == nullptr && cha->right == nullptr){
            cha = nullptr;
        }
        else if(cha->left == nullptr){
            cha = cha->right;
        }
        else if(cha->right == nullptr){
            cha = cha->left;
        }
        else{
            Node* tmp = getMinNode(cha->right);
            cha->data = tmp->data;
            cha->right = Delete(cha->right, tmp->data);
        }
    }

    if(cha == nullptr)
        return cha;

    cha->height = max(getHeight(cha->left), getHeight(cha->right)) + 1;

    if (getBAL(cha)){
        if (getBAL(cha->left) >= 0)
            return singleRotateRight(cha);
        else
            return doubleRotateRight(cha);
    }

    else if(getBAL(cha)){
        if(getBAL(cha->right) <= 0)
            return singleRotateLeft(cha);
        else
            return doubleRotateLeft(cha);
    }

    return cha;
}

bool search(Node* cha, int data){
    if(cha == nullptr)
        return false;

    if(cha->data == data)
        return true;
    else if(data < cha->data)
        return search(cha->left, data);
    else 
        return search(cha->right, data);

    return false;
}


// Print

// NLR
void printPreOrder(Node* cha){
    if(cha == nullptr)
        return;
    
    cout << cha->data << endl;
    
    printPreOrder(cha->left);
    
    printPreOrder(cha->right);
}


void printInOrder(Node* cha){
// LNR
    if(cha == nullptr)
        return;
    
    printPreOrder(cha->left);

    cout << cha->data << endl;
    
    printPreOrder(cha->right);
}

void printPostOrder(Node* cha){
// LRN
    if(cha == nullptr)
        return;
    
    printPreOrder(cha->left);
    
    printPreOrder(cha->right);

    cout << cha->data << endl;
}

void Line(){
    cout << "-------------------------\n";
}

void Menu(){
    cout << "Welcome to AVL tree!\n";
    
    int x, value;
    while(true){
        Line();
        cout << "Press 1 to Insert\n"
             << "Press 2 to Search\n"
             << "Press 3 to Delete\n"
             << "Press 4 to print PreOrder (NLR)\n"
             << "Press 5 to print InOrder (LNR)\n"
             << "Press 6 to print PostOrder (LRN)\n"
             << "Press 0 to exit\n"
             << "Your choice: ";
        cin >> x;

        switch(x){
            case 0:{
                return;
            }
            case 1:{
                cout << "Insert value:\n";
                cout << "Input value: ";
                cin >> value;
                root = insert(root, value);
                break;
            }
            case 2:{
                cout << "Search value:\n";
                cout << "Input value: ";
                cin >> value;
                if(search(root, value))
                    cout << "Exist\n";
                else
                    cout << "Not exist\n";
                break;            
            }
            case 3:{
                cout << "Delete value:\n";
                cout << "Input value: ";
                cin >> value; 
                if(search(root, value))
                    root = Delete(root, value);
                else
                    cout << "Invalid. Try again!\n";
                break;           
            }
            case 4:{
                cout << "PreOrder (NLR)\n";
                printPreOrder(root);
                break;
            }
            case 5:{
                cout << "InOrder (LNR)\n";
                printInOrder(root);
                break;
            }
            case 6:{
                cout << "postOrder (LRN)\n";
                printPostOrder(root);
                break;
            }
            default:{
                cout << "Invalid. Try again!\n";
                break;
            }
        }
    }
}


int main(){
    Menu();

    return 0;
}
