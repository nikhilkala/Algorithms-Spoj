<?php
function bytesToSize1024($bytes, $precision = 2) {
    $unit = array('B','KB','MB');
    return @round($bytes / pow(1024, ($i = floor(log($bytes, 1024)))), $precision).' '.$unit[$i];
}

$target_dir = "uploads/";
$target_file = $target_dir . basename($_FILES["image_file"]["name"]);
$uploadOk = 1;
$imageFileType = pathinfo($target_file,PATHINFO_EXTENSION);
$sFileType = $_FILES['image_file']['type'];
$sFileSize = bytesToSize1024($_FILES['image_file']['size'], 1);
//echo $imageFileType;
// mime type
/*if(isset($_POST["submit"])) {
    $check = getimagesize($_FILES["image_file"]["tmp_name"]);
    if($check !== false) {
        echo "File is an image - " . $check["mime"] . ".";
        $uploadOk = 1;
    } else {
        echo "File is not an image.";
        $uploadOk = 0;
    }
}*/
// redudancy check
if (file_exists($target_file)) {
    echo "Sorry, file already exists.";
    $uploadOk = 0;
}
// Check file size
if ($_FILES["image_file"]["size"] > 50000000) {
    echo "Sorry, your file is too large.";
    $uploadOk = 0;
}
// Allow certain file formats
/*if($imageFileType != "jpg" && $imageFileType != "png" && $imageFileType != "jpeg"
&& $imageFileType != "gif" ) {
    echo "Sorry, only JPG, JPEG, PNG & GIF files are allowed.";
    $uploadOk = 0;
}*/
// Check if $uploadOk is set to 0 by an error
if ($uploadOk == 0) {
    echo "<br>Sorry, your file was not uploaded.";
//  if everything is ok, try to upload file
} else {
    if (move_uploaded_file($_FILES["image_file"]["tmp_name"], $target_file)) {
        echo "<br>The file ". basename( $_FILES["image_file"]["name"]). " has been uploaded.<br>";
        echo "The type of file is:".$sFileType."<br>";
        echo "Size:".$sFileSize;

    } else {
        echo "<br>Sorry, there was an error uploading your file.";
    }
}
?>