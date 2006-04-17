<?php
// $Id$

  global $mime_types;

  // set image mime_types to process
  $mime_types['images'] = array (
    0 => 'IMAGE/GIF',
    1 => 'IMAGE/JPEG',
    2 => 'IMAGE/PNG',
    //3 => 'IMAGE/TIFF', //no display support by browser?! (Firefox)
    //3 => 'IMAGE/SVG', //not supported by image.module
  );

?>