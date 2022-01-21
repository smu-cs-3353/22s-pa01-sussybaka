/**
 * Outline: The tokStr function tokenizes a string given a token.
 * Date: 12/4/21
 * Author: Gabriel Mongaras
 * Input: A string and a token
 * Output: A vector of strings broken up by the token
 */




#ifndef INC_21F_FINAL_PROJ_TEMPLATE_TOKSTR_H
#define INC_21F_FINAL_PROJ_TEMPLATE_TOKSTR_H


#include <string>
#include <vector>


/**
 * tokStr
 * Tokenizes a string given a token
 * @param str The string to tokenize
 * @param tok The token used to tokenize the string
 * @param times The number of times to tokenize the string. If it's -1,
 *              The number of times doesn't matter.
 * @return A vector holding the tokenized string
 */
std::vector<std::string> tokStr(std::string& str, std::string tok = " ", int times = -1);





#endif //INC_21F_FINAL_PROJ_TEMPLATE_TOKSTR_H
