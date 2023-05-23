// Project 5
// CS 2413 Data Structures
// Spring 2023

// Code generated for input 1 would be:
// if(expression1)
// {
//     statement1;
// }
// else
// {
//     statement2;
// }

#include <iostream>
#include <string> // for the fields in the class
#include <vector> // for the flowchart structures
#include <stack>  // for conversion

using namespace std;

// class to store node information
class Node
{
private:
    int nodeNumber;    // to store the node number
    string type;       // can either be START, END, IF, BLOCK
    string textWithin; // can be expression or statement - for START and END this will be empty string
public:
    // constructors
    Node(); // default constructor
    Node(int nodeNum, string t, string tW); // non-default constructor
    
    // getters
    int getNodeNum(); // gets node number
    string getType(); // gets type
    string getTextWithin(); // gets text within node
    
    // setters
    void setNodeNum(int nodeNum); // sets node number
    void setType(string t); // sets type
    void setTextWithin(string txtWithin); // sets text within node
};

// Constructors
// Default Constuructor
Node::Node() {}

// Non-default Constructor
Node::Node(int nodeNum, string t, string tw) {
    nodeNumber = nodeNum;
    type = t;
    textWithin = tw;
}

// Getters
// Gets node number
int Node::getNodeNum() {
    return nodeNumber;
}

// Gets type
string Node::getType() {
    return type;
}

// Gets text within node
string Node::getTextWithin() {
    return textWithin;
}

// Setters
// Sets node number
void Node::setNodeNum(int nodeNum) {
    nodeNumber = nodeNum;
}

// Sets type
void Node::setType(string t) {
    type = t;
}

// Sets text within node
void Node::setTextWithin(string txtWithin) {
    textWithin = txtWithin;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//function to convert the given flowchart to generate code
void convertFlowChart(vector<Node>& allNodes, vector<vector<int> >& adjList, int currentNode) {
    
    if (allNodes[currentNode].getType() == "START") {
        cout << "start\n";
        if (!adjList[currentNode].empty()) {
            convertFlowChart(allNodes, adjList, adjList[currentNode][0]);
        }
    }
    else if (allNodes[currentNode].getType() == "IF") {
        cout << "if (" << allNodes[currentNode].getTextWithin() << ")\n{\n";
        convertFlowChart(allNodes, adjList, adjList[currentNode][0]);
        cout << "\n}\nelse\n{\n";
        convertFlowChart(allNodes, adjList, adjList[currentNode][1]);
        cout << "\n}\n";
    }
    else if (allNodes[currentNode].getType() == "BLOCK") {
        cout << allNodes[currentNode].getTextWithin() << "\n";
        if (!adjList[currentNode].empty()) {
            if (allNodes[adjList[currentNode][0]].getType() == "BLOCK") {
                string b =allNodes[adjList[currentNode][0]].getTextWithin();
            }
            else if (allNodes[adjList[currentNode][0]].getType() == "END") {
                string last = "end";
            }
            else {
                convertFlowChart(allNodes, adjList, adjList[currentNode][0]);
            }
        }
    }
    else if (allNodes[currentNode].getType() == "END" && adjList[currentNode].empty()) {
        cout << "end" << endl;
    }
}

bool occursOnlyOnce(vector<vector<int> >& adjList, int target) {
    int count = 0;

    for (size_t i = 0; i < adjList.size(); i++) {
        for (size_t j = 0; j < adjList[i].size(); j++) {
            if (adjList[i][j] == target) {
                count++;
                if (count > 1) {
                    return false;
                }
            }
        }
    }

    return count == 1;
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
    int numNodesInFlowChart; // number of nodes in the flow chart

    cin >> numNodesInFlowChart;
    cout << "Number of nodes: " << numNodesInFlowChart << endl;

    // Node objects array to store all the information
    vector<Node> allNodes(numNodesInFlowChart);

    // read in the information about the nodes and store it in allNodes
    int nNum;
    string type;
    string txtWithin;
    
    for (int i = 0; i < numNodesInFlowChart; i++) {
        cin >> nNum;
        cout << nNum << ": ";
        
        if (i == 0 || i == numNodesInFlowChart-1) {
            
            cin >> type;
            cout << type << " node" << endl;
        }
        else {
            cin >> type;
            cin >> txtWithin;
            cout << type << " node - " << txtWithin << endl;
        }
        Node n = Node(nNum, type, txtWithin);
        allNodes[nNum] = n;
    }

    // adjacency list to store the flow chart
    vector<vector<int> > adjList(numNodesInFlowChart);
    int vNum;
    string vT;
    int first;
    int second;

    // reads in the adjaceny list
    cout << "AdjList:" << endl;
    
    for (int i = 0; i < numNodesInFlowChart; i++) {
        cin >> vNum;
        vT = allNodes[vNum].getType();
        vector<int> v;
        cout << vNum << ": ";
        
        if (vT == "START") {
            cin >> first;
            v.push_back(first);
            cout << first << endl;
        }
        
        if (vT == "IF") {
            cin >> first;
            cin >> second;
            v.push_back(first);
            v.push_back(second);
            cout << first << " " << second << endl;
        }
        
        if (vT == "BLOCK") {
            cin >> first;
            v.push_back(first);
            cout << first << endl;
        }
        
        if (vT == "END") {
            cout << endl;
        }
        
        adjList[vNum] = v;
    }
    // call the convertFlowChart function with the allNodes and adjList parameters
    convertFlowChart(allNodes, adjList, 0);

    bool one = false;
    for (int i = 0; i < numNodesInFlowChart; i++) {
        one = occursOnlyOnce(adjList, i);
        if (one && !adjList[i].empty()) {
            cout << allNodes[numNodesInFlowChart-2].getTextWithin()<< endl;
            break;
        }
    }

    cout << "end" << endl;

    return 0;
}


