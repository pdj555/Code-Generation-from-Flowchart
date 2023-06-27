# Code Generation from Flowchart Program

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

## Conclusion

By utilizing this code generation program, you have automated the process of converting flowchart diagrams into executable code. The program's ability to analyze the flowchart's structure, extract relevant information, and generate code snippets will greatly enhance your productivity and reduce the manual effort required to implement algorithms or processes represented by flowcharts.

Should you encounter any issues or have questions about the program's functionality, feel free to seek assistance from the project supervisor or refer to the program's documentation and relevant resources. Congratulations on completing the project and enjoy the benefits of automated code generation from flowcharts!
