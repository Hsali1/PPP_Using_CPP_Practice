#include "../../std_lib_facilities.h"

// int main(){

//     std::cout << "Please enter expression (We can handle + and -): " << std::endl;
//     std::cout << " add x to end expression (e.g., 1+2*3x): ";
//     int lval, rval, res;

//     std::cin >> lval;
//     if(!cin) error("no first operand");
    
//     for(char op; std::cin >> op;){
//         if(op != 'x') cin >> rval;
//         if(!cin) error("no first operand");
//         switch(op){
//             case '+':
//                 lval += rval;
//                 break;
//             case '-':
//                 lval -= rval;
//                 break;
//             case '*':
//                 lval *= rval;
//                 break;
//             case '/':
//                 lval /= rval;
//             default:
//                 std::cout << "Result: " << lval << std::endl;
//                 keep_window_open();
//                 return 0;
//         }
//     }

//     error("bad expression");
// }

// Input: 1+2+3+4
// Output: 10 (correct)
// Input: 1+2 * 3x
// Output: 9  (incorrect. answer should be 7)
// Program does not follow pemdas

