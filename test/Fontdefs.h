#ifndef    __Font_defs__
#define    __Font_defs__


const char* const BAD_FONT_FILE  =  "missing_font.ttf";
const char* const GOOD_FONT_FILE = "../../test/MHei-Medium-Acro";
const char* const FONT_FILE      = "../../test/arial.ttf";

const char* const GOOD_ASCII_TEST_STRING        = "test string";
const char* const BAD_ASCII_TEST_STRING         = "";
const wchar_t GOOD_UNICODE_TEST_STRING[4] = { 0x6FB3, 0x9580, 0x0};
const wchar_t* const BAD_UNICODE_TEST_STRING    = L"";

const unsigned int GOOD_SIZE  = 72;
const unsigned int RESOLUTION = 72;
const unsigned int CHARACTER_SIZE      = 72 * 64;

const unsigned int CHARACTER_CODE_A        = 'A';
const unsigned int CHARACTER_CODE_G        = 'g';
const unsigned int BIG_CHARACTER_CODE      = 0x6FB3;
const unsigned int NULL_CHARACTER_CODE     = 512;
const unsigned int NULL_CHARACTER_INDEX    = ' ';
const unsigned int SIMPLE_CHARACTER_INDEX  = 'i';
const unsigned int COMPLEX_CHARACTER_INDEX = 'd';

const unsigned int FONT_INDEX_OF_A = 34;
const unsigned int BIG_FONT_INDEX  = 4838;
const unsigned int NULL_FONT_INDEX = 0;

const unsigned int NUMBER_OF_GLYPHS = 50;
const unsigned int TOO_MANY_GLYPHS  = 14100; // MHei-Medium-Acro has 14099


#include "arial_ttf.cpp"

#endif // __Font_defs__