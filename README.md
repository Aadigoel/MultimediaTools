# MultimediaTools
<img src = "multimedia.jpg">

## Introduction
This project consists of different tools to work three types of data

- Text
- Audio
- Images

### Text data : Text Editor
To work with text data, we have a text editor. The text editor has several functions

- Creating a new file/overwriting existing files
- Displaying the text written in files that exist
- Appending data(text) to files that already exist
- Deleting files
- Finding patterns where a particular string can be identified and found in a given file

These above functions showcase the various file handling capabilities that exist in C

### Audio data : Volume mixer
To work with audio data, we have a volume mixer.
This function takes in .wav files as an input and changes the volume of the audio by a factor given by the user. 

- The .wav files have two parts to them. The first 44 bytes of data is called the header of the file and contains information about the file rather than the audio data. It is stored in the form of unsigned 8-bit integers. This part is copied from the input file to the output file unchanged.
- The second part contains the audio data. This is stored in the form of unsigned 16-bit integers. The absolute value of each integer determines the default volume of the audio sample.
- The volume can now be changed by multiplying each 16-bit integer by the factor provided by the user. If the user doesn't provide any factor, it is assumed to be one. This altered data is now added to the output file to obtain the final output. 

### Images : Filters
For images, we have 4 filters each of which can be applied to the given image.

- The 4 filters are Grayscale, Reflection, Blur effect and Edge detection.
- These filters are important as a pre-requisite step to be carried out for feature extraction for image processing purposes.
- We use images in the bitmap format (defined by Microsoft). In this format, each image is a 3-dimensional tensor. Each 2-dimensional matrix corresponds to one of the three primary colours (R - red, B - blue, G - green)
- The intensity of the colour is given as a number between 0 and 255 (8 bits or 1 byte). Each pixel therefore has 3 bytes of data. 
- Manipulating these pixels let's us create different effects
- <h5> Grayscale : </h5> The average value of the Red, Blue and Green components gives us a value between 0 and 255 in grey scale
- <h5> Reflection : </h5> This involves swapping of pixels placed symmetrically on either side of the center
- <h5> Blur : </h5> This achieves the gaussian blur effect by replacing the value for a pixel by the average value of all its surrounding neighbours
- <h5> Edge Detection : </h5> This implements Sobel's edge detection by convoluting pre-determined 3x3 matrices over the entire image
