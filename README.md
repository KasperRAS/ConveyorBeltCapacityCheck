# ConveyorBeltCapacityCheck
Below you'll find a brief description of the code for the ConveyorBeltCapacityCheck assignment.

# Task
The task was to build a program which checks for the current number of motors
on a conveyor belt and how many kilograms of packages are to be put on said 
belt and check it against the sum total weight capacity of the motors.

# Files
ConveyorFlow.png           (Flowchart of the intended function of the program)
main.c                     (Program source code)
.vscode/launch.json        (editor/debug/build config)
README.md                  (this README)

# Inputs/Outputs
Inputs:  - Number of motors ("How many motors are carrying the packages?")
         - Weight of the packages ("How many kg of packages do we expect?")

Outputs: - "Yes! The conveyor belt can carry the packages." in case the weight is within the capacity limits of the motors.
         - "No. The conveyor belt cannot carry the packages." in case weight exceeds maximum capacity of the motors.

# Notes
A question about whether to run the program has been added at the end of the program.
Answering no (n) to this terminates the program.

# Issues
Providing decimal numbers as input for the motor count will break/terminate the program.
A fix for this is however not within the scope of chapters 2 and 3 of the book and has therefore not been implemented.

Providing decimal numbers with comma as a separator will also break/terminate the program.
Taking this into account is also not within chapter 2 and 3.

Any motor count divisible by 3 resulted in rounding errors and the termination of the program.
A tiny constant (EPS) has been added to remedy this.