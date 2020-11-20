# DataComm.Assignment2563
## Frame :
### Fixed Size/ Stop and Wait ARQ/ Bit-Oriented<br />
1. **dataframe(16 bit):**<br />
- flag{2} - control{2} - Sender{1} - Receiver{1} -angle{2}- data{4} - crc(x^2+1){2}  - flag{2}
2. **ack(16 bit):**<br />
 - flag{2} - control{2} - Sender{1} - Receiver{1} - _bit0{5} -  ACKNumber{1} - crc(x^2+1){2}  - flag{2}
3. **initial(16 bit):**<br />
 - flag{2} - control{2} - Sender{1} - Receiver{1} - _bit0{2} - choose{4} - crc(x^2+1){2}  - flag{2}
 - flag{2} - control{2} - Sender{1} - Receiver{1} - all_bit0{6} - crc(x^2+1){2}  - flag{2}
4. **other:**<br />
- flag{3}  -> 101 <br />
- control{2} -><br />
 -  00 -> DataFrame<br />
 -  01 -> ACK<br />
 -  10 -> initial - choose<br />
 - 11 -> initial - all<br />
- ACKNumber{1} -> 0 or 1 (stop and wait)<br />
## 4-FSK Encoding Rule
- 00 -> 3 cycles/baud
- 01 -> 5 cycles/baud
- 10 -> 8 cycles/baud
- 11 -> 11 cycles/baud
## example:
- dataframe from A to B data "0010" 
> -> 1010001001010101<br />
->10 10 00 10 01 01 01 01<br />
-> 8 8 3 8 5 5 5 5<br />
