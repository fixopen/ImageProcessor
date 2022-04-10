#include <iostream>

// use module, concepts, coroutine, lambda
// cross platform
// include io, codecs & algorithm
// use cmake & makefile
// convert
// use GPU
// use opencv
// use soil2
// use gil
// use CxImage OpenGL CImg DevIL GD2 Simd GLI SAIL GLraw OpenEXR ImageMagick OpenImageIO OpenMVG SVG++ FreeImage libvips tesseract-ocr Video++
// use jasper turbojpeg libjpeg turbojpeg-turbo libpng libtiff libwebp TGA Giflib STB ImageStone EXIF

// Works with any supported channel depth, color space, channel ordering (RGB vs BGR), and row alignment policy.
// Works for both planar and interleaved images.
// Works with new color spaces, channel depths and image types that can be provided in future extensions of GIL
// The version is as efficient as the hand-coded version

// Structure (planar vs. interleaved)
// Color space and presence of alpha (RGB, RGBA, CMYK, etc.)
// Channel depth (8-bit, 16-bit, etc.)
// Order of channels (RGB vs. BGR, etc.)
// Row alignment policy (no alignment, word-alignment, etc.)

void say_hello() { std::cout << "Hello, from ImageProcessor!\n"; }
