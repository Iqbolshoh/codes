<?php
$file_path = "file.txt";

if (!file_exists($file_path)) {
    $file = fopen($file_path, "w") or die("Yangi fayl yaratib bo'lmadi!");
    fwrite($file, "File yaratldi");
    fclose($file);
}

$file = fopen($file_path, "r+") or die("Faylni ochib bo'lmadi!");

$data = fread($file, filesize($file_path));
echo $data;

$str =  $c . " Iqbolshoh <br>";

fwrite($file, $str);

fclose($file);
