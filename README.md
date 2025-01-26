<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <h1>Day 1</h1>
    <h2>1. Problem Statement</h2>
    <p>
        <strong>Problem:</strong> You are tasked with creating a class called <code>Student</code> that represents a student's details. 
        This class should have the following attributes:
    </p>
    <ul>
        <li><strong>age</strong> (an integer representing the student's age)</li>
        <li><strong>first_name</strong> (a string representing the student's first name)</li>
        <li><strong>last_name</strong> (a string representing the student's last name)</li>
        <li><strong>standard</strong> (an integer representing the student's current standard/class)</li>
    </ul>
    <p>You should implement the following functionality:</p>
    <ul>
        <li>Setter and Getter Methods for each attribute.</li>
        <li><code>to_string()</code> method that returns a comma-separated string of the student's details.</li>
    </ul>
    <p>
        The input format consists of 4 lines representing the student's age, first name, last name, and standard. The output should be a string returned by the <code>to_string()</code> method.
    </p>
    <h2>2. Coding Platform</h2>
    <p>
        This problem was solved using <strong>C++</strong> as the programming language. The code can be tested on platforms such as:
    </p>
    <ul>
        <li><a href="https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true">HackerRank</a></li>
    </ul>
    <h2>3. Approach & Solution Explanation</h2>
    <p>
      In this solution, we are creating a Student class that stores information about a student, including their age, first name, last name, and standard (class).
<ul>
<li><strong>Attributes:</strong>
The class has four private attributes: age_stu, first_name_stu, last_name_stu, and standard_stu to store the student’s details.</li>


<li><Strong>Setter Methods:</strong>
These methods (e.g., set_age, set_first_name, set_last_name, and set_standard) are used to assign values to the student's attributes. They receive input values and store them in the corresponding variables.</li>

<li><strong>Getter Methods:</strong>
These methods (e.g., get_age, get_first_name, get_last_name, and get_standard) are used to retrieve the values of the student's attributes when needed.</li>

<li><strong><code>to_string()</code> Method:</strong>
This method converts the student’s data into a single string format. It concatenates the values of age_stu, first_name_stu, last_name_stu, and standard_stu into a comma-separated string and returns it.</li>
</ul>
    </p>
    <hr>
</body>
</html>
