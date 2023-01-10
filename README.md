# Friend-or-foe-

The red kingdom is in war with the blue kingdom. You are the general of the red kingdom. The red army and the blue army have n soldiers combined (including you). The soldiers are all numbered from 1 to n. To keep track of who the red soldiers are, you noted down the numbers of your soldiers in a piece of paper. However, during the battle you lost that paper and now you are scared that you have no way of knowing who your own soldiers are. An assistant of yours says that he has noted down which soldier fought with which soldier in the battle. You see, the entire battle was fought as a series of duels between two soldiers, one from the red army and the other from the blue army.
Now, you know you are numbered 1 and you are a member of the red army. Combining the information provided by your assistant and the fact that your own number is 1, it is now possible to determine which soldiers are red and which are blue. Figure it out yourself now!


Input Format:
The input starts with two integers n and e, denoting the number of soldiers in the red and blue army combined, and the number of duels that were fought in the battle. e lines follow, each containing two integers u and v, meaning that a duel was fought between two soldiers numbered u and v respectively. It is guaranteed that no two soldiers from the same army will fight each other.


Constraints:
1<=n<=105
1<=e<=5*105
1<=u, v<=n

Output Format:
Output n lines, each containing a single character. If the i-th soldier is a red soldier, print "R" in the i-th line. If the i-th soldier is blue, print "B" in the i-th line. It is guaranteed that there will only be one possible correct answer according to the input.

Sample Input:
4 3
1 2
2 3
3 4

Sample Output:
R
B
R
B

Explanation:
Soldier 1 is you and you are obviously red. Since soldiers 1 and 2 fought each other, they are from different armies and thus soldier 2 is blue. By the same logic, soldier 3 is red, since he fought with soldier 2. Finally, soldier 4 is blue since he fought with soldier 3.

