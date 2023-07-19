# Flowchart-to-Code Generator: Automating Code Generation from Flowcharts

This program is designed to automate the process of generating code from a given flowchart. By analyzing the flowchart's structure and symbols, the program automatically generates executable code that replicates the algorithm or process described by the flowchart.
Program Description

The program takes an adjacency list as input, representing the flowchart's structure. The flowchart consists of various nodes, including start and end nodes, decision or if nodes, and process blocks. These nodes are interconnected to define the flow of the algorithm.

The input is processed and stored as a vector of vectors, representing the adjacency list. Each node in the flowchart is defined by a node object, which contains fields to store information about that particular node. The node object class provides the necessary structure to hold details such as the node type, conditions, and actions associated with the node.

The code generation process begins by analyzing the flowchart's structure and nodes. The program traverses the flowchart, identifies the type of each node (START, END, IF, or BLOCK), and extracts the relevant information. Based on the node type and its associated data, the program generates code snippets or blocks that replicate the actions and logic specified by the flowchart.

The generated code is designed to accurately implement the algorithm or process described by the flowchart. It captures the sequence of actions, decision-making conditions, and any necessary loops or iterations. The resulting code is executable and can be run in a suitable programming language to achieve the desired functionality represented by the flowchart.

## Getting Started

To use this program effectively, follow these steps:

  1. Ensure you have completed the necessary project requirements, including understanding the concept of code generation from flowcharts.
  2. Prepare the flowchart's adjacency list representation, which will serve as the input for the program.
  3. Familiarize yourself with the node object class and its fields to understand how the program stores information about each node.
  4. Run the program and provide the flowchart's adjacency list as input.
  5. Review the generated code to ensure it accurately reflects the algorithm or process described by the flowchart.
  6. Execute the generated code in a suitable programming language to observe the expected functionality.

## Features and Capabilities

The program offers the following features and capabilities:

  - Automatic code generation from a flowchart's adjacency list representation.
  - Identification and processing of different types of nodes (START, END, IF, and BLOCK).
  - Extraction of relevant information associated with each node.
  - Generation of code snippets or blocks that accurately replicate the actions and logic specified by the flowchart.
  - Handling of complex scenarios, including nested if conditions and iterative loops.

## Input File Format

<img width="451" alt="Screenshot 2023-07-19 at 11 57 14 AM" src="https://github.com/pdj555/Flowchart-to-Code-Generator/assets/102199778/b0716158-9b55-44ed-9f40-286c09478a51">

The input file for the code generation program follows a specific format. Here is an example input file as a reference:

    5
    0 START
    1 IF expression1
    2 BLOCK statement1
    3 BLOCK statement2
    4 END
    0 1 
    1 2 3 
    2 4 
    3 4
    4

The input file consists of the following components:

1. **Number of Nodes**: The first line of the input file indicates the total number of nodes in the flowchart. In the example above, there are 5 nodes.

2. **Node Details**: For each node, the input file provides the node type and associated expression or statement. The node details are listed one after another. In the example, the details are as follows:
    - Node 0: Type is START.
    - Node 1: Type is IF, with the expression expression1.
    - Node 2: Type is BLOCK, with the statement statement1.
    - Node 3: Type is BLOCK, with the statement statement2.
    - Node 4: Type is END.

3. **Adjacency List**: After listing the node details, the input file provides the adjacency list. Each line of the adjacency list represents the connections from a node to other nodes. The line starts with the node number, followed by the numbers of nodes that it flows to. In the example, the adjacency list is as follows:
    - Node 0 flows to node 1 (01).
    - Node 1 has two flows: true flow to node 2 and node 3 (123).

## Sample Output
    Number of nodes: 5
    0: START node
    1: IF node - expression1
    2: BLOCK node - statement1
    3: BLOCK node - statement2
    4: END node
    AdjList:
    0: 1
    1: 2 3
    2: 4
    3: 4
    4: 
    start
    if (expression1)
    {
    statement1
    
    }
    else
    {
    statement2
    
    }
    statement2
    end

## Conclusion

By utilizing this code generation program, you have automated the process of converting flowchart diagrams into executable code. The program's ability to analyze the flowchart's structure, extract relevant information, and generate code snippets will greatly enhance your productivity and reduce the manual effort required to implement algorithms or processes represented by flowcharts.

Should you encounter any issues or have questions about the program's functionality, feel free to seek assistance from the project supervisor or refer to the program's documentation and relevant resources. Congratulations on completing the project and enjoy the benefits of automated code generation from flowcharts!
