The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)<br>

P   A   H   N<br>
A P L S I I G<br>
Y   I   R<br>
And then read line by line: "PAHNAPLSIIGYIR"<br>
Write the code that will take a string and make this conversion given a number of rows:<br>

string convert(string text, int nRows);<br>
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".<br>

主要出错地方：那个if语句顺序不能颠倒；<br>
            if (i < nRows - 1 && i>0 && j>i)  //这一句还是不能太理解，主要是为了输出中间单独一行的字母 <br>
                result += s.at(j - i);      
