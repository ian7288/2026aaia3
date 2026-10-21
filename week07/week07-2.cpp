//week07-2.cpp 學習計畫Simulation 第三題不Easy的Easy題
//LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public://大資料結構moves裡面放 中資料結構move裡面放小資料結構int的i,j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={0};
        int who=1;
        string whoTable[3]={"Draw","A","B"};
        for(vector<int>move:moves){
            int i=move[0],j=move[1];
            a[i][j]=who;

            a[i][j]=who;
            if(a[0][0]==a[0][1]&& a[0][1]==a[0][2]&& a[0][2]==who)return whoTable[who];
            if(a[1][0]==a[1][1]&& a[1][1]==a[1][2]&& a[1][2]==who)return whoTable[who];
            if(a[2][0]==a[2][1]&& a[2][1]==a[2][2]&& a[2][2]==who)return whoTable[who];

            if(a[0][0]==a[1][0]&& a[1][0]==a[2][0]&& a[2][0]==who)return whoTable[who];
            if(a[0][1]==a[1][1]&& a[1][1]==a[2][1]&& a[2][1]==who)return whoTable[who];
            if(a[0][2]==a[1][2]&& a[1][2]==a[2][2]&& a[2][2]==who)return whoTable[who];

            if(a[0][0]==a[1][1]&& a[1][1]==a[2][2]&& a[2][2]==who)return whoTable[who];
            if(a[2][0]==a[1][1]&& a[1][1]==a[0][2]&& a[0][2]==who)return whoTable[who];
            if(who==1)who=2;
            else who=1;
            //myShowTable(a);暫時印出來,印完就不用再印了
        }
        //return "A";//先亂寫"A"會獲勝
        if (moves.size()==9)return "Draw";//平手
        else return "Pending";
    }

    void myShowTable(int a[3][3]){//秀板子的程式
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
};
