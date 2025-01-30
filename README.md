<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <h1>Day 1</h1>
    <h3>1. <a href="https://www.hackerrank.com/challenges/c-tutorial-class/problem">Problem Statement</a></h3>
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
    <h3>2. Coding Platform</h3>
    <p>
        This problem was solved using <strong>C++</strong> as the programming language. The code can be tested on platforms such as:
    </p>
    <ul>
        <li><a href="https://www.hackerrank.com/challenges/c-tutorial-class/problem">HackerRank</a></li>
    </ul>
    <h3>3. Approach & Solution Explanation</h3>
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
<!--------------------------------------------------------------------------------------Day 1-------------------------------------------------------------------------------------->

<h1>Day 2</h1>
    <h3>1. <a href="https://www.hackerrank.com/challenges/classes-objects/problem">Problem Statement</a></h3>
    <p>
        <strong>Problem:</strong> A class defines a blueprint for an object. We use the same syntax to declare objects of a class as we use to declare variables of other basic types. For example:
    </p>
    <ul>
        <li><strong><code>Box box1</code></strong>       // Declares variable box1 of type Box</li>
        <li><strong><code>Box box2</code></strong>       // Declares variable box2 of type Box</li>
    </ul>
    <p>Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the 5 exams given during this semester.</p>
    <p>Create a class named<strong> Student</strong> with the following specifications:</p>
    <ul>
        <li>An instance variable named <strong>scores</strong> to hold a student's 5 exam scores.</li>
        <li>A <code>void input()</code> function that reads 5 integers and saves them to <strong>scores</strong>.</li>
        <li>An <code>int calculateTotalScore()</code> function that returns the sum of the student's scores.</li>
    </ul>
    <h3>2. Coding Platform</h3>
    <p>
        This problem was solved using <strong>C++</strong> as the programming language. The code can be tested on platforms such as:
    </p>
    <ul>
        <li><a href="https://www.hackerrank.com/challenges/classes-objects/problem">HackerRank</a></li>
    </ul>
    <h3>3. Approach & Solution Explanation</h3>
    <p>
      In this solution, we are creating a Student class that stores marks of 5 subjects of a student.
<ul>
<li><strong><code>void input():</code></strong>
In this member function taking 5 subjects marks as an input and storing it into <strong>scores</strong>.</li>

<li><Strong><code>int calculateTotalScore(): </code></strong>
In this member function adding each subject marks and storing it into strong <code>sum_marks</code> and return it to the <code>main()</code> function.</li>

</ul>
    </p>
    <hr>
<!-----------------------------------------------------------------------------------Day 2---------------------------------------------------------------------------------------->
<h1>Day 3</h1>
     <h3>1. <a href="https://www.hackerrank.com/challenges/inheritance-introduction/problem">Problem Statement</a></h3>
    <p>
        <strong>Problem:</strong>The class Triangle has a function called triangle(). Now we create a class derived from the base class Triangle called Isosceles.
    </p>
    <p>Now we can create a derived class object and use it to access the functions of the base class.</p>
    <code>int main(){
    Isosceles isc;
    isc.isosceles();
    isc.triangle();
    return 0;
}</code>
    <p>This code will print:<br>
    <code>I am an isosceles triangle
        I am a triangle</code></p>
        <p>Now write a function in Isosceles class such that the output is as given below.
<br><strong>Sample Output: </strong>
<code>
I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle</code></p>
    <h3>2. Coding Platform</h3>
    <p>
        This problem was solved using <strong>C++</strong> as the programming language. The code can be tested on platforms such as:
    </p>
    <ul>
        <li><a href="https://www.hackerrank.com/challenges/inheritance-introduction/problem">HackerRank</a></li>
    </ul>
    <h3>3. Approach & Solution Explanation</h3>
    <p>
      In this solution, we are creating a <code>int description()</code> member function.
<ul>
    <li>The <code>void description()</code> is created in the <strong>isosceles class</strong> which is derived from the base class <strong>Triangle</strong>
<li><strong><code>void description():</code></strong>
It used to print the <strong>In an isosceles triangle two sides are equal</strong> when it called by the <code>int main()</code> function by creating <strong>object</strong> of <code>Triangle</code> class.</li>
    
</ul>
    </p>
    <hr>
<!----------------------------------------------------------------------------Day 3--------------------------------------------------------------------------------------------->
<h1>Day 4</h1>
    <h3>1. <a href="https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem">Problem Statement</a></h3>
    <p>
        <strong>Problem:</strong>Create an Equilateral class that inherits from Isosceles and should have a function such that the output is as given below.<br>
            <code>Equilateral</code> class contains a member function which prints <strong>"I am an equilateral triangle"</strong>
        </p>
    <h3>2. Coding Platform</h3>
    <p>
        This problem was solved using <strong>C++</strong> as the programming language. The code can be tested on platforms such as:
    </p>
    <ul>
        <li><a href="https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem">HackerRank</a></li>
    </ul>
    <h3>3. Approach & Solution Explanation</h3>
    <p>
      In this solution, we are creating a <code>Equilateral</code> class derived from <code>Isosceles</code>class.
<ul>
    <li>The <code>void equilateral()</code> is created in the <strong>Equilateral class.</strong></li>
<li><strong><code>void equilateral():</code></strong>
It used to print the <strong>I am an equilateral triangle</strong> when it called by the <code>int main()</code> function by creating <strong>object</strong> of <code>Equilateral</code> class.</li>
    
</ul>
    </p>
    <hr>
<!-------------------------------------------------------------------------------Day 4------------------------------------------------------------------------------------->
<h1>Day 5</h1>
    <h3>1. <a href="https://www.hackerrank.com/challenges/rectangle-area/problem">Problem Statement</a></h3>
    <p>
        <strong>Problem:</strong>In this challenge, you are required to compute the area of a rectangle using classes.<br>
        Two classes are:<br>
        <strong>1. Rectangle class: </strong><br>
        <ul>
            <li>This class should have two private integer data members: <code>width</code> and <code>height</code></li>
            <li>It should contain a <code>display()</code> method that prints the values of <code>width</code> and <code>height</code> separated by a space.</li>
        </ul>
        <strong>2. RectangleArea class: </strong><br>
        <ul>
            <li>This class should contain a <code>read_input()</code> method to take user input for <code>width</code> and <code>height</code></li>
            <li>It should override the <code>display()</code> method to print the area of the rectangle.</li>
        </ul>
        </p>
    <h3>2. Coding Platform</h3>
    <p>
        This problem was solved using <strong>C++</strong> as the programming language. The code can be tested on platforms such as:
    </p>
    <ul>
        <li><a href="https://www.hackerrank.com/challenges/rectangle-area/problem">HackerRank</a></li>
    </ul>
    <h3>3. Approach & Solution Explanation</h3>
    <p>
      In this solution, we are creating two classe as mentioned in the problem statement Rectangle and RectangleArea class.
<ul>
    <strong>1. Rectangle class:</strong>
    <li>In this class we have <code>width</code> and <code>height</code> as protected data members and <code>void display()</code> as member function which prints the output as width and height.</li>
<li><strong><code>void equilateral():</code></strong>
It is used to print the <strong>I am an equilateral triangle</strong> when it is called by the <code>int main()</code> function by creating <strong>object</strong> of <code>Equilateral</code> class.</li>
  <strong>2. RectangleArea class:</strong>Derived from base class Rectangle
    <li>This class contains <code>void read_input()</code> as a member function which takes input in width and height and one more function <code>void display()</code> it print area of rectangle.</li>
</ul>
    </p>
    <hr>
</body>
</html>
