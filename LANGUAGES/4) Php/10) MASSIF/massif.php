<?php
// Indekslangan massif e'lon qilish
$fruits = array("Apple", "Banana", "Cherry");

// Assoyiy massif e'lon qilish
$person = array("name" => "John", "age" => 30, "city" => "New York");

// Chetli massif e'lon qilish
$students = array(
array("name" => "Alice", "age" => 25),
array("name" => "Bob", "age" => 22),
array("name" => "Charlie", "age" => 28)
);

// Indekslangan massifni chiqarish
echo "Indekslangan massif: ";
print_r($fruits);

// Assoyiy massifni chiqarish
echo "Assoyiy massif: ";
print_r($person);

// Chetli massifni chiqarish
echo "Chetli massif: ";
print_r($students);