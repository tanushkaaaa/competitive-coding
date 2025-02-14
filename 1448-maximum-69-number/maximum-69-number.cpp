class Solution {
public:
    int maximum69Number(int num) {
        //greedy
        int placeval = 0 ;
        int tem = num;
        int sixPlaceval = -1; 
        while (tem > 0){
            if (tem % 10 == 6){
                sixPlaceval = placeval;}
            tem = tem/10;
            placeval += 1;
        }
        if(sixPlaceval==-1) return num;

        return num+3*pow(10,sixPlaceval);
    }
};
// string numStr = to_string(num);
//         for (char &ch : numStr) { 
//             if (ch == '6') { 
//                 ch = '9';
//                 break; // Change only the first occurrence
//             }
//         }
//         return stoi(numStr);